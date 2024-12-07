// wap to print the row number whose sum is maximum
// Input 1:
// 1 3 5 7
// 3 4 7 8
// 1 4 12 3
// Output 1: 2
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    int col;
    cout<<"enter number of colomuns"<<endl;
    cin>>col;
    int arr[rows][col];
    cout<<"enter matrix elements"<<endl;
    for(int i=0;i<rows;i++){
        for (int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    // performing operetions
    int maxsum=0;//initialize max sum to very small value so that we can manage case of -ve integer elements
    int row=-1;// intialize row number to very small value
    //calculating sum of each row
    for(int i=0;i<rows;i++){
        int currsum=0;//intialize sum variable to zero
        for(int j=0;j<col;j++){
            currsum+=arr[i][j];
        }
        // now compare maxsum and sumvalue
        if(currsum>maxsum){
            maxsum=currsum;// storing current sum value to maximum sum value after comparing
            row=i;
        }
    }
    cout<<"row have maximum is:"<<row+1;// row + 1 because row starts from zero

    return 0;
}