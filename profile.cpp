#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string name2, int age2, std::string city2, std::string country2, std::string pronouns2 )
: name(name2), age(age2), city(city2), country(country2), pronouns(pronouns2)
{}

std::string Profile::view_profile(){
  std::string info = "Name:" + name ;
  info += "\nAge: " + std::to_string(age);
  info += "\n Pronouns:" + pronouns;
  info += "\n Location:" + city + " , "+ country + "\n";
  
  for( int i = 0; i < hobbies.size(); i++){
    info += "\nHobbies:" + hobbies[i];
  }
  return info;
}

void Profile::add_hobby(std::string new_hobby){
  hobbies.push_back(new_hobby);
}
