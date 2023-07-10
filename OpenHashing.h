#ifndef OPENHASHING_H
#define OPENHASHING_H

#include<stdbool.h>

typedef char String[40];
typedef struct{
	String FName;
	String MName;
	String LName;
}NameType;

typedef struct{
	int day;
	int month;
	int year;
}Date;

typedef struct{
	String studID;
	NameType studName;
	char sex;
	Date birthDate;
	String program;
	int year;
}StudentType;

typedef struct node{
	StudentType student;
	struct node * link;
}SType, *List;

typedef struct{
	SType *students;
	int count;
	int max;
}Dictionary;

//Helper Functions
SType* createNode(StudentType S); //allocSpace-like

void initDictionary (Dictionary *D, int size);
int hash (String LastName, int size);
Date addDate(int day, int month, int year);
StudentType addStudent(String ID, NameType Name, char sex,  Date birthdate, String program, int year); /
bool addElement(Dictionary *D, StudentType S);
bool deleteElement(Dictionary *D, StudentType S);
bool searchElement(Dictionary *D, StudentType S);
void displayStudents (Dictionary D);
void visualizeStudents (Dictionary D);

#endif
