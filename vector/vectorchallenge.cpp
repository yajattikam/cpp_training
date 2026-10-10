#include <iostream>

class myVector {
private:
    int size;
    int* vec = new int[size];
public:
    myVector(){

    }
    void changeSize(int num){
        size = num;
    }
    void setNewVec(int* &newVec){
        vec = newVec;
    }
    void addE(int element, int position){
        if(position <= size - 1){
            vec[position] = element;
        } 
        else{
            changeSize(size + 2);
            int* vecResize = new int[size];
            for( int i =0; i < size; i++){
                vecResize[i] = vec[i];
            }
            delete[] vec;
            
            int* newVec = new int[size];
            for( int i =0; i < size; i++){
                newVec[i] = vecResize[i];
            }
            delete[] vecResize;
            setNewVec(newVec);
            vec[position] = element;
        }
    }
    int getE(int position){
        return vec[position];
    }
    void deleteV(){
        delete[] vec;
    }

};



int main(){

    myVector V;
    V.addE(0,0);
    V.addE(1,1);
    V.addE(2,2);
    V.addE(3,3);
    V.addE(4,4);
    V.addE(4,5);
    std::cout << V.getE(0) << "\n";
    std::cout << V.getE(1) << "\n";
    std::cout << V.getE(2) << "\n";
    std::cout << V.getE(3) << "\n";
    std::cout << V.getE(4) << "\n";
    std::cout << V.getE(5) << "\n";
    //std::cout << V.getE(3);
    V.deleteV();
    
}