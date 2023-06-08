#ifndef FINALPROJECT_H
#define FINALPROJECT_H
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Mountain {
   private:
      string name;
      string country;
      int elevation;   

   public:
      Mountain (string name, string country, int elevation);
      void set_name(string mount_name);
      string get_name();
      void set_country(string mount_country);
      string get_country();
      void set_elevation(int mount_elevation);
      int get_elevation();
      double toMeters (); 
      friend ostream& operator<<(ostream& os, const Mountain& mount);
      vector <Mountain> mount;
      void print(vector <Mountain> mount);
};

#endif