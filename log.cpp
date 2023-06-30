/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:42:46 by melkholy          #+#    #+#             */
/*   Updated: 2023/05/13 00:25:24 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace	new_log{
class	Log
{
public:
	enum levels
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

	void	SetLevel(levels level)
	{
		m_loglevel = level;
	}

	void	Error(const char *message)
	{
		if (m_loglevel >= LevelError)
			std::cout << "[Error1]: " << message << std::endl;
	}

	void	Warn(const char *message)
	{
		if (m_loglevel >= LevelWarning)
			std::cout << "[Warning1]: " << message << std::endl;
	}

	void	Info(const char *message)
	{
		if (m_loglevel >= LevelInfo)
			std::cout << "[Info1]: " << message << std::endl;
	}
private:
	levels	m_loglevel;
};
}

namespace	my_log{
class	Log
{
public:
	enum levels
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

	void	SetLevel(levels level)
	{
		m_loglevel = level;
	}

	void	Error(const char *message)
	{
		if (m_loglevel >= LevelError)
			std::cout << "[Error]: " << message << std::endl;
	}

	void	Warn(const char *message)
	{
		if (m_loglevel >= LevelWarning)
			std::cout << "[Warning]: " << message << std::endl;
	}

	void	Info(const char *message)
	{
		if (m_loglevel >= LevelInfo)
			std::cout << "[Info]: " << message << std::endl;
	}
private:
	levels	m_loglevel;
};
}

// you can only use these two with namespces
using namespace my_log;
namespace hey = new_log;

// you can use typedef and using for types like this
typedef std::string string;
using num_t = int;

// you can use this for aliasing a function or a library
using std::cout;


int	main(void)
{
	Log	log;

	string	app;
	string	ending;
	app = "App starting....";
	ending = "App exiting...";
	
	cout << app << '\n';
	cout << std::endl;

	log.SetLevel(Log::LevelInfo);
	log.Error("error");
	log.Warn("warning");
	log.Info("info");

	hey::Log new_glog;
	new_glog.SetLevel(new_log::Log::LevelWarning);
	new_glog.Error("Error");
	new_glog.Warn("Warning");
	new_glog.Info("Info");

	std::cout << std::endl;
	std::cout << ending << '\n';

	return (0);
}
