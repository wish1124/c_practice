#include <vector>
#include <iostream>


int main()
{
  std::vector<int> a;

  std::cout<<"size: "<<a.size()<<std::endl;

  //push back
  for(int i = 0; i < 10; i++){
    a.push_back(i);
  }

  //print
  for(int i = 0; i < a.size(); i++){
    std::cout<<a[i]<<" ";
  }
  std::cout<<std::endl;

  //insert
  a.insert(a.begin() + 4, 10);

  //print
  for(int i = 0; i < a.size(); i++){
    std::cout<<a[i]<<" ";
  }
  std::cout<<std::endl;

  //erase
  a.erase(a.begin() + 4);


  //print
  for(int i = 0; i < a.size(); i++){
    std::cout<<a[i]<<" ";
  }
  std::cout<<std::endl;

  return 0;
}


