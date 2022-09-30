#include <iostream>
#include <vector>

class Profile{
  //atributes 
  private:
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;

  public:
  Profile(std::string name2, int age2, std::string city2, std::string country2, std::string pronouns2 = "they/them");

  std::string view_profile();
  void add_hobby(std::string new_hobby);

};

