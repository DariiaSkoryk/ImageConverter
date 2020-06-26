#include "ImageConverter.h"

#pragma once
#include <sstream>

bool ImageConverter::checkFileValidity()
{
	m_errorCode = ErrorValue::FUNCTION_IS_NOT_REALIZED;
	return 0;
}

char ImageConverter::getLastError()
{
	return m_errorCode;
}

std::string ImageConverter::getErrorMessage(char errorCode = m_errorCode)
{
	m_errorCode = ErrorValue::FUNCTION_IS_NOT_REALIZED;
	return "";
}

bool ImageConverter::readFile(std::string)
{
	m_errorCode = ErrorValue::FUNCTION_IS_NOT_REALIZED;
	return 0;
}

bool ImageConverter::isFileValid()
{
	m_errorCode = ErrorValue::FUNCTION_IS_NOT_REALIZED;
	return 0;
}

bool ImageConverter::getFileType()
{
	m_errorCode = ErrorValue::FUNCTION_IS_NOT_REALIZED;
	return 0;
}

bool ImageConverter::convertFile()
{
	m_errorCode = ErrorValue::FUNCTION_IS_NOT_REALIZED;
	return 0;
}