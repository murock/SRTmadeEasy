#include "Functions.h"
#include <iostream>
#include <fstream>
#include <sstream> 
#include <string>
#include "mylib.h"
/*
struct intTimeValue {
	int units;
	int tens;
	int hundreds;
	int thousands;
	int tensthousands;
	int hundredsthousands;
};*/

std::string intToString(int x) {
	std::string result = static_cast<std::ostringstream*>(&(std::ostringstream() << x))->str();
	return result;
}

int stringToInt(std::string str) {
	int result;
	std::istringstream convertInt(str);
	if (!(convertInt >> result))	//give the value to result using chars in stream
		result = 0;	//if fail set result to 0
	return result;
}

struct strTimeValue {
	std::string strUnits;
	std::string strTens;
	std::string strHundreds;
	std::string strThousands;
	std::string strTensThousands;
	std::string strHundredsThousands;
};
/*
intTimeValue getIntTime(int duraCheck) {
	intTimeValue result;
	result.units = duraCheck % 10;
	result.tens = duraCheck / 10 % 10;
	result.hundreds = duraCheck / 100 % 10;
	result.thousands = duraCheck / 1000 % 10;
	result.tensthousands = duraCheck / 10000 % 10;
	result.hundredsthousands = duraCheck / 100000 % 10;
	return result;
}*/


/*
strTimeValue getStrTime2(intTimeValue intDigits) {
	strTimeValue result;
	result.strUnits = intToString(intDigits.units);
	result.strTens = intToString(intDigits.tens);
	result.strHundreds = intToString(intDigits.hundreds);
	result.strThousands = intToString(intDigits.thousands);
	result.strTensThousands = intToString(intDigits.tensthousands);
	result.strHundredsThousands = intToString(intDigits.hundredsthousands);
	return result;
}
*/
strTimeValue getStrTime(int intToTime) {
	int units = intToTime % 10;
	int tens = intToTime / 10 % 10;
	int hundreds = intToTime / 100 % 10;
	int thousands = intToTime / 1000 % 10;
	int tensthousands = intToTime / 10000 % 10;
	int hundredsthousands = intToTime / 100000 % 10;

	strTimeValue result;
	result.strUnits = intToString(units);
	result.strTens = intToString(tens);
	result.strHundreds = intToString(hundreds);
	result.strThousands = intToString(thousands);
	result.strTensThousands = intToString(tensthousands);
	result.strHundredsThousands = intToString(hundredsthousands);
	return result;
}


int textCap(std::string fromTime, std::string toTime, std::string caption, std::string capToEdit) {



	int capNum = stringToInt(capToEdit);


	// converting duration to integer from std::string
	//int intFromTime = stringToInt(fromTime);
	int intToTime = stringToInt(toTime);
	toTimes.push_back(intToTime);

	//strTimeValue strDigitsFrom = getStrTime(intFromTime);
	//strTimeValue strDigitsTo = getStrTime(intToTime);
	/*
	//get digits
	int units = duraCheck % 10;
	int tens = duraCheck / 10 % 10;
	int hundreds = duraCheck / 100 % 10;	
	int thousands = duraCheck / 1000 % 10;
	int tensthousands = duraCheck / 10000 % 10;
	int hundredsthousands = duraCheck / 100000 % 10;
	

	std::string strUnits = intToString(units);
	std::string strTens = intToString(tens);
	std::string strHundreds = intToString(hundreds);
	std::string strThousands = intToString(thousands);
	std::string strTensThousands = intToString(tensthousands);
	std::string strHundredsThousands = intToString(hundredsthousands);
	*/


	std::vector<std::string> singleCaption;
	singleCaption.push_back(capToEdit);
	//singleCaption.push_back(strDigitsFrom.strHundredsThousands + strDigitsFrom.strTensThousands + ":" + strDigitsFrom.strThousands + strDigitsFrom.strHundreds + ":" + strDigitsFrom.strTens + strDigitsFrom.strUnits + ",000" + " --> ");
	//singleCaption.push_back(strDigitsTo.strHundredsThousands + strDigitsTo.strTensThousands + ":" + strDigitsTo.strThousands + strDigitsTo.strHundreds + ":" + strDigitsTo.strTens + strDigitsTo.strUnits + ",000");
	singleCaption.push_back(fromTime);
	singleCaption.push_back(toTime);
	singleCaption.push_back(caption);

	captions.push_back(singleCaption);

	

	return capNum + 1;
}

void writeSRT(std::string fileName, std::string langCode) {
	std::ofstream srt_file(fileName + langCode + ".srt");

	for (int i = 0; i < captions.size(); i++) {
		std::vector<std::string> singleCaption = captions[i];

		int intFromTime = stringToInt(singleCaption[1]);
		int intToTime = stringToInt(singleCaption[2]);

		strTimeValue strDigitsFrom = getStrTime(intFromTime);
		strTimeValue strDigitsTo = getStrTime(intToTime);

		//srt_file << singleCaption[0] << std::endl << singleCaption[1] + singleCaption[2] << std::endl << singleCaption[3] << std::endl << std::endl;
		srt_file << singleCaption[0] << std::endl << strDigitsFrom.strHundredsThousands + strDigitsFrom.strTensThousands + ":" + strDigitsFrom.strThousands + strDigitsFrom.strHundreds + ":" + strDigitsFrom.strTens + strDigitsFrom.strUnits + ",000" + " --> " + strDigitsTo.strHundredsThousands + strDigitsTo.strTensThousands + ":" + strDigitsTo.strThousands + strDigitsTo.strHundreds + ":" + strDigitsTo.strTens + strDigitsTo.strUnits + ",000" << std::endl << singleCaption[3] << std::endl << std::endl;
	}
}

