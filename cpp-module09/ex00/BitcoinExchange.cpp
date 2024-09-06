# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string inputFile)
{
    parseDataFile();
    parseInputFile(inputFile);

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    *this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    this->rates = obj.rates;
    return (*this);
}

BitcoinExchange::~BitcoinExchange(){}

void    BitcoinExchange::parseInputFile(std::string inputFile)
{
    std::ifstream   infile;
    std::string     line;
    std::string     date;
    size_t          pipe;
    double          qty;

    infile.open(inputFile.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: cant open input file." << std::endl;
    }
    getline(infile, line);
    if (line.compare("date | value"))
    {
        std::cerr << "Error: invalid input file format." << std::endl;
    }
    while (getline(infile, line))
    {
        char *endptr;
        pipe = line.find("|");
        date = trim(line.substr(0, pipe));
        qty = std::strtod(trim(line.substr(pipe + 1)).c_str(), &endptr);
        if (!isValidDate(date))
            std::cerr << "Error: bad input =>" << " " << date << std::endl;
        else if (pipe == std::string::npos)
            std::cerr << "Error: no '|' found." << std::endl;
        else if (qty < 0)
            std::cerr << "Error: not a positive number." << std::endl;
        else if (qty > 1000)
            std::cerr << "Error: too large a number." << std::endl;
        else
        {
            this->date = date;
            this->qty = qty;
            calculate();
            //std::cout << date << "   " << qty << std::endl;
        }
    }
    infile.close();
}

void    BitcoinExchange::parseDataFile()
{
    std::ifstream   infile;
    std::string     line;
    size_t          comma;
    std::string     date;
    double          price;  

    infile.open("data.csv");
    if (!infile.is_open())
    {
        std::cerr << "Error: Failed to open database file." << std::endl;
    }
    getline(infile, line);
    while (getline(infile, line))
    {
        comma = line.find(',');
        date = line.substr(0, comma);
        char    *endptr;
        price = std::strtod(line.substr(comma + 1).c_str(), &endptr);
        this->rates[date] = price;
    }
    infile.close();
}

void    BitcoinExchange::calculate()
{

    std::map<std::string, double>::iterator it = this->rates.lower_bound(this->date);
    if (this->date != it->first)
        --it;
    std::cout << this->date << " => " << this->qty << " = " << (this->qty * it->second) << std::endl;
    //std::cout << "Price at " << it->first << " is: " << it->second << std::endl; 
    //std::cout << it->second << std::endl;
}

std::string BitcoinExchange::trim(const std::string& input) 
{
    size_t start = 0;
    size_t end = input.length() - 1;

    // Find the position of the first non-whitespace character from the beginning
    while (start <= end && std::isspace(input[start])) {
        start++;
    }

    // Find the position of the first non-whitespace character from the end
    while (end >= start && std::isspace(input[end])) {
        end--;
    }

    // Extract the trimmed substring
    return input.substr(start, end - start + 1);
}

bool BitcoinExchange::isValidDate(const std::string& dateStr) 
{
    if (dateStr.length() != 10) {
        return false;  // The string should be exactly 10 characters long (YYYY-MM-DD).
    }

    int year, month, day;
    if (std::sscanf(dateStr.c_str(), "%d-%d-%d", &year, &month, &day) != 3) {
        return false;  // Failed to parse year, month, and day as integers.
    }
   //std::cout << year << " " << month << " " << day << std::endl;

    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;  // Invalid values for year, month, or day.
    }

    if (year < 2009) {
        return false;  // Date is earlier than 2009.
    }

    if (year == 2009 && month < 1) {
        return false;  // Date is in 2009 but before January.
    }

    if (year == 2009 && month == 1 && day < 2) {
        return false;  // Date is in 2009 and January but before January 2.
    }
    // Check for valid day in the given month
    if (month == 2) {
        // February
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            // Leap year
            if (day > 29) {
                return false;  // Invalid day in a leap year.
            }
        } else {
            // Not a leap year
            if (day > 28) {
                return false;  // Invalid day in a non-leap year.
            }
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // April, June, September, November (30 days)
        if (day > 30) {
            return false;  // Invalid day in a month with 30 days.
        }
    } else {
        // All other months (31 days)
        if (day > 31) {
            return false;  // Invalid day in a month with 31 days.
        }
    }

    // If all checks pass, the date is valid
    return true;
}