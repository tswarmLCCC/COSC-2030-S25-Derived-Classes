# COSC-2030-S25-Derived-Classes

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

This will be done by modifying the offeredCourse and Course .h and .cpp files!

You may need to compile these files separately to get the project to run.  Review the linking module from a few weeks back if you need to.

I've been building it with this command:  
g++ *.cpp -o DerivedUnit.exe

and then running:
.\DerivedUnit.exe



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
