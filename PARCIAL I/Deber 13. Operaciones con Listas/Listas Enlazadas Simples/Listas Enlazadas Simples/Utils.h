#pragma once
#include <chrono>
#include <random>
#include <iostream>
#include <exception>
#include <limits>
#include <ios>
namespace Utils
{
    class Validation
    {
    public:
        /**
         * @brief Valida que una cadena de caracteres solo sea letras
         *
         * @return true
         * @return false
         */
        static bool validate_string(const std::string&);

        /**
         * @brief Validacion la  entrada por teclado de un tipo int
         *
         * @return true
         * @return false
         */
        static bool validate_input_number(int&);

        /**
         * @brief Valida la entrada por teclado de un tipo double
         *
         * @return true
         * @return false
         */
        static bool validate_input_number(double&);

        /**
         * @brief Valida la entrada por teclado de un tipo float
         *
         * @return true
         * @return false
         */
        static bool validate_input_number(float&);

        /**
         * @brief valida un numero que sea de 3 digitos
         *
         * @param number
         * @return true
         * @return false
         */
        static bool validate_three_digits(int number);

        /**
         * @brief Valida un numero de cualquier tipo
         *
         * @tparam T
         * @return T
         */
        template <typename T>
        static T validation_numbers(std::string);
    };

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

    bool Validation::validate_three_digits(int number)
    {
        int size = int(std::log10(number) + 1);
        if (size == 3)
        {
            return false;
        }
        return true;
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
                std::cin.clear(); 
                std::cin.ignore(9999, '\n');
                std::cout << "Dato incorrecto intente de nuevo" << std::endl;
                again = 1;
            }
        }
        return number;
    }

    class Generator
    {
    public:
        static int random_int(const int, const int);
    };

    int Generator::random_int(const int min, const int max)
    {
        std::random_device rd;
        std::uniform_int_distribution<> dist(min, max);
        static std::mt19937_64 random_generator(
            std::chrono::system_clock::now().time_since_epoch().count());

        return dist(random_generator);
    }

    class MathaMatrix
    {
    public:
    };
}