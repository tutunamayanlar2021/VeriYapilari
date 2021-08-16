/** 
* @file Main.cpp
* @description  çalıstırma
* @course 1. Öğretim B
* @assignment 1.Ödev
* @date 14.08.2021
* @author  Kader Oral |  kadriye.oral@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "File.hpp"

int main() {
	
	File *file =new File();
	file->readFile();
	delete file;

	
    return 0;
  }

 