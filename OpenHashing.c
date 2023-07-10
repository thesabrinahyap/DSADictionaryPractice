#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include "OpenHashing.h"

//Helper Functions
SType* createNode(StudentType S){
	SType* node = malloc(sizeof(SType));
	node->student = S;
	node->link = NULL;
	
	return node;
}

void initDictionary (Dictionary *D, int size){
	D->students = malloc(sizeof(SType) * size);
	D->count = 0;
	d->max = size;

	for(int ctr = 0;ctr<D->max;++ctr){
		D->students[ctr].data = newStudent(" "," "," "," "," ",false,0,0,0,0);
		D->students[ctr].link = NULL;
	}
}
int hash (String LastName, int size){
	return toupper(LastName[0])-'A' % size;
}
Date addDate(int day, int month, int year){
	Date d;
	
	d.day = day;
	d.month = month;
	d.year = year;
	
	return d;
}
StudentType addStudent(String ID, NameType Name, char sex,  Date birthdate, String program, int year){
	StudentType s;
	
	strcpy(s.studID, ID);
	s.studName = Name;
	s.sex = sex;
	s.birthDate = birthdate;
	strcpy(s.program, program);
	s.year = year;
	
	return s;
}
bool addElement(Dictionary *D, StudentType S){
	SType* space = createNode(S);
	StudentType student;
	int hashValue = hash(S.studName.LName, D->max); 
	SType* temp = &D->students[hashValue];
	if(atoi(D->students[hashValue].student.studID) == 0){  	       
		D->students[hashValue].student = S;
		return true;
	}
	else if(strcmp(D->students[hashValue].student.studID, student.studID)>0){
		temp = temp->link;
		student = D->students[hashValue].student;
		D->students[hashValue].student = S;
		space = createNode(S);
		space->link = temp;
		D->students[hashValue].link = space;
		return true;
	}
	else{
		SType* current = &D->students[hashValue];

		while(current->link != NULL && strcmp(current->students.studID, S.studID)<0){
			current = current->link;
		}
		space->link = current->link;
		current->link = space;
		
		return false;	
	}
}
bool deleteElement(Dictionary *D, StudentType S);
bool searchElement(Dictionary *D, StudentType S);
void displayStudents (Dictionary D);
void visualizeStudents (Dictionary D);

