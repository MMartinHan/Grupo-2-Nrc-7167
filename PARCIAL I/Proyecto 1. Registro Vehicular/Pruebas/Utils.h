#ifndef UTILS_H
#define UTILS_H


#include <string>
#include <chrono>
#include <random>
#include <iostream>
#include <exception>
#include <limits>
#include <ios>
#include <vector>
#include <regex>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <conio.h>
#include <stdio.h>
#define INT_MAX 20

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
            static bool validate_three_digits(long number);

            /**
             * @brief Valida un numero de cualquier tipo
             *
             * @tparam T
             * @return T
             */
            template <typename T>
            static T validation_numbers(std::string);

            static long validateDigits(int digits);
            /**
             * @brief Valida que se ingresen solo numeros decimales por el teclado (con getch())
             *
             * @return float
             */
            static float validate_float();



            /**
             * @brief valida cedula
             *
             * @return true
             * @return false
             */
            static bool validate_id(int);

            /**
             * @brief verifica la validez de los digitos
             *
             * @return true
             * @return false
             */
            static bool is_digit(const std::string &);

            /**
             * @brief valida fecha
             *
             * @return true
             * @return false
             */
            static bool validate_date(std::string );

            /**
            * @brief valida fecha de nacimiento
            *
            * @return true
            * @return false
            */
            static bool validate_date_of_birth(std::string input);
    };

    class Convertor
    {

        public:

            /**
             * @brief generar aleatorio
             *
             * @return int
             */
            static std::string charToString(const char[]);

    };

    class Generator
    {
        public:

            /**
             * @brief generar aleatorio
             *
             * @return int
             */
            static int random_int(const int, const int);

            /**
             * @brief regresa fecha actual
             *
             * @return std::string
             */
            static std::string return_current_time_and_date();

            /**
             * @brief calcular edad
             *
             * @return int
             */
            static int calculate_age(std::string );
            /**
             * @brief pasa a minusculas
             *
             * @return std::string
             */
            static std::string lower_case(std::string);

            /**
             * @brief double a string
             *
             * @return std::string
             */
            static std::string to_string(double);
    };

}

#endif // UTILS_H
