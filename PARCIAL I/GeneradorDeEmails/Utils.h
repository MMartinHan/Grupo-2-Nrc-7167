#pragma once
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
#include <cstdio>
#include <stdio.h>
#include <iterator>
#include <algorithm>


using namespace std;

namespace Utils
{
	class Generador {
		public:
			/**
			 * @brief genera un email
			 *
			 * @return string
			 */
			static string generarEmail(string nombre, string apellido);
			
			/**
			 * @brief pasa a minusculas
			 *
			 * @return std::string
			 */
			static string lowerCase(string);
	};

	class Validacion {

		public:
			/**
			 * @brief verifica digito
			 *
			 * @return true
			 * @return false
			 */
			static bool esDigito(const string&);
	};
}