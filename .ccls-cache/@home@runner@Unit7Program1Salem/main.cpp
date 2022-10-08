#include <iostream>
#include <string>
using namespace std;

struct timeOfDay{
  short Hour;
  short Minute;
  short Second; 
};

struct appDate{
  short dayOfMonth;
  short month;
  int year;
};

struct event{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
};

int main() {
  
  event osama;
  osama.eventName = "Final Exam";
  osama.eventDate.month = 10;
  osama.eventDate.dayOfMonth = 11;
  osama.eventDate.year = 2022;
  osama.isUrgent = false;
  osama.eventTime.Hour = 9;
  osama.eventTime.Minute = 15;
  osama.eventTime.Second = 32;

  cout<<osama.eventName<<endl;
  cout<<osama.eventDate.month<<endl;
  cout<<osama.eventDate.dayOfMonth<<endl;
  cout<<osama.eventDate.year<<endl;
  cout<<osama.isUrgent<<endl;
  cout<<osama.eventTime.Hour<<endl;
  cout<<osama.eventTime.Minute<<endl;
  cout<<osama.eventTime.Second<<endl;

  cout<<osama.eventName<<" is going to be on "<<osama.eventDate.month<<"/"<<osama.eventDate.dayOfMonth<<"/"<<osama.eventDate.year<<" at "<<osama.eventTime.Hour<<"PM"<<endl;
  
  return 0;
}