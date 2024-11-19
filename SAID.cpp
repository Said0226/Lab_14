#include <iostream>
using namespace std;
void updateIndicators(int healthRecords[][3], int patientIndex, int newIndicators[3])
{
 for (int i = 0; i < 3; i++)
 {
 healthRecords[patientIndex][i] = newIndicators[i];
 }
 cout << "\nHealth records for Patient " << patientIndex + 1 << " have been successfully 
updated.\n";
}
void searchCriticalCondition(int healthRecords[][3])
{
 cout << "\nChecking for patients with critical heart rates...\n";
 bool criticalFound = false;
 
 for (int i = 0; i < 3; i++)
 {
 if (healthRecords[i][2] > 120) 
 {
 cout << "Alert! Patient " << i + 1 << " has a critical heart rate of " << healthRecords[i][2] << " 
bpm.\n";
 criticalFound = true;
 }
 }
 
 if (!criticalFound)
 {
 cout << "No patients with critical heart rates were found.\n";
 }
}
void displayAverage(int healthRecords[][3])
{
 double average[3] = {0};
 for (int j = 0; j < 3; j++)
 {
 int sum = 0;
 for (int i = 0; i < 3; i++)
 {
 sum += healthRecords[i][j];
 }
 average[j] = static_cast<double>(sum) / 3;
 }
 cout << "\nAverage values for each health indicator:\n";
 for (int j = 0; j < 3; j++)
 {
 cout << " - Indicator " << j + 1 << " average: " << average[j] << "\n";
 }
}
int main()
{
 int healthRecords[3][3] = {
 {98, 120, 110}, 
 {99, 125, 130}, 
 {97, 115, 100} 
 };
 int patientIndex;
 cout << "\nEnter the patient number (1 to 3) whose health records you want to update: ";
 cin >> patientIndex;
 patientIndex--;
 if (patientIndex >= 0 && patientIndex < 3)
 {
 int newIndicators[3];
 cout << "\nPlease provide the new health indicators for Patient " << (patientIndex + 1) << 
":\n";
 for (int i = 0; i < 3; i++)
 {
 cout << " - Indicator " << i + 1 << ": ";
 cin >> newIndicators[i];
 }
 updateIndicators(healthRecords, patientIndex, newIndicators);
 }
 else
 {
 cout << "\nError: Invalid patient number. Please choose a number between 1 and 3.\n";
 }
 searchCriticalCondition(healthRecords);
 displayAverage(healthRecords);
 return 0;
}

