- Install GCC

```bash
sudo apt-get update
sudo apt install build-essential -y
gcc -v
g++ --version
```

#### Data Types

```cpp
#include <iostream> //👉 iostream is a C++ standard library header file that stands for Input/Output Stream.

int main() {
  // printing using the standard input output
  std::cout << "hello world" << std::endl;
  std::cout << "it is really good" << std::endl;
  std::cout << "another way to write a new line" << "\n";

  // Variable
  int x;  // declaration
  x = 90; // assign variable
  std::cout << x << "\n";

  int z = 189;
  std::cout << z << "\n";

  // double (decimal)
  double price = 10.99;
  std::cout << price << "\n";

  // char stores single character
  char grade = 'A';
  std::cout << grade << "\n";

  // boolean
  bool isTall = true;
  std::cout << isTall << "\n";

  // string : sequence of text
  std::string name = "Abayomi";
  std::cout << name << "\n";
  std::cout << "Hello " << name << "\n";
  std::cout << "You are " << x << " years old" << "\n";

  return 0;
}
// to run g++ hello.ccp -o hello
// ./hello

```

#### constant

```cpp
#include <iostream>

int main() {
  const double PI = 3.14159; // this will make it immutable
  double radius = 10;
  double circumference = 2 * PI * radius;
  std::cout << circumference << "cm" << "\n";
}

```

#### Namespace

```cpp
#include <iostream>

namespace first {
int x = 90;
}

namespace second {
int x = 9;
}
int main() {
  // Each entity needs a unique name
  int x = 12; // local variable

  std::cout << "local variable is " << x << "\n";

  std::cout << "first name space variable is " << first::x << "\n";
  std::cout << "second name space variable is " << second::x << "\n";
}

```

#### Using namespace

```cpp
#include <iostream>

namespace first {
int x = 90;
}

namespace second {
int x = 9;
}
int main() {
  using namespace first;

  std::cout << "local variable is " << x
            << "\n"; // this will pick the x in the namespace called first
  std::cout << "first name space variable is " << x << "\n";
}

```

#### Accessing namspace data

```cpp
#include <iostream>

namespace first {
int x = 90;
}

namespace second {
int x = 9;
}

int main() {
  using namespace first;

  std::cout << "local variable is " << x
            << "\n"; // this will pick the x in the namespace called first
  std::cout << "first name space variable is " << x << "\n";

  std::cout << "second namespace will be " << second::x << "\n";
}

```

##### std namespace

```cpp
#include <iostream>

int main() {
  using namespace std; // Instead of doing this This will bring in most method
                       // and we don't want that
  using std::cout;
  using std::string;

  string name = "james";
  cout << name << "\n";
}

```

#### typedef : alias keywords

```cpp
#include <iostream>
#include <string> // required for std::string
#include <vector>

// we use the _t suffix to denote it is a type
typedef std::vector<std::pair<std::string, int>> pairlist_t;

int main() {
  pairlist_t pairlist; // creates an empty vector of (string, int) pairs

  auto &c = std::cout; // alias for cout
  c << "Hello World\n";
  return 0;
}

```

#### typedef

```cpp
#include <iostream>
#include <string> // required for std::string
#include <vector>

// we use the _t suffix to denote it is a type
typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
typedef int number_t;

int main() {
  pairlist_t pairlist; // creates an empty vector of (string, int) pairs

  auto &c = std::cout; // alias for cout
  c << "Hello World\n";

  text_t name = "jude";
  std::cout << name << "\n";

  number_t age = 89;
  std::cout << age << "\n";
  return 0;
}

```

#### Use the using keywords instead of typedef (recommended)

```cpp
#include <iostream>
#include <string> // required for std::string
#include <vector>

using text_t = std::string;
using number_t = int;

int main() {

  text_t name = "jude";
  std::cout << name << "\n";

  number_t age = 89;
  std::cout << age << "\n";
  return 0;
}

```

#### Arithmetic

```cpp
#include <iostream>
#include <string> // required for std::string

int main() {

  int student = 1;
  student += 1;
  student++;
  std::cout << student << "\n";
}

```

#### Type conversion

```cpp
#include <iostream>
#include <string>

int main() {
  // Example 1: Casting int to double
  int age = 25;
  double preciseAge = static_cast<double>(
      age); // using static_cast (safer than (double)age style).

  std::cout << "Age as integer: " << age << "\n";
  std::cout << "Age as double: " << preciseAge << "\n\n";

  // Example 2: String concatenation
  std::string firstName = "John";
  std::string lastName = "Doe";
  std::string fullName = firstName + " " + lastName;

  std::cout << "Full name: " << fullName << "\n\n";

  // Example 3: User input
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;
  std::cout << "You entered: " << number << "\n";

  return 0;
}

```

##### Data type

```cpp
#include <iostream>
#include <typeinfo>

int main() {
    int age = 90;
    double result = (double)age;

    std::cout << "Type of age: " << typeid(age).name() << "\n";
    std::cout << "Type of result: " << typeid(result).name() << "\n";
}

```

#### using helper function

```cpp
#include <iostream>
#include <string> // required for std::string

int main() {
#include <iostream>
#include <typeinfo>

  int main() {
    int age = 90;
    double result = (double)age;

    std::cout << "Type of age: " << typeid(age).name() << "\n";
    std::cout << "Type of result: " << typeid(result).name() << "\n";
  }
}

```

#### Using declararion type

```cpp
#include <iostream>
#include <type_traits>

int main() {
    int age = 90;
    decltype(age) anotherAge = 100;  // anotherAge is int

    std::cout << anotherAge << "\n"; // prints 100
}

```

#### I/O in CPP

```cpp
#include <iostream>
#include <limits> // for std::numeric_limits
#include <string>

int main() {
  std::string name;
  int age;
  std::string fullName;

  std::cout << "What's your name? " << "\n";
  std::cin >> name;

  std::cout << "What's your age? " << "\n";
  std::cin >> age;

  // clear the leftover newline before getline
  // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // or
  // this to elimates the \n
  //
  // get string including spaces
  std::cout << "What's your full name? " << "\n";
  std::getline(std::cin >> std::ws, fullName); // use this

  std::cout << "Hello " << name << ", you are " << age << " years old, "
            << "and your full name is " << fullName << "\n";

  return 0;
}

```

#### Math functions

```cpp
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
  // MATH FUNCITONS

  double x = 3.19;
  double y = 8;
  double z;
  double u;

  // z = std::max(x, y);
  z = std::min(x, y);
  std::cout << z << "\n";

  u = pow(x, y);
  std::cout << u << "\n";

  u = std::sqrt(x); // using the core library
  std::cout << u << "\n";

  u = sqrt(x); // using the cmath standard library
  std::cout << u << "\n";

  u = abs(-3); // absolute value
  std::cout << u << "\n";

  x = round(x);
  std::cout << u << "\n";
}

```

#### if statement

```cpp
#include <iostream>

int main() {
  int age;

  std::cout << "What's your age? " << "\n";
  std::cin >> age;

  if (age >= 18) {
    std::cout << "you can vote" << "\n";
  } else if (age < 0) {
    std::cout << "you are normal" << "\n";
  } else {
    std::cout << "too young to vote" << "\n";
  }
}

```

##### Switch

```cpp
#include <iostream>

int main() {
  int month;

  std::cout << "enter month (1-12)" << "\n";
  std::cin >> month;

  switch (month) {
  case 1:
    std::cout << "january babe" << "\n";
    break;
  case 2:
    std::cout << "february babe" << "\n";
    break;
  case 3:
    std::cout << "march babe";
    break;
  default:
    std::cout << "not found" << "\n";
  }
}

```

##### Calculator

```cpp

#include <iostream>

int main() {
  char op;
  double num1;
  double num2;
  double result;

  std::cout << "**************** calculator **************************" << "\n";

  std::cout << "Enter operator (+,-,*,%,/)" << "\n";
  std::cin >> op;

  std::cout << "Enter number 1: ";
  std::cin >> num1;

  std::cout << "Enter number 2: ";
  std::cin >> num2;

  switch (op) {
  case '+':
    result = num1 + num2;
    std::cout << "Result: " << result << "\n";
    break;
  case '-':
    result = num1 - num2;
    std::cout << "Result: " << result << "\n";
    break;
  case '/':
    result = num1 / num2;
    std::cout << "Result: " << result << "\n";
    break;
  case '*':
    result = num1 * num2;
    std::cout << "Result: " << result << "\n";
    break;
  default:
    std::cout << "invalid operator entered" << "\n";
  }
  std::cout << "**************** calculator **************************" << "\n";
}

```

#### Ternary

```cpp

#include <iostream>

int main() {
  int age = 90;

  std::string status = (age < 90) ? "young" : "old";
  std::cout << status << "\n";

```

#### String methods

```cpp

#include <iostream>

int main() {
#include <iostream>
#include <string>

  int main() {
    std::string str = "Hello World";

    // 1. Length of string
    std::cout << "Length: " << str.length() << "\n";

    // 2. Access characters
    std::cout << "First char: " << str[0] << "\n";
    std::cout << "Last char: " << str[str.size() - 1] << "\n";

    // 3. Substring
    std::cout << "Substring (0,5): " << str.substr(0, 5) << "\n";

    // 4. Find
    std::cout << "Find 'World': " << str.find("World") << "\n";

    // 5. Replace
    std::string replaced = str;
    replaced.replace(6, 5, "C++");
    std::cout << "After replace: " << replaced << "\n";

    // 6. Append
    std::string appended = str;
    appended.append("!!!");
    std::cout << "After append: " << appended << "\n";

    // 7. Insert
    std::string inserted = str;
    inserted.insert(5, " Beautiful");
    std::cout << "After insert: " << inserted << "\n";

    // 8. Erase
    std::string erased = str;
    erased.erase(5, 6); // erase from index 5, 6 characters
    std::cout << "After erase: " << erased << "\n";

    // 9. Compare
    std::string str2 = "Hello";
    // str2.clear(); // this will clear the string data
    // str.erase(0,3) // erases index 0 to 3
    std::cout << "Compare str with str2: " << str.compare(str2) << "\n";

    // 10. Empty check
    std::string emptyStr = "";
    std::cout << "Is emptyStr empty? " << (emptyStr.empty() ? "Yes" : "No")
              << "\n";

    return 0;
  }
}

```

#### While loop

```cpp
#include <iostream>
#include <string>

int main() {
  std::string name;

  while (name.empty()) {
    std::cout << "Please enter name: " << "\n";
    std::getline(std::cin, name);
  }

  std::cout << "hello " << name << "\n";
}

```

#### Do while loop

```cpp
#include <iostream>


int main(){

    int number;

    do{
    std::cout << "Enter a positive number: " << "\n";
    std::cin >> number;
    } while(number < 0);

    std::count << "The # is " << number << "\n";
    return 0;
}
```

#### Do while 2

```cpp
#include <iostream>
#include <limits>  // for std::numeric_limits

int main() {
    int number;

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;

        if (std::cin.fail()) {
            // Input was not an integer
            std::cin.clear(); // clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard bad input
            std::cout << "Invalid input. Please enter a number.\n";
            number = -1; // force repeat
        } else if (number < 0) {
            std::cout << "Number must be positive.\n";
        }

    } while (number < 0);

    std::cout << "The # is " << number << "\n";
    return 0;
}

```

#### For Loop

```cpp
#include <iostream>

int main() {
  for (int i = 0; i < 3; i++) {
    std::cout << "i is: " << i << "\n";
  }
}

```

#### Break and continue

```cpp
#include <iostream>

int main() {
  for (int i = 0; i < 20; i++) {
    if (i == 13) {
      // break;    // this will stop at 13
      continue; // will skip when you get to 13 and continue with 14
    }
    std::cout << "i is: " << i << "\n";
  }
}

```

#### Random number

```cpp
#include <cstddef>   // Provides standard definitions like NULL, size_t (not used directly here)
#include <cstdlib>   // Provides rand(), srand(), and other general-purpose functions
#include <ctime>     // Provides time() function, useful for seeding the random generator
#include <iostream>  // Provides input/output streams like std::cout

int main() {
  // Seed the random number generator with the current time
  // time(NULL) returns the number of seconds since Jan 1, 1970
  // srand() uses this value to make rand() generate different sequences each run
  srand(time(NULL));

  // Generate a random number between 1 and 6
  // rand() % 6 gives values from 0 to 5
  // Adding +1 shifts the range to 1 through 6
  int num = (rand() % 6) + 1;

  // Print the random number
  std::cout << num << "\n";

  return 0; // End of program
}

```

#### Raffle draw

```cpp
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  // This seeds the random number generator with the current time.
  // That way, rand() will produce a different sequence of random numbers each time the program runs.

  srand(time(0));

  int randomNumber = (rand() % 5) + 1;

  switch (randomNumber) {
  case 1:
    std::cout << "you won a gun\n";
    break;
  case 2:
    std::cout << "you won a shoe\n";
    break;
  case 3:
    std::cout << "you won a bag\n";
    break;
  case 4:
    std::cout << "you won a tyre\n";
    break;
  case 5:
    std::cout << "you won a wife\n";
    break;
    default:
    std::cout << "nothing to win\n";
  }
  std::cout << randomNumber << "\n";

  return 0;
}

```

#### User defined function

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed random number generator with current time
    srand(time(0));

    int secretNumber = (rand() % 10) + 1; // random number between 1 and 10
    int guess;
    int maxTries = 4;
    bool guessed = false;

    std::cout << "Guess the number (between 1 and 10). You have "
              << maxTries << " tries.\n";

    for (int i = 1; i <= maxTries; i++) {
        std::cout << "Try " << i << ": ";
        std::cin >> guess;

        if (guess == secretNumber) {
            std::cout << "🎉 You got it! The number was " << secretNumber << ".\n";
            guessed = true;
            break;
        } else if (guess > secretNumber) {
            std::cout << "Too high!\n";
        } else {
            std::cout << "Too low!\n";
        }
    }

    if (!guessed) {
        std::cout << "❌ Out of tries! The number was " << secretNumber << ".\n";
    }

    return 0;
}

```

##### User define functions

```cpp
#include <iostream>

void greet() { std::cout << "happy birthday \n"; }
int main() { greet(); }

```

✅ Example 2: Function declared (prototype) before main(), defined after

```cpp
#include <iostream>

// function declaration (prototype)
void greet();

int main() {
    greet();  // ✅ works fine because compiler knows greet exists
}

// function definition after main
void greet() {
    std::cout << "happy birthday \n";
}

```

#### Argument and Params

```cpp
#include <iostream>
#include <string>

void greet(std::string name)
{
  std::cout << "happy birthday " << name << "\n";
}
int main()
{
  greet("james");
}

```

#### Function declaration and implementation (interface and implementation)

```cpp
#include <iostream>

// function declaration
double square(double length);

int main()
{
  double length = 5.0;

  double result = square(length);
  std::cout << "Result is " << result << "\n";

  return 0;
}

// function definition
double square(double l)
{
  return l * l;
}

```

#### func declaration and implementation

```cpp
#include <iostream>
#include <string>

// function declaration
std::string concateName(std::string strOne, std::string strTwo);

int main()
{
  std::string response = concateName("james", "lee");
  std::cout << "Your name is: " << response << "\n";
}

// function definition
std::string concateName(std::string a, std::string b)
{
  return a + "-" + b;
}

```

#### Function overloading

```cpp
#include <iostream>
#include <string>

// declaration
void greet();
void greet(std::string name);

int main()
{
  greet();
  greet("james");
  return 0;
}

// impl
void greet()
{
  std::cout << "hello there \n";
}

void greet(std::string name)
{
  std::cout << "Hello there " << name << "\n";
}

```

#### Global vs local variables

```cpp
#include <iostream>

// Global variable (declared outside any function)
int globalVar = 10;

void showGlobal() {
    std::cout << "Inside showGlobal: " << globalVar << "\n";
}

int main() {
    std::cout << "Inside main: " << globalVar << "\n";
    showGlobal();
    globalVar = 20; // Can be modified anywhere
    std::cout << "Modified globalVar: " << globalVar << "\n";
    return 0;
}

```

#### Bank

```cpp
#include <iostream>

// Global variable (declared outside any function)
int globalVar = 10;

void showGlobal() {
    std::cout << "Inside showGlobal: " << globalVar << "\n";
}

int main() {
    std::cout << "Inside main: " << globalVar << "\n";
    showGlobal();
    globalVar = 20; // Can be modified anywhere
    std::cout << "Modified globalVar: " << globalVar << "\n";
    return 0;
}

```

### bank

```cpp
#include <iomanip>
#include <ios>
#include <iostream>

using namespace std;

// Function declarations
void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);
void menu();

int main()
{
  double balance = 1000.0;  // initial balance
  int choice;

  do
  {
    menu();
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
      case 1:
        showBalance(balance);
        break;
      case 2:
        balance = deposit(balance);
        break;
      case 3:
        balance = withdraw(balance);
        break;
      case 4:
        cout << "Thank you for banking with us. Goodbye!\n";
        break;
      default:
        cout << "Invalid option! Please try again.\n";
    }
  } while (choice != 4);

  return 0;
}

// Function implementations
void menu()
{
  cout << "\n===== Bank Menu =====\n";
  cout << "1. Show Balance\n";
  cout << "2. Deposit\n";
  cout << "3. Withdraw\n";
  cout << "4. Exit\n";
  cout << "=====================\n";
}

void showBalance(double balance)
{
  cout << "Your current balance is: $" << std::setprecision(2) << std::fixed
       << balance << endl;
}

double deposit(double balance)
{
  double amount;
  cout << "Enter amount to deposit: $";
  cin >> amount;

  if (amount > 0)
  {
    balance += amount;
    cout << "Deposit successful! New balance: $" << balance << endl;
  }
  else
  {
    cout << "Invalid deposit amount.\n";
  }
  return balance;
}

double withdraw(double balance)
{
  double amount;
  cout << "Enter amount to withdraw: $";
  cin >> amount;

  if (amount > 0 && amount <= balance)
  {
    balance -= amount;
    cout << "Withdrawal successful! New balance: $" << balance << endl;
  }
  else if (amount > balance)
  {
    cout << "Insufficient funds.\n";
  }
  else
  {
    cout << "Invalid withdrawal amount.\n";
  }
  return balance;
}

```

#### Importing function

In C++, you can import (reuse) functions from another file by using header files (.h or .hpp) and source files (.cpp).

```cpp
// in math_utils.h

// math_utils.h
// Header file that declares the math utility function

#ifndef MATH_UTILS_H    // Prevent multiple inclusions
#define MATH_UTILS_H

// Function declaration (no implementation here, just the "what")
int square(int x);

#endif
```

Step 2: Create an implementation file math_utils.cpp

```cpp
// math_utils.cpp
// Implementation of the function declared in the header

#include "math_utils.h"  // Include the header so it knows the declaration

// Function definition (actual code that does the work)
int square(int x) {
    return x * x;
}

```

Step 3: Use it in your main program main.cpp

```cpp
// main.cpp
#include <iostream>
#include "math_utils.h"   // Include your custom header to use the function

int main() {
    int num = 5;

    // Call the function from math_utils.cpp
    int result = square(num);

    std::cout << "The square of " << num << " is " << result << std::endl;

    return 0;
}

```

Run:

```bash
g++ main.cpp math_utils.cpp -o program
./program
```

##### Importing from different folders

project/
│── main.cpp
│── utils/
│── greet_utils.h
│── greet_utils.cpp

Step 1: greet_utils.h (Header file)

Located in utils/greet_utils.h

```cpp
// This is the header file (declaration only)
#ifndef GREET_UTILS_H     // Prevents multiple inclusions of the same header
#define GREET_UTILS_H

#include <string>

// Declaration of the greet function
void greet(const std::string& name);

#endif

```

Step 2: greet_utils.cpp (Implementation file)

Located in utils/greet_utils.cpp

```cpp
// Include the header to match the declaration with implementation
#include "greet_utils.h"
#include <iostream>

// Implementation of the greet function
void greet(const std::string& name) {
    std::cout << "Hello, " << name << "! Welcome 🎉\n";
}

```

Step 3: main.cpp

Located at root: project/main.cpp

```cpp
#include <iostream>
// We must tell the compiler where to find greet_utils.h
#include "utils/greet_utils.h"

int main() {
    greet("Abayomi");  // Call the greet function from another folder
    return 0;
}

```

Step 4: Compile

When compiling with g++, you must include both .cpp files:

```bash
g++ main.cpp utils/greet_utils.cpp -o main
./main
```

##### Arrays

Data structure that can hold multiple values

```cpp

#include <iostream>
#include <string>

int main()
{
  // Arrays can only contain values of same data types
  std::string car[] = {"volvo", "lexus", "benx"};
  std::cout << car
            << "\n";  // this will displace a memory address, 0x7ffcb7aff8e0
  std::cout << car[0] << "\n";
  car[0] = "mustang";
  std::cout << car[0] << "\n";

  // Declaring and assiging arrays later
  std::string animals[3];
  animals[0] = "monkey";
  animals[1] = "lion";
  animals[2] = "rabbit";

  std::cout << "animal index 0 is: " << animals[0] << "\n";
}

```

#### Size of

```cpp
#include <iostream>
#include <string>

int main()
{
  double price = 90.0;
  std::cout << "size of price operator is: " << sizeof(price) << " bytes \n";

  std::string name = "James lee";
  std::cout << "size of name operator is: " << sizeof(name) << " bytes \n";

  char grade = 'A';
  std::cout << "size of grade operator is: " << sizeof(grade) << " bytes \n";

  char grades[] = {'A', 'B', 'C'};
  std::cout << "size of grades operator is: " << sizeof(grades) << " bytes \n";
  std::cout << "number of elements in Char Grades Array: "
            << sizeof(grades) / sizeof(char) << " elements\n";
  // Explanation:
  // sizeof(grades) is 3 bytes since one char equals 1 byte
  // sizeof(char) is one byte
  // so sizeof(grades) / sizeof(char) == 3/1= 3

  bool isBool = true;
  std::cout << "size of isBool operator is: " << sizeof(isBool) << " bytes \n";

  return 0;
}

```

#### iterate over an array

```cpp
#include <iostream>
#include <string>

int main()
{
  std::string animals[] = {"monkey", "dog", "cat", "squirrel"};

  // Correct way to calculate array length
  int length = sizeof(animals) / sizeof(animals[0]);
  // or int length = sizeof(animals) / sizeof(std::string);

  for (int i = 0; i < length; i++)
  {
    std::cout << animals[i] << "\n";
  }

  char grades[] = {'A', 'B', 'C'};
  for (int i = 0; i < sizeof(grades) / sizeof(char); i++)
  {
    std::cout << grades[i] << "\n";
  }

  return 0;
}

```

#### For Each Loop

```cpp

#include <iostream>
#include <string>

int main()
{
  std::string animals[] = {"monkey", "dog", "cat", "squirrel"};

  for (std::string animal : animals)
  {
    std::cout << animal << "\n";
  }

  return 0;
}

```

#### Pass array to a function

```cpp
#include <iostream>

// function declaration
double getTotal(double prices[], int size);

int main()
{
  double prices[] = {12.0, 12.23, 89.0};
  int size = sizeof(prices) / sizeof(prices[0]);
  double total = getTotal(prices, size);

  std::cout << "$" << total << "\n";
}

// func impl
double getTotal(double prices[], int size)
{
  double total = 0;

  for (int i = 0; i < size; i++)
  {
    total += prices[i];
  }
  return total;
}

```

#### Search areay function

```cpp
#include <iostream>

// function declaration
double getTotal(double prices[], int size);

int main()
{
  double prices[] = {12.0, 12.23, 89.0};
  int size = sizeof(prices) / sizeof(prices[0]);
  double total = getTotal(prices, size);

  std::cout << "$" << total << "\n";
}

// func impl
double getTotal(double prices[], int size)
{
  double total = 0;

  for (int i = 0; i < size; i++)
  {
    total += prices[i];
  }
  return total;
}

```

#### Bubble sort

Sorting an array

```cpp
#include <iostream>
using namespace std;

void sort(int array[], int size);

int main()
{
  int array[] = {10, 1, 3, 4, 5, 6, 9, 8};
  int size = sizeof(array) / sizeof(array[0]);

  sort(array, size);

  for (int elem : array)
  {
    cout << elem << " "
         << "\n";
  }

  return 0;
}

void sort(int array[], int size)
{
  int temp;
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i; j++)
    {
      if (array[j] > array[j + 1]) // use < for descending
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}



```

#### Fill function

```cpp
#include <iostream>
#include <string>

int main()
{
  std::string foods[10];

  fill(foods, foods + 10, "pizza");

  for (std::string food : foods)
  {
    std::cout << food << "\n";
  }

  return 0;
}

```

```cpp
#include <iostream>
#include <string>

int main()
{
  const int SIZE = 100;
  std::string foods[SIZE];

  fill(foods, foods + (SIZE / 2), "pizza");
  fill(foods + (SIZE / 2), foods + SIZE, "hamburger");

  for (std::string food : foods)
  {
    std::cout << food << "\n";
  }

  return 0;
}

```

##### Multi dimensional Arrays

```cpp
#include <iostream>
#include <string>

int main()
{
  std::string cars[][3] = {{"Mustang", "Ford", "F-10"}, // first array is row and the second is column
                           {
                               "Corvette",
                               "Equinox",
                               "Silverdo",

                           },
                           {"Challender", "Durango", "Ram 1500"}};

  std::cout << cars[0][0] << "\n";
  return 0;
}

```

##### QUIZ

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string questions[] = {
        "1. What year was C++ created?: ",
        "2. Who invented C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. Is the Earth flat?"
    };

    string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Dennis Ritchie"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}
    };

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        cout << questions[i] << endl;

        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        cout << "Your answer: ";
        cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            cout << "Correct! ✅" << endl;
            score++;
        } else {
            cout << "Wrong ❌. Correct answer: " << answerKey[i] << endl;
        }

        cout << "-------------------------" << endl;
    }

    cout << "Quiz finished! 🎉" << endl;
    cout << "Your score: " << score << "/" << size << endl;

    return 0;
}

```

#### Memory Address

```cpp
#include <iostream>
using namespace std;

int main()
{
  // Memory Address
  // a location in Memory where data is stored and can be accessed with & o
  //

  std::string name = "BAY";
  int age = 21;
  bool isTall = true;

  std::cout << &name << endl;  // Memory Addrss of name
  std::cout << &age << endl;
  std::cout << &isTall << endl;

  return 0;
}

```

#### Pass by reference and by value

```cpp
#include <iostream>

// Function that takes parameter by VALUE
// A copy of 'x' is made, so the original value won't change
void passByValue(int x) {
    x = x + 10;
    std::cout << "Inside passByValue, x = " << x << std::endl;
}

// Function that takes parameter by REFERENCE
// 'y' refers directly to the original variable, so it WILL change
void passByReference(int &y) {
    y = y + 10;
    std::cout << "Inside passByReference, y = " << y << std::endl;
}

int main() {
    int a = 5;
    int b = 5;

    std::cout << "Before passByValue, a = " << a << std::endl;
    passByValue(a); // Only a copy is modified
    std::cout << "After passByValue, a = " << a << std::endl; // Still 5

    std::cout << "Before passByReference, b = " << b << std::endl;
    passByReference(b); // The actual variable is modified
    std::cout << "After passByReference, b = " << b << std::endl; // Now 15

    return 0;
}

```

##### Const parameters

```cpp
// 🔑 Key Points:
//
// const std::string &message → passed by reference but cannot be modified inside the function.
//
// const int number → passed by value, but still cannot be modified.
//
// Using const improves safety (no accidental changes) and may improve performance (especially for large objects when using const &).
#include <iostream>
#include <string>

// Function declaration with const parameters
void printMessage(const std::string &message, const int number);

// Function implementation
void printMessage(const std::string &message, const int number) {
    // We cannot modify message or number here because they are const
    std::cout << "Message: " << message << ", Number: " << number << std::endl;
}

int main() {
    std::string msg = "Hello, World!";
    int num = 42;

    // Function call
    printMessage(msg, num);

    return 0;
}

```

#### Luhn algorithm

```cpp
#include <iostream>
#include <string>

// Function to check if a number is valid using Luhn Algorithm
bool isValidLuhn(const std::string& number) {
    int sum = 0;
    bool alternate = false;

    // Traverse digits from right to left
    for (int i = number.size() - 1; i >= 0; i--) {
        int digit = number[i] - '0';

        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        alternate = !alternate;
    }

    return (sum % 10 == 0);
}

int main() {
    std::string cardNumber;

    std::cout << "Enter a number to validate with Luhn Algorithm: ";
    std::cin >> cardNumber;

    if (isValidLuhn(cardNumber)) {
        std::cout << "✅ Valid number (passes Luhn check)\n";
    } else {
        std::cout << "❌ Invalid number (fails Luhn check)\n";
    }

    return 0;
}

```

##### Pointers

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 42;          // A normal integer variable
    int* ptr = &number;       // A pointer that stores the address of 'number'

    cout << "Value of number: " << number << endl;        // Prints 42
    cout << "Address of number: " << &number << endl;     // Prints address of number
    cout << "Value stored in ptr: " << ptr << endl;       // Same as &number
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl; // Dereferencing -> prints 42

    // Changing value using pointer dereference
    *ptr = 100;  // Changes the value at address stored in ptr

    cout << "New value of number: " << number << endl;    // Prints 100
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl; // Prints 100

    return 0;
}

// 🔑 Key points:
// int* ptr → declares a pointer to an integer.
// ptr = &number → stores the address of number in ptr.
// *ptr → dereferences the pointer, meaning “get the value stored at the memory address.”
// You can also modify the original variable via dereferencing (*ptr = 100).
```

#### Null pointer

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declare a pointer to an integer, initialized to null (no valid address)
    int* ptr = nullptr;

    // Check if the pointer is null before using it
    if (ptr == nullptr) {
        cout << "The pointer is null and does not point to any memory location." << endl;
    }

    // Now allocate memory dynamically and assign it to the pointer
    ptr = new int;   // 'new' allocates memory for one integer
    *ptr = 42;       // Store value 42 in the allocated memory

    cout << "The value pointed to by ptr is: " << *ptr << endl;

    // Always free dynamically allocated memory to prevent memory leaks
    delete ptr;
    ptr = nullptr;  // Reset pointer to null after deleting

    return 0;
}

```

```cpp
#include <iostream>
using namespace std;

int main()
{
  // Declare a pointer to an integer, initialized to null (no valid address)
  int* ptr = nullptr;

  // Check if the pointer is null before using it
  if (ptr == nullptr)
  {
    cout << "The pointer is null and does not point to any memory location."
         << endl;
  }

  // Now allocate memory dynamically and assign it to the pointer
  ptr = new int;  // 'new' allocates memory for one integer
  *ptr = 42;      // Store value 42 in the allocated memory

  cout << "The value pointed to by ptr is: " << *ptr << endl;

  // Always free dynamically allocated memory to prevent memory leaks
  delete ptr;
  ptr = nullptr;  // Reset pointer to null after deleting

  return 0;

// Explanation:

  // int* ptr = nullptr; → Declares a pointer initialized as a null pointer
  // (doesn’t point anywhere). if (ptr == nullptr) → Safe check before
  // dereferencing. ptr = new int; → Allocates memory for an integer and stores
  // the address in ptr. *ptr = 42; → Dereferences the pointer and assigns 42 to
  // the allocated memory. delete ptr; → Frees the memory to prevent memory
  // leaks. ptr = nullptr; → Good practice to reset pointer to null after
  // deleting.
}

```

##### Memory Allocation

What is Dynamic Memory?
In C++, memory can be allocated in two main ways:

Static/Automatic allocation → memory is allocated at compile time (e.g., normal variables, arrays with fixed size).

Dynamic allocation → memory is allocated at runtime (using new / delete in C++ or malloc / free in C).

Dynamic memory is useful when:

- The size of data is not known at compile time.
- You want to allocate large amounts of memory only when needed.
- You want control over memory lifetime (allocate when needed, free when done).

```cpp
#include <iostream>
using namespace std;

int main() {
    // Example 1: Allocating a single integer dynamically
    int* ptr = new int;   // allocate memory for one integer
    *ptr = 42;            // assign value using dereference
    cout << "Value of dynamically allocated integer: " << *ptr << endl;

    delete ptr; // free memory to prevent memory leak

    // Example 2: Allocating an array dynamically
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];  // allocate array dynamically

    // Take input into array
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   // same as *(arr + i)
    }

    // Print array
    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // free the array memory

    return 0;
}

```

```cpp
#include <iostream>  // For input/output

int main() {
    // Step 1: Declare a pointer to int, initialize it as NULL (nullptr in modern C++).
    int *pNum = NULL;

    // Step 2: Allocate memory dynamically on the HEAP using 'new'.
    // Now 'pNum' points to a valid memory location on the heap.
    pNum = new int;

    // Step 3: Store the value 21 into that heap memory location.
    *pNum = 21;

    // Step 4: Print the address stored in the pointer (heap address).
    std::cout << "address: " << pNum << '\n';

    // Step 5: Print the value stored at that address (dereferencing the pointer).
    std::cout << "value: " << *pNum << '\n';

    // Step 6: Free the allocated heap memory using 'delete'.
    // If you don’t delete it, that memory will remain reserved = MEMORY LEAK.
    delete pNum;

    // Best practice: set pointer to NULL after delete (avoid dangling pointer).
    pNum = NULL;

    return 0;
}

```

##### 🔹 1. What is the Stack?

The stack is a special memory region managed automatically by the system.

Local variables (inside functions), function parameters, and return addresses are stored here.

Memory on the stack is allocated and deallocated automatically when functions are called and return.

It’s fast, but limited in size.

👉 Example (stack allocation):

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;  // Stored on the stack
    int y = 20;  // Stored on the stack
    cout << x + y << endl;
    return 0;
}

```

Here, both x and y are on the stack, and once main() ends, memory is released automatically.

##### 🔹 2. What is the Heap?

The heap is a large pool of memory managed manually by the programmer.

You use new (or malloc in C) to allocate memory on the heap.

Unlike the stack, memory in the heap persists until you explicitly free it using delete.

It’s more flexible but slower and requires manual cleanup.

👉 Example (heap allocation – dynamic memory):

```cpp
#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;     // Memory allocated on the HEAP
    *ptr = 42;              // Store value in that memory
    cout << *ptr << endl;   // Dereference pointer to get value

    delete ptr;             // Free memory manually (important!)
    return 0;
}

```

Here:

ptr itself (the pointer variable) is on the stack.
The actual integer (42) it points to is stored on the heap.
We must delete it to avoid a memory leak.

🔹 3. Why use the Heap?

Use the stack for small, short-lived variables.

Use the heap when:

You don’t know the size of data at compile time (e.g., reading a file of unknown length).

You need data to persist beyond the scope of a function.

You need large memory (stack is limited, heap is bigger).

🔹 4. Quick Analogy

Think of memory like an office:

Stack = Desk surface. Easy to access, things are put and removed quickly, but limited space.

Heap = Storage room. Lots of space, but you must walk there, put things yourself, and remember to clean up.

✅ Summary:

Stack = automatic, fast, limited size, local variables.

Heap = manual, slower, larger size, dynamic data (must free manually).

#### Recursion

Recursion is when a function calls itself until it reaches a base case (stopping condition).

- cons: uses more memory and it is slower

```cpp
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: stop recursion when n == 0
    if (n == 0)
        return 1;

    // Recursive case: function calls itself
    return n * factorial(n - 1);
}

int main() {
    int num = 5;

    // Call recursive function
    int result = factorial(num);

    cout << "Factorial of " << num << " is " << result << endl;

    return 0;
}

```

##### 📝 What is a Function Template?

A function template allows you to write a single function that works with different data types (int, float, double, string, etc.), instead of writing multiple overloaded functions.

Think of it like a "blueprint" for functions — the compiler generates the actual function when you use it.

```cpp
#include <iostream>
using namespace std;

// Function template
template <typename T>   // "T" is a placeholder for any data type
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Using the same template for different types
    cout << "Max of 3 and 7: " << getMax(3, 7) << endl;         // int
    cout << "Max of 3.5 and 7.2: " << getMax(3.5, 7.2) << endl; // double
    cout << "Max of 'a' and 'z': " << getMax('a', 'z') << endl; // char

    return 0;
}

```

```cpp
#include <iostream>

// Function template that takes two different types
template <typename T, typename U>
auto max(T x, U y) { // using auto compiler will deduce the return data type
    return (x > y) ? x : y;  // returns whichever is greater
}

int main() {
    std::cout << max(1, 2.1) << '\n';  // compares int and double
    std::cout << max(3.5, 2) << '\n';  // compares double and int
    std::cout << max('a', 'z') << '\n'; // compares chars
    return 0;
}

```

#### Struct

In C++, a struct (short for structure) is a user-defined data type that groups together variables under one name. It's similar to a class, but with a key difference:

By default, members of a struct are public.
By default, members of a class are private.

```cpp
#include <iostream>
#include <string>

// Define a struct to represent a person
struct Person {
    std::string name;
    int age; // you can set a default value i.e int a = 90;

    // A function inside a struct (like a method)
    void introduce() {
        std::cout << "Hi, my name is " << name
                  << " and I am " << age << " years old.\n";
    }
};

int main() {
    // Create a Person object
    Person p1;

    // Assign values to struct members
    p1.name = "Alice";
    p1.age = 25;

    // Access and print struct members
    std::cout << "Name: " << p1.name << '\n';
    std::cout << "Age: " << p1.age << '\n';

    // Call function inside struct
    p1.introduce();

    return 0;
}

```

🚀! In C++, you can pass structs as arguments to functions just like primitive data types. There are three main ways to pass a struct:
✅ 1. Pass by Value (struct is copied)

🔹 Explanation:

- A copy of p1 is passed to printPerson.
- Original p1 remains unchanged.
- Slightly slower if the struct is large, since it copies all fields.

```cpp
#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

// Pass by value: makes a copy of the struct
void printPerson(Person p) {
    cout << "Name: " << p.name << ", Age: " << p.age << endl;
}

int main() {
    Person p1 = {"Alice", 25};
    printPerson(p1); // Copy is made
    return 0;
}

```

✅ 2. Pass by Reference (no copy, more efficient)

```cpp
#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

// Pass by reference: no copy is made
void printPerson(const Person &p) {
    cout << "Name: " << p.name << ", Age: " << p.age << endl;
}

int main() {
    Person p1 = {"Bob", 30};
    printPerson(p1); // No copy, faster
    return 0;
}

```

🔹 Explanation:

- Function takes a reference (&p) to the struct.
- No copying → faster and memory efficient.
- Use const if you don’t want the function to modify the struct.

✅ 3. Pass by Pointer (explicit reference)

```cpp
#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

// Pass by pointer: use arrow (->) to access fields
void printPerson(Person *p) {
    cout << "Name: " << p->name << ", Age: " << p->age << endl;
}

int main() {
    Person p1 = {"Charlie", 40};
    printPerson(&p1); // Pass address
    return 0;
}

```

🔹 Explanation:

- Function receives the memory address of the struct.
- You access members with ->.
- Useful if you want to pass nullptr or dynamically allocated structs.

⚡ Quick Summary:
By Value → Copies the struct (slower for big structs, but safe).
By Reference (&) → No copy, efficient, recommended.
By Pointer (\*) → Explicit address, flexible, can pass nullptr.

##### 🔹 What is an Enum?

Enum (enumeration) is a user-defined type in C++ that lets you assign names to integral constants.

It makes code more readable and maintainable, instead of using "magic numbers."

```cpp
#include <iostream>
using namespace std;

enum Direction {
    NORTH,   // 0
    EAST,    // 1
    SOUTH,   // 2
    WEST     // 3
};

void move(Direction d) {
    if (d == NORTH) {
        cout << "Moving North 🚀" << endl;
    } else if (d == EAST) {
        cout << "Moving East 👉" << endl;
    } else if (d == SOUTH) {
        cout << "Moving South 👇" << endl;
    } else if (d == WEST) {
        cout << "Moving West 👈" << endl;
    }
}

int main() {
    Direction d = SOUTH;
    move(d);

    d = WEST;
    move(d);

    return 0;
}

```

#### 🔹 Custom Values in Enum

You can assign your own values:

```cpp
enum ErrorCode {
    SUCCESS = 0,
    WARNING = 100,
    ERROR = 200,
    FATAL = 500
};

```

Here SUCCESS=0, WARNING=100, ERROR=200, FATAL=500.

#### 🔹 Modern C++: enum class (Scoped Enum)

C++11 introduced enum class, which is strongly typed and avoids name conflicts.

```cpp
enum class Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    Color c = Color::GREEN;

    if (c == Color::GREEN) {
        std::cout << "It's Green! ✅" << std::endl;
    }
    return 0;
}

```

#### Object-Oriented Programming (OOP) 🧍

👉 OOP is a programming paradigm based on objects rather than functions.

Objects = entities with data (attributes) and functions (methods).

Key principles: Encapsulation, Abstraction, Inheritance, Polymorphism.

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void drive() {
        cout << brand << " is driving at " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.speed = 120;
    myCar.drive();

    return 0;
}

```

#### Constructors 👷

👉 A constructor is a special function that:

Has the same name as the class.

Automatically runs when an object is created.

Initializes object values.

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    // Constructor
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    void show() {
        cout << brand << " running at " << speed << " km/h" << endl;
    }
};

int main() {
    Car c1("BMW", 180);   // Constructor called
    c1.show();
}

```

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    double gpa;

    // Constructor
    Student(string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    // Method to display student info
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    // Create a Student object
    Student s1("Alice", 20, 3.8);

    // Call the method to display info
    s1.displayInfo();

    return 0;
}

```

NB: if the parameters name is different from attributes name you dont need the `this ->`

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    double gpa;

    // No-arg constructor (default values)
    Student() {
        name = "Unknown";
        age = 0;
        gpa = 0.0;
    }

    // All-args constructor
    Student(string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    // Method to display details
    void display() {
        cout << "Name: " << name
             << ", Age: " << age
             << ", GPA: " << gpa << endl;
    }
};

int main() {
    // Using no-arg constructor
    Student s1;
    s1.display();

    // Using all-args constructor
    Student s2("Alice", 20, 3.9);
    s2.display();

    return 0;
}

```

```cpp
#include <iostream>
using namespace std;

class Pizza {
public:
    string topping1;
    string topping2;

    // No-argument constructor (empty)
    Pizza() {
    }

    // Constructor with one argument
    Pizza(string topping1) {
        this->topping1 = topping1;
    }

    // Constructor with two arguments
    Pizza(string topping1, string topping2) {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main() {
    // Using no-argument constructor
    Pizza p1;
    cout << "Pizza 1: " << p1.topping1 << ", " << p1.topping2 << endl;

    // Using single-argument constructor
    Pizza p2("Cheese");
    cout << "Pizza 2: " << p2.topping1 << ", " << p2.topping2 << endl;

    // Using two-argument constructor
    Pizza p3("Cheese", "Pepperoni");
    cout << "Pizza 3: " << p3.topping1 << ", " << p3.topping2 << endl;

    return 0;
}

```

##### Constructor Overloading 👨‍🍳

👉 You can have multiple constructors with different parameters.
This is called constructor overloading.

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    // Constructor 1
    Car() {
        brand = "Unknown";
        speed = 0;
    }

    // Constructor 2
    Car(string b) {
        brand = b;
        speed = 100;
    }

    // Constructor 3
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    void show() {
        cout << brand << " running at " << speed << " km/h" << endl;
    }
};

int main() {
    Car c1;                // Calls constructor 1
    Car c2("Toyota");      // Calls constructor 2
    Car c3("BMW", 220);    // Calls constructor 3

    c1.show();
    c2.show();
    c3.show();
}

```

#### Getters & Setters 🔒

👉 To follow encapsulation:

Make attributes private.

Use getters (to read) and setters (to update).

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Setter
    void setBalance(double b) {
        if (b >= 0) balance = b;  // validation
    }

    // Getter
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(5000);
    cout << "Balance: $" << acc.getBalance() << endl;
}

```

✅ Direct access is blocked, but we safely read/update via getters & setters.

```cpp
#include <iostream>
using namespace std;

class Stove {
private:
    int temperature = 0; // private variable

public:
    // Getter
    int getTemperature() {
        return temperature;
    }

    // Setter
    void setTemperature(int temp) {
        this->temperature = temp;
    }
};

int main() {
    Stove stove;

    // Using setter to set temperature
    stove.setTemperature(200);

    // Using getter to retrieve temperature
    cout << "The stove temperature is: " << stove.getTemperature() << " degrees." << endl;

    return 0;
}

```

#### Inheritance 👩‍👧‍👦

👉 Inheritance lets one class reuse features of another.

Base class → parent

Derived class → child

```cpp
#include <iostream>
using namespace std;

// Base Class
class Vehicle {
public:
    string brand;
    void honk() {
        cout << "Beep! Beep!" << endl;
    }
};

// Derived Class
class Car : public Vehicle {
public:
    int speed;
    void show() {
        cout << brand << " running at " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Tesla";
    myCar.speed = 200;

    myCar.honk(); // from base class
    myCar.show(); // from derived class
}

```


```bash
migrating to bash
```
