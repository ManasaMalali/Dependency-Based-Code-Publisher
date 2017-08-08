#pragma once
////////////////////////////////////////////////////////////////////////
//  Publisher.h - Publishes files from various packages in web browser//
//																      //
//  Language:      Visual C++ 2015                                    //
//  Platform:      MicroSoft Surface Pro, Windows 10	              //
//  Application:   Code Publisher - CSE 687 Project 3                 //
//  Author:        Manasa Malali Nagabhushana SUID:845368670          //
////////////////////////////////////////////////////////////////////////
#include <fstream>
#include<iostream>
#include<iostream>
#include <ctype.h>
#include <atlstr.h>
#include <string>
#include<regex>
#include <direct.h>
#include<stack>
#include<unordered_map>

class Publisher {
public:
	void GetAllFiles(std::unordered_map<std::string, std::vector<std::string>> dependancyFiles, std::unordered_map<std::string, std::vector<std::pair<int, int>>> MappingLines);
	void HTMLMain();
	void DisplayDependencies(std::unordered_map<std::string, std::vector<std::string>> FileNames, std::unordered_map<std::string, std::vector<std::string>>::iterator i);
	void createCSSfile();
	void createIndexPage();
	void createJavaScriptfile(int count);
	void createHTMLfile();
	void ReplaceAll(std::string filename);
	void ReplaceCharacter(std::string str, std::string filename, int count);
	void GetAllHTMLFiles();
	void GetFileNames(std::unordered_map<std::string, std::vector<std::string>> FileMap);
	void GetFileLength(std::unordered_map<std::string, std::vector<std::pair<int, int>>> FILELENGTH);

private:
	int ncount;
	std::ofstream HTMLfile;
	std::ofstream JSfile;
	std::ofstream CSSfile;
	std::ofstream IndexFile;
	std::unordered_map<std::string, std::string> Display_Links;
	std::unordered_map<std::string, std::vector<std::string>> FileNames;	
	//std::vector<std::string> FilePath;
	//std::vector<std::string> Name;
	std::unordered_map<std::string, std::vector<std::pair<int, int>>> FileLengthNew;
	std::stack<int> endlineNum;
};