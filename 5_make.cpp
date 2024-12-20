/*
Given main(), define a Course base class with functions to set and get the private data members of the 
following types:

string to store the course number
string to store the course title
Define Course's PrintInfo() function that outputs the course number and title.

Then, define a derived class OfferedCourse with functions to set and get the private data members of 
the following types:

string to store the instructor name
string to store the location
string class time
Ex. If the input is:

ECE287
Digital Systems Design
ECE387
Embedded Systems Design
Mark Patterson
Wilson Hall 231
WF: 2-3:30 pm
the output is:

Course Information:
   Course Number: ECE287
   Course Title: Digital Systems Design
Course Information:
   Course Number: ECE387
   Course Title: Embedded Systems Design
   Instructor Name: Mark Patterson
   Location: Wilson Hall 231
   Class Time: WF: 2-3:30 pm
*/
using namespace std;
#include "OfferedCourse.h"
#include <iostream>


int main() {
		Course myCourse;
		OfferedCourse myOfferedCourse;

		string courseNumber, courseTitle;
		string oCourseNumber, oCourseTitle, instructorName, location, classTime;

		getline(cin, courseNumber);
		getline(cin, courseTitle);

		getline(cin, oCourseNumber);
		getline(cin, oCourseTitle);
		getline(cin, instructorName);
		getline(cin, location);
		getline(cin, classTime);

		myCourse.SetCourseNumber(courseNumber);
		myCourse.SetCourseTitle(courseTitle);
		myCourse.PrintInfo();

		myOfferedCourse.SetCourseNumber(oCourseNumber);
		myOfferedCourse.SetCourseTitle(oCourseTitle);
		myOfferedCourse.SetInstructorName(instructorName);
		myOfferedCourse.SetLocation(location);
		myOfferedCourse.SetClassTime(classTime);
		myOfferedCourse.PrintInfo();

		cout << "   Instructor Name: " << myOfferedCourse.GetInstructorName() << endl;
		cout << "   Location: " << myOfferedCourse.GetLocation() << endl;
		cout << "   Class Time: " << myOfferedCourse.GetClassTime() << endl;
}
