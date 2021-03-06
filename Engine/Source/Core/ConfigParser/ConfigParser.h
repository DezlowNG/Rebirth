/*
*  Thank you for staying with us.
*  (c) Oneiro Games 2019 - 2021
*/

#pragma once

#ifndef CONFIGPARSER_H
#define CONFIGPARSER_H

#include <fstream>

class ConfigParser
{
public:
	ConfigParser();
	~ConfigParser();

	std::string GetConfigs() { return mConfigsList; }

private:
	std::fstream mConfigFile;
	std::string mConfigsList;
};

#endif