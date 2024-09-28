#include<iostream>
using namespace std;
void total_sticker(int);
main()
{
    int side_length;
    cout<<"Enter the side length the of Rubik's cube: ";
    cin>>side_length;
    total_sticker(side_length);
}
void total_sticker(int side_length)
{
    
    cout<<"Number of stickers needed:"<<side_length*side_length*6;
}