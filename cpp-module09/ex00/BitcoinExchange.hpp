#pragma once

# include <map>
# include <iostream>
# include <algorithm>
# include <iterator>
# include <fstream>
# include <cstdlib>

class BitcoinExchange
{
    private:
        std::map<std::string, double>   rates;
        std::string                     date;
        double                          qty;
        
    public:
        BitcoinExchange();
        BitcoinExchange(std::string inputFile);
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange &operator=(const BitcoinExchange &obj);
        ~BitcoinExchange();

        void    parseDataFile();
        void    parseInputFile(std::string inputFile);
        void    calculate();
        std::string trim(const std::string& input);
        bool isValidDate(const std::string& dateStr);
};

