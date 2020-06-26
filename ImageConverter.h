#pragma once
#include <sstream>

class ImageConverter
{
	enum fileType {
		BMP			= 0x00,
		PNG			= 0x01,
		JPEG		= 0x02,
		JPEG2000	= 0x03,
		ICO			= 0x04,
		GIF			= 0x05,
		PSD			= 0x06,
		ECW			= 0x07,
		ILBM		= 0x08,
		VIL			= 0x09,
		MrSID		= 0x0A,
		PCX			= 0x0B,
		TGA			= 0x0C,
		TIFF		= 0x0D,
		HDPhoto		= 0x0E,
		WebP		= 0x0F,
		XBM			= 0x10,
		XPS			= 0x11,
		PNM			= 0x12,
		RLA			= 0x13,
		RPF			= 0x14,
	};
	char errorCode = 00000000;
	char fileInfo;	//	bit 0 - isValid, bit 1..2 - reserved, bit 3..7 - fileType
	std::stringstream fileData;
	
	bool checkFileValidity();
public:
	enum ErrorValue
	{
		NO_ERROR,
		FILE_NOT_READED,
		FILE_NOT_OPENED,
		FILE_DAMAGED,
		FILE_IS_NOT_SUPPORTED,
		FUNCTION_IS_NOT_REALIZED
	};

	bool getLastError();
	std::string getErrorMessage(char);

	bool readFile(std::string);
	bool isFileValid();
	bool getFileType();
	bool convertFile();
};