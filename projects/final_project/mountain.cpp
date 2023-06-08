#include "mountain.h"

   void Mountain::set_name(string mount_name)
      {name = mount_name;}
   string Mountain::get_name()
      {return name;}
   void Mountain::set_country(string mount_country)
      {name = mount_country;}
   string Mountain::get_country()
      {return country;}
   void Mountain::set_elevation(int mount_elevation)
      {elevation = mount_elevation;}
   int Mountain::get_elevation()
      {return elevation;}
   double Mountain::toMeters(){
      double meters = (elevation / 3.2808);
      return meters;
    } 
   vector <Mountain> mount;
   void print(vector <Mountain> mount);
   Mountain::Mountain (string name_m, string country_m, int elevation_m){
      name = name_m;
      country = country_m;
      elevation = elevation_m;
   }