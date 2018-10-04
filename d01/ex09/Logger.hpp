#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <string>
# include <iostream>
# include <fstream>

class Logger
{
	private:
		void		logToConsole(std::string const &data);
		void		logToFile(std::string const &data);
		std::string	makeLogEntry(std::string const &data);
		
	public:
		Logger(std::string);
		~Logger();

		void		log(std::string const & dest, std::string const & message);
};

#endif