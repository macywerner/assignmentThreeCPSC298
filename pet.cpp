#include <iostream>
using namespace std;

#include "pet.h"

Pet::Pet(){
  //initiaize variables to default values
  m_name = "";
  m_age = 0;
  m_type = "";
  m_weight = 0.0;

}

//accessors
  string Pet::getName(){
    return m_name;
  }

  int Pet::getAge(){
    return m_age;
  }

  string Pet::getType(){
    return m_type;
  }

  double Pet::getWeight(){
    return m_weight;
  }

  //mutators
  void Pet::setName(string name){
    m_name = name;
  }

  void Pet::setAge(int age){
    m_age = age;
  }

  void Pet::setType(string type){
    m_type = type;
  }

  void Pet::setWeight(double weight){
    m_weight = weight;
  }
