#include <iostream>

using namespace std;

#include "pet.h"

int main (int argc, char **argv){

  //create two pet objects
  Pet p1;
  Pet p2;

  //use mutators to set values
  p1.setName("Ellie");
  p1.setAge(16);
  p1.setType("dog");
  p1.setWeight(75);

  p2.setName("Henry");
  p2.setAge(1);
  p2.setType("hedgehog");
  p2.setWeight(1.5);

  //print information using accessors
  cout << "My pet's name is " << p1.getName() << endl;
  cout << "My pet is " << p1.getAge() << " years old." << endl;
  cout << "It is a " << p1.getType();
  cout << " and weighs " << p1.getWeight() << " pounds." << endl;

  cout << "My pet's name is " << p2.getName() << endl;
  cout << "My pet is " << p2.getAge() << " years old." << endl;
  cout << "It is a " << p2.getType();
  cout << " and weighs " << p2.getWeight() << " pounds." << endl;

  //code left in for purpose of learning, would like to attempt this way again
  /*Pet *p = new Pet("Ellie", 16, "dog", 75);
  Pet *p2 = new Pet("Henry", 1, "hedgehog", 1.5);


  cout << "My pet's name is " << p->getName() << endl;
  cout << "My pet's is: " << p->getAge() << "years old." << endl;
  cout << "It is a " << p->getType() << endl;
  cout << "and weighs " << p->getWeight() << "pounds" << endl;

  cout << "My pet's name is " << p2->getName() << endl;
  cout << "My pet's is: " << p2->getAge() << "years old." << endl;
  cout << "It is a " << p2->getType() << endl;
  cout << "and weighs " << p2->getWeight() << "pounds" << endl;


  delete p;
  delete p2;*/

  return 0;

}
