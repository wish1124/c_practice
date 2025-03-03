#include <iostream>

using namespace std;

int findMax(int a[], int start, int end){
    int max = start;
    for(int i = start+1; i < end; i++){
        if(a[i] > a[max]){
            max = i; // update max index. 값은 a[max]로 참조 가능
        }
    }
    return max;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}


int main(){
    int a[50], k, tmp;

    std::srand(1234);

    for(int i = 0; i < 50; i++){
        a[i] = std::rand() % 100;
    }

    //sorting the array
    for (int i =0; i <=48; i++){
      k = findMax(a, i, 50);
      swap(a[i], a[k]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            cout << a[i*10+j] << " ";
        }
        cout << endl;
    }



}