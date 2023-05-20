/*Problem Statement: Given an array of height of bars,select two bars such that it has maximum area of water*/
 #include <bits/stdc++.h>
 using namespace std;
 /*Approach select index with max and min height calculate area by formula:
 area =min_height*width
 where width=abs(max_idx-min_idx)
 if element at min_idx has height more than element at more_idx then swap
 do till width>0 or max_idx!=min_idx
 if area is greater than preivous iteration than update it*/
 int maxArea(vector<int>& height) {
        int maxarea =0;
        int minIndex = 0;
        int maxIndex = height.size()-1;
     
        while(minIndex!=maxIndex)
        {
            if(height[minIndex]>height[maxIndex])
                swap(minIndex,maxIndex);
            int newarea = height[minIndex] * (abs(minIndex-maxIndex));
            if(newarea>maxarea)
                maxarea = newarea;
            
            if(minIndex > maxIndex)
                minIndex--;
            else
                minIndex++;
        }
        return maxarea;
    }

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int area;
    area=maxArea(height);
    cout<<area;
}