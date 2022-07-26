#include <iostream>
int main()
{
    int matris[7][7]= { {3,1,7,6,3,9,5},
                        {2,8,2,7,9,8,6},
                        {7,5,9,0,7,2,2},
                        {3,1,3,5,6,1,5},
                        {8,0,5,7,2,9,8},
                        {5,2,8,3,7,0,3},
                        {7,6,2,9,6,1,6}};  
    int counter[10]={0}, yedek[10], i, j, max, max_index, tmp;
    for(i=0;i<7;i++)
        for(j=0;j<7;j++)
            counter[matris[i][j]]++;
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            if(counter[j]==i)
                std::cout<<" "<<j;
        
}                     