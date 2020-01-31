#include <iostream>
#include <string>

using namespace std;
class Pet{
public:
  Pet(); //constructor
  Pet(string name, int age, string type, double weight);

  //accessors AKA getters
  string getName();
  int getAge();
  string getType();
  double getWeight();

  //mutators AKA setters
  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);


private:
  //attributes of the object
  string m_name;
  unsigned int m_age;
  string m_type;
  double m_weight;
};
