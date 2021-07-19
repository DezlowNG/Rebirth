#pragma once

#ifndef LOGGER_H
#define LOGGER_H

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>

namespace rb
{
	class Logger
	{
	public:
		void Init();
	};
}

#endif