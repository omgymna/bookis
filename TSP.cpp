#include <iostream>

using namespace std;

//takes a 2D vector array
void findMinRoute( vector<vector<int>> tsp)
{
    int sum = 0, counter = 0;
    int i =0, j=0;

    int min = INT_MAX; //setting to infinity

    map<int,int> visited;   

    visited[0] = 1; //starting from first city      either 0 for not visited or 1 for visited
    int path[tsp.size()] //result array

    //traversal
    while( i<tsp.size() && j<tsp[i].size())
    {
        //corner
        if(counter>= tsp[i].size()-1)
        {
            break;
        }

        //if path is unvisited and if cost is less , update the cost
        if (j != i && (visited[j]==0))
        {
            if(tsp[i][j] < min) //if cost at this path is lower
            {
                min = tsp[i][j];    //set new minimum
                path[counter] = j + 1;
            }

        }
        j++;

        if(j == tsp[i].size())  //checking all paths from the ith indexed city
        {
            sum += min;
            min = INT_MAX;
            visited[path[counter]-1] = 1;
            j=0;
            i = path[counter] - 1;
            counter++;
        }
    }

    i = path[counter - 1] -1;   //updating ending city

    for (j=0; j< tsp.size(); j++)
    {
        if((i != j) && tsp[i][j] < min)
        {
            min = tsp[i][j];
            path[counter] = j + 1;
        }
    }
    sum += min;

    cout<< "Minimum Cost is: "<<sum<<endl;
    return;
}

int main()
{
    return 0;
}