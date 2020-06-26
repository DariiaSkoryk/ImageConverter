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
	std::string message;
	switch (errorCode) {
		case ErrorValue::NO_ERROR: message = "";
		case ErrorValue::FILE_DAMAGED: message = "File was damaged";
		case ErrorValue::FILE_IS_NOT_SUPPORTED: message = "This file is not supported";
		case ErrorValue::FILE_NOT_OPENED: message = "This file can`t be opened";
		case ErrorValue::FILE_NOT_READED: message = "You should read the file before convertation";
		case ErrorValue::FUNCTION_IS_NOT_REALIZED: message = "Some function is not realised yet";
		default:message = "Unknown error";
	}
	return message;
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