// Lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "gitHubUser.h"

using namespace std;

bool Comparison(gitHubUser x, gitHubUser y){
	if(x.userName == y.userName && x.email == y.email && x.firstName == y.firstName && x.folderCount == y.folderCount){
		cout << "Same";
		return true;
	}
	else{
		return false;
	}
}
//Existing
bool Exists(gitHubUser*& id, int size, string userName){
	for (int i = 0; i < size; i++){
		if( id[i].userName == userName){
			cout << "This userName already exists, enter another userName";
			cout << endl;
			return true;
		}
	}
	return false;
}
//Function to take input
void inputFromUser(gitHubUser*& id, int size)
{
	string tempusername;
	for (int i = 0; i < size ; i++){
		cout << "Enter info for User " << i + 1 << endl;
		cout << "Enter First Name: ";
		cin >> id[i].firstName;
		cout << endl;
		cout << "Enter UserName :";
		cin>> tempusername;
		while (Exists(id, i, tempusername)){
			cout << "Enter UserName: ";
			cin >> id[i].userName;
			cout << endl;
		}
		id[i].userName = tempusername;
		cout << "Enter a valid email address:";
		cin >> id[i].email;
		cout << endl;
		cout << "Enter a Password: ";
		cin >> id[i].password;
		cout << endl;
		cout << "Enter Folder Count: ";
		cin >> id[i].folderCount;
		cout << endl;
	}
}
///search funtion
gitHubUser* searchUser ( gitHubUser* id, int size, string userName){
	for (int i =0; i <size; i++){
		if(userName == id[i].userName){
		return id;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int size =50;
	char username[50];
	gitHubUser* id = new gitHubUser[50];
	inputFromUser(id, size);

	// comparing 2 users
	Comparison(id[1], id[2]);
	//searching 
	cout << "Enter the Username you want to search: ";
	cin >> username;
	searchUser(id, size, username);
	//deleting
	delete [] id;
	return 0;
}

