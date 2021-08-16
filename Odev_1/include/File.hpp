/** 
* @file File.hpp 
* @description  Dosyadan okuyup diziye atma işlemi
* @course 1. Öğretim B
* @assignment 1.Ödev
* @date 14.08.2021
* @author  Kader Oral |  kadriye.oral@ogr.sakarya.edu.tr
*/
#ifndef FILE_HPP
#define FILE_HPP
#include <fstream>
#include <string>
#include <iostream>

class File{
	public:
	        char karakter;
			int loop=0;
			int i=0;
		    void readFile();
	
};

#endif