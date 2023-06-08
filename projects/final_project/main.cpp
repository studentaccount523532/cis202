// File: finalproject.cpp
// Description: This program takes in data about mountains and outputs it with
// the elevation in meters and the information about the lowest peak.
// Created: 6/6/2023
// Author: Nick Christoffels
// mail: nicholc4423@student.vvc.edu
#include "mountain.h"
#include "mountain.cpp"

int minElevation(vector <Mountain> mount){
   string lowestName = mount.at(0).get_name();
   int min = mount.at(0).get_elevation();
      for (unsigned int i = 1; i < mount.size(); ++i){
         if (mount.at(i).get_elevation() < min){
            min = mount.at(i).get_elevation();
            lowestName = mount.at(i).get_name();
         }
      }
   cout << lowestName << " "; 
   return min;
}


void print(vector <Mountain> printMount){
   cout << "Mountain" << setw(14) << "|Country" << setw(20) << 
   " |Elevation ft" << setw(10) << " |Elevation m" << endl;
   for (unsigned int i = 0; i < printMount.size(); ++i){
      cout << printMount.at(i);
      cout << printMount.at(i).toMeters() << endl;
   }
}

ostream& operator<<(ostream& os, const Mountain& mount){
   os << left << setw(15) << mount.name << setw(15) << 
   mount.country << setw (10) << mount.elevation << "    ";
   return os;
}

int main() {
   vector <Mountain> mount_list;
   Mountain mount1 ("Chimborazo", "Ecuador", 20549);
   Mountain mount2 ("Matterhorn", "Switzerland", 14692);
   Mountain mount3 ("Olympus", "Greece", 9573);
   Mountain mount4 ("Everest", "Nepal", 29029);
   Mountain mount5 ("Mount Marcy", "United States", 5344);
   Mountain mount6 ("Mount Mitchell", "United States", 6684);
   Mountain mount7 ("Zugspitze", "Switzerland", 9719);

   mount_list.push_back(mount1);
   mount_list.push_back(mount2);
   mount_list.push_back(mount3);
   mount_list.push_back(mount4);
   mount_list.push_back(mount5);
   mount_list.push_back(mount6);
   mount_list.push_back(mount7);

   print(mount_list);
   cout << "Lowest Elevation: " << minElevation(mount_list);  

   return 0;
}
