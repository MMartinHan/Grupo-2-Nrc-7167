#include "Utils.h"
#include <iostream>
#include <sstream>

#pragma warning(disable : 4996) ;
using namespace Utils;

bool Validation::validate_id(int id)
{
    std::stringstream ss;
    ss << id;
    std::string _id;
    ss >> _id;



    if (_id.length() != 10)
    {
        return true;
    }

    int temp;
    int sum_par = 0;
    int sum_impar = 0;
    int sum;

    int i = 1;
    std::string digits = _id.substr(0, _id.size() - 1);
    for (char & c : digits)
    {
        int digit = c - '0';
        if (i % 2 == 0) {
            sum_par += digit;
        }
        else {
            if ((digit * 2) > 9)
            {
                sum_impar += (digit * 2) - 9;
            }
            else
            {
                sum_impar += (digit * 2);
            }
        }
        i++;
    }

    sum = sum_par + sum_impar;
    int verifier = _id.at(_id.size() -1) - '0';
    int higher = (10 - (sum % 10)) + sum;

    if (sum % 10 == 0)
    {
        return verifier != 0;
    }
    if ((higher -sum) == verifier) {
        return false;
    }
    else {
        std::cout << "\nLa cedula ingresada es invalida" << std::endl;
        return true;
    }
}

bool Utils::Validation::is_digit(const std::string& str)
{
       for(const char &c : str)
       {
           if (std::isdigit(c))
           {
               return true;
           }
       }
     return false;
}

bool Validation::validate_string(const std::string& str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        char c = str[i];
        if (!isalpha(c) && !isspace(c))
        {
            std::cout << "Error!, Solo debe tener letras." << std::endl;
            return true;
        }
    }
    return false;
}

bool Validation::validate_input_number(int& number)
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "Ingrese solo numeros!" << std::endl;
        return true;

    }
    return false;
}

bool Validation::validate_input_number(double& number)
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "Ingrese solo numeros!" << std::endl;
        return true;
    }
    return false;
}

bool Validation::validate_input_number(float& number)
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "Ingrese solo numeros!" << std::endl;
        return true;
    }
    return false;
}

bool Validation::validate_three_digits(long number)
{
    int size = int(std::log10(number) + 1);
    if (size == 10)
    {
        return false;
    }
    return true;
}

long Validation::validateDigits(int digits)
{
    std::string cad;
    int i = 0;
    char c = 0;
    while (i != digits) {
        (c = _getch());
        if (c >= '0' && c <= '9') {
            std::cout << c;
            cad += c;
            i++;
        }
    }
    long datos = std::stoll(cad);
    return datos;
}

inline float Validation::validate_float()
{
    std::string cad;
    //Si se necesita decimales -> decimal = false
    bool decimal = false;
    char c = 0;
    while (c != 13) {
        c = _getch();
        if ((c >= '0' && c <= '9') || c == '.') {
            if (c == '.' && decimal == false) {
                cad += c;
                decimal = true;
                //cout << "entro" << endl;
                std::cout << c;
            }
            else {
                if (c != '.') {
                    cad += c;
                    std::cout << c;
                }
            }
        }
    }
    std::cout << "" << std::endl;
    const char* ca = cad.c_str();
    float f = std::strtof(ca, 0);
    return f;
}

template <typename T>
T Validation::validation_numbers(std::string str)
{
    char error = 'a';
    T number;
    int again = 1;
    while (again == 1)
    {
        try
        {
            std::cout << str << " : ";
            std::cin >> number;
            if (!std::cin)
            {
                throw error = -1;
            }
            again = 0;
        }
        catch (...)
        {
            std::cout << "Dato incorrecto intente de nuevo" << std::endl;
            again = 1;
        }
    }
    return number;
}

bool Validation::validate_date(std::string input)
{
    std::regex pattern("^(?:(?:31(\\/|-|\\.)(?:0?[13578]|1[02]))\\1|(?:(?:29|30)(\\/|-|\\.)(?:0?[1,3-9]|1[0-2])\\2))(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$|^(?:29(\\/|-|\\.)0?2\3(?:(?:(?:1[6-9]|[2-9]\\d)?(?:0[48]|[2468][048]|[13579][26])|(?:(?:16|[2468][048]|[3579][26])00))))$|^(?:0?[1-9]|1\\d|2[0-8])(\\/|-|\\.)(?:(?:0?[1-9])|(?:1[0-2]))\\4(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$");

    input.erase(std::remove_if(
        input.begin(),
        input.end(),
        ::isspace
    ), input.end());

    std::smatch sm;

    if (!std::regex_match(input, sm, pattern)) {
        std::cout << "Formato incorrecto!" << std::endl;
        return true;
    }
    std::string date = sm[0].str().c_str();
    std::string actual_date = Generator::return_current_time_and_date();

    std::regex regex{ "[\\/|.-]" };
    std::sregex_token_iterator it{ date.begin(), date.end(), regex, -1 };
    std::vector<std::string> parts{ it, {} };

    int day = std::stoi(parts[0]);
    int month = std::stoi(parts[1]);
    int year = std::stoi(parts[2]);


    std::sregex_token_iterator it_actual{ actual_date.begin(), actual_date.end(), regex, -1 };
    std::vector<std::string> token{ it_actual, {} };

    int actual_day = std::stoi(token[0]);
    int actual_month = std::stoi(token[1]);
    int actual_year = std::stoi(token[2]);


    if ((year == actual_year))
    {
        return false;
        if (month >= actual_month)
        {
            if (day >= actual_day)
            {
                return false;
            }
            else {
                return true;
            }
        }
        else {
            return true;
        }

    }
    else {
        if (year == actual_year) {
            if (month >= actual_month)
            {
                return false;
                if (day >= actual_day)
                {
                    return false;
                }
                else {
                    return true;
                }
            }
            else {
                if (month == actual_month) {
                    if (day >= actual_day)
                    {
                        return false;
                    }
                    else {
                        return true;
                    }

                }
                return true;
            }

        }
    }
    return true;
}

bool Validation::validate_date_of_birth(std::string input)
{
    std::regex pattern("^(?:(?:31(\\/|-|\\.)(?:0?[13578]|1[02]))\\1|(?:(?:29|30)(\\/|-|\\.)(?:0?[1,3-9]|1[0-2])\\2))(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$|^(?:29(\\/|-|\\.)0?2\3(?:(?:(?:1[6-9]|[2-9]\\d)?(?:0[48]|[2468][048]|[13579][26])|(?:(?:16|[2468][048]|[3579][26])00))))$|^(?:0?[1-9]|1\\d|2[0-8])(\\/|-|\\.)(?:(?:0?[1-9])|(?:1[0-2]))\\4(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$");

    input.erase(std::remove_if(
        input.begin(),
        input.end(),
        ::isspace
    ), input.end());

    std::smatch sm;

    if (!std::regex_match(input, sm, pattern)) {
        std::cout << "Formato incorrecto!" << std::endl;
        return true;
    }
    std::string date = sm[0].str().c_str();
    std::string actual_date = Generator::return_current_time_and_date();

    std::regex regex{ "[\\/|.-]" };
    std::sregex_token_iterator it{ date.begin(), date.end(), regex, -1 };
    std::vector<std::string> parts{ it, {} };

    int day = std::stoi(parts[0]);
    int month = std::stoi(parts[1]);
    int year = std::stoi(parts[2]);


    std::sregex_token_iterator it_actual{ actual_date.begin(), actual_date.end(), regex, -1 };
    std::vector<std::string> token{ it_actual, {} };

    int actual_day = std::stoi(token[0]);
    int actual_month = std::stoi(token[1]);
    int actual_year = std::stoi(token[2]);


    if ((year < actual_year) && (year > 1950))
    {
        return false;
        if (month <= actual_month)
        {
            if (day <= actual_day)
            {
                return false;
            }
            else {
                return true;
            }
        }
        else {
            return true;
        }

    }
    else {
        if (year == actual_year) {
            if (month < actual_month)
            {
                return false;
                if (day <= actual_day)
                {
                    return false;
                }
                else {
                    return true;
                }
            }
            else {
                if (month == actual_month) {
                    if (day <= actual_day)
                    {
                        return false;
                    }
                    else {
                        return true;
                    }

                }
                return true;
            }

        }
    }
    return true;
}

std::string Convertor::charToString(const char* a) {

    std::string s = "";
    for(int i = 0; i < (sizeof(a) / sizeof(char)); i++) {
        s = s + a[i];
    }

    return s;

}

int Generator::random_int(const int min, const int max)
{
    std::random_device rd;
    std::uniform_int_distribution<> dist(min, max);
    static std::mt19937_64 random_generator(
        std::chrono::system_clock::now().time_since_epoch().count());

    return dist(random_generator);
}

std::string Generator::return_current_time_and_date()
{
    auto now = std::chrono::system_clock::now();
    auto in_time_t = std::chrono::system_clock::to_time_t(now);

    std::stringstream ss;
    ss << std::put_time(std::localtime(&in_time_t), "%d/%m/%Y");
    return ss.str();
}

int Generator::calculate_age(std::string birth_date_)
{
    int day = stoi(birth_date_.substr(0, 2));
    int month = stoi(birth_date_.substr(3, 2));
    int year = stoi(birth_date_.substr(6, 9));
    int age;
    std::string date = Generator::return_current_time_and_date();
    int day_actual = stoi(date.substr(0, 2));
    int month_actual = stoi(date.substr(3, 2));
    int year_actual = stoi(date.substr(6, 9));
    if (day_actual < day) {
        day_actual = day + 30;
        month_actual -= 1;
    }
    if (month_actual < month) {
        month_actual += 12;
        year_actual -= 1;
    }
    age = year_actual - year;
    return age;
}


std::string Generator::lower_case(std::string cad)
{
    for (int i = 0; i < cad.length(); i++) cad[i] = tolower(cad[i]);
    return cad;
}

std::string Generator::to_string(double number)
{
    std::stringstream stream;
    stream << std::fixed << std::setprecision(3) << number;
    std::string s = stream.str();
    return s;
}
