#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
using namespace std;
//dlaczego github nie zwraca mi wyniku testy
vector< char > foo(list< Human >& people)
{
  vector < char > v;
  for (auto it = people.rbegin(); it != people.rend(); it++)
  {
    it->birthday();  

    if (it->isMonster()==true){
      v.emplace_back('n');
    }
    else {
      v.emplace_back('y'); 
    }
  }
  return v;
}
