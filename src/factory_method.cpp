/**
 ******************************************************************************
 * @file           : factory_method.cpp
 * @author         : tsing
 * @brief          : None
 * @attention      : None
 * @date           : 23-3-5
 * @email          : tsing0401@outlook.com
 ******************************************************************************
 */

#include "factory_method.h"
namespace design_pattern
{
	FileSplitter

	ISpiltter* FileFactory::createSpiltter()
	{
		return new FileSplitter;
	}

}