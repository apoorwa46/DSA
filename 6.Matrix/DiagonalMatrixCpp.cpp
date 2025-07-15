#include<iostream>
using namespace std;

class DiagonalMatrix {
    private:
        int *A;
        int n;
    public:
        DiagonalMatrix(int size) {
            n=size;
            A= new int[n];
        }
        void set(int i, int j, int x) {
            if(i==j){
                A[i-1]=x;
            }
        }
        int get(int i, int j) {
            if(i==j){
                return A[i-1];
            }
            return 0;
        }
        void Display(){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<get(i+1,j+1)<<" ";
                }
                cout<<endl;
            }
        }
        int GetDimension(){return n;}
        ~DiagonalMatrix() {
            delete[] A;
        }
};

int main() {
    DiagonalMatrix m(4);
    m.set(1, 1, 5);
    m.set(2, 2, 6);
    m.set(3, 3, 7);
    m.set(4, 4, 8);
    cout<<"Dimension: "<<m.GetDimension()<<endl;
    cout<<"Value at (2,2): "<<m.get(2,2)<<endl;
    m.Display();
}