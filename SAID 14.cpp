#include <iostream>
using namespace std;
int main()
{
 int numStudents;
 cout << "Enter the number of students: ";
 cin >> numStudents;
 int grades[numStudents], sum = 0, highest = 0, lowest = 100;
 double average;
 int aboveCount = 0, belowCount = 0;
 for (int i = 0; i < numStudents; i++)
 {
 cout << "Enter grade for student " << i + 1 << ": ";
 cin >> grades[i];
 
 sum += grades[i]; 
 if (grades[i] > highest) highest = grades[i]; 
 if (grades[i] < lowest) lowest = grades[i]; 
 }
 average = static_cast<double>(sum) / numStudents;
 cout << "\n Average grade: " << average << endl;
 for (int i = 0; i < numStudents; i++)
 {
 if (grades[i] > average) aboveCount++;
 else if (grades[i] < average) belowCount++;
 }
 cout << " student score above the average: " << aboveCount << endl;
 cout << " student scored sbelow the average: " << belowCount << endl;
 cout << "Highest grade in the class: " << highest << endl;
 cout << "Lowest grade in the class : " << lowest << endl;
 return 0;
}

