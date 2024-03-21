#pragma once
#include<iostream>
#include<vector>
#include"Course.h"
using namespace std;
class Course;
class Student
{
private:
	int studentID;
	string name, email;
	vector<Course>coursesEnrolled;
public:
	Student(int ID, string na,string mail):studentID(ID),name(na),email(mail) {
		cout << "Student constructor called" << endl;
	};
	void enrollCourse(Course course) {
		coursesEnrolled.push_back(course);
	};
	void dropCourse(Course course);
	void viewCourse(Course course);
	string getstudentname() {
		return name;
	}
};
void Student::viewCourse(Course course) {
	for (auto view : coursesEnrolled) {
		cout << course.getcoursename()<<endl;
	}
}
void Student::dropCourse(Course course) {
	bool flag = false;
	for (auto drop = coursesEnrolled.begin(); drop != coursesEnrolled.end(); ++drop) {
		if (drop->getcoursename() == course.getcoursename()) {
			coursesEnrolled.erase(drop);
			return;
		}
	}
	cout << "Course not found" << endl;
}
