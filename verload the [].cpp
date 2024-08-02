#include<iostream>
#include<stdexcept>
using namespace std;
class array{
	private:
		int*data;
		int size;
	public:
		array(int s):size(s){
			data = new int [size];
		}
		array(){
			delete[]data;
		}
		int & operator[](int index){
			if (index<0 || index >= size){
				throw out_of_range("index out of range");
			}
			return data[index];
			}
			int getSize()const{
			return size;
			}
		};
		int main(){
			const int SIZE=5;
			array arr(SIZE);
			for (int i=0;i<SIZE;++i){
				arr[i]=i*10;
			}
			cout << "Array elements:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    return 0;
		}
		
		
