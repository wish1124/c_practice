#include <vector>
#include <iostream>


using namespace std;



int main()
{
  int vNum = 100, dim = 2;

  int** vertex = new int*[vNum];

  //vertex 공간을 할당한 코드. 2D Array를 메모리에 dynamic하게 할당하는 코드입니다.
  for(int i =0; i < vNum; i++)
  {
    //vertex[i] 는 integer를 가리키는 1중 포인터입니다. 그러면 integer의 주소로 얘네를 초기화 해주어야 합니다.
    vertex[i] = new int[dim]; // dim개의 연속한 integer를 메모리 공간에 할당해주고, 첫 시작 주소를 vertex[i]에 넣어준다.
    ////vertex[i][0....dim-1]에 integer를 들고 잇을 수 있는 공간이 생겼다.
    cout<<"vertex["<<i<<"] = "<<vertex[i]<<endl; //vertex[i] 와 동일한 의미는 *(vertex+i) 이다.
  }


  //2D Array에 값을 넣어주는 코드 ( 값에 대한 초기화)
  for(int i = 0; i < vNum; i++)
  {
    for (int j = 0; j < dim; j++)
    {
      vertex[i][j] = 1;
    }
  }

  for(int i =0; i < vNum; i++)
  {
    delete[] vertex[i]; // dim개의 연속한 integer 공간이 해제된다.
  }
  delete[] vertex; // vertex[i]에 대한 vNum개의 연속한 integer* 공간이 해제된다.


  return 0;
}