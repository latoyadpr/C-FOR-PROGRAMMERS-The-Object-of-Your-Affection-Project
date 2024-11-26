#include <iostream>

int main() {

  

}


#include <vector>
#include <string>

class Profile {
  
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;
  
};

#include <iostream>
#include "profile.hpp"

int main() {
  Profile sam;
  sam.name = "Sam Drakkila";
}

#include <vector>
#include <string>

class Profile {
private:
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;

public:

};
population = new_population;
population = population;


#include <iostream>
#include "profile.hpp"

int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
}

public:
  std::string view_profile();

#include "profile.hpp"
#include <string>

std::string Profile::view_profile() {
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nCity: " + city;
  bio += "\nCountry: " + country;
  bio += "\nPronouns: " + pronouns;

  return bio;
}


#include <iostream>
#include "profile.hpp"

int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  std::cout << sam.view_profile();
}


public:
  void add_hobby(std::string new_hobby);


#include "profile.hpp"
#include <string>

void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}


#include "profile.hpp"
#include <string>

std::string Profile::view_profile() {
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nCity: " + city;
  bio += "\nCountry: " + country;
  bio += "\nPronouns: " + pronouns;
  std::string hobby_string = "Hobbies:\n";

  for (const std::string& hobby : hobbies) {
    hobby_string += " - " + hobby + "\n";
  }

  return bio + "\n" + hobby_string;
}


#include <iostream>
#include "profile.hpp"

int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("reading advice columns");

  std::cout << sam.view_profile();
}
