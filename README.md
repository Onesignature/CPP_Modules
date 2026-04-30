# 42 C++ Modules

Solutions to the 42 **CPP modules** (00–09), a series that walks through modern C++ from basic class design up to STL containers and templates.

## Modules

| Module | Topic |
|---|---|
| [`cpp-module00`](./cpp-module00) | Namespaces, classes, member functions, stdio, basic I/O |
| [`cpp-module01`](./cpp-module01) | Memory allocation, references, pointers to members, switch |
| [`cpp-module02`](./cpp-module02) | Ad-hoc polymorphism, operator overloading, orthodox canonical class form |
| [`cpp-module03`](./cpp-module03) | Inheritance |
| [`cpp-module04`](./cpp-module04) | Subtype polymorphism, abstract classes, interfaces |
| [`cpp-module05`](./cpp-module05) | Repetition and exceptions |
| [`cpp-module06`](./cpp-module06) | C++ casts (`static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`) |
| [`cpp-module07`](./cpp-module07) | Templates |
| [`cpp-module08`](./cpp-module08) | Templated containers, iterators, algorithms |
| [`cpp-module09`](./cpp-module09) | STL containers in practice (Bitcoin Exchange, RPN, PmergeMe) |

## Build & run

Each module has its own subdirectories per exercise, each with its own `Makefile`:

```bash
cd cpp-module00/ex00
make
./<executable>
```

Code is compiled with `-Wall -Wextra -Werror -std=c++98` per the 42 norm.

## What you'll see across the modules

- Encapsulation, the rule of three, and orthodox canonical form
- Inheritance, virtual functions, abstract base classes
- Operator overloading, function pointers, functors
- Exception handling
- Templates (function + class), template specialization
- STL containers (`vector`, `list`, `map`, `stack`) and iterators
