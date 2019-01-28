// l181068_Lab2_Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "gitHubUser.h"
#include <fstream>

void ReadData (gitHubUser* &id, int& size){
	//reading data
	ifstream fin("C:\\Users\\Lab\\Desktop\\");
	//if file not found
	if( fin.fail){
		cout << "file can not be opened";
	}
	//if found
	else{
		int size = 0; 
		fin >> size;
		//taking new array
		id = new gitHubUser[size];
		//reading all types and printing them
		for (int i = 0; i < size; i++){
			fin >> id[i].fistName;
			cout << id[i].firstName << endl;
			fin >> id[i].userName;
			cout << id[i].userName << endl;
			fin >> id[i].email;
			cout << id[i].email << endl;
			fin.id[i].foldercount;
			cout << id[i].foldercount;
			id[i].gitHubFolders = new string[id[i].folderCount];
		}
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	gitHubUser* id;
	int size = 50;
	ReadData(id, size);
	return 0;
}

