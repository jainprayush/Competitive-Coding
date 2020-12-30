/* Problem:
Argus was charged with guarding Io, which is not an ordinary cow. Io is quite an explorer, and she wanders off rather frequently, making Argus' life stressful. So the cowherd decided to construct an enclosed pasture for Io.

There are n trees growing along the river, where Argus tends Io. For this problem, the river can be viewed as the OX axis of the Cartesian coordinate system, and the n trees as points with the y-coordinate equal 0. There is also another tree growing in the point (0,1).

Argus will tie a rope around three of the trees, creating a triangular pasture. Its exact shape doesn't matter to Io, but its area is crucial to her. There may be many ways for Argus to arrange the fence, but only the ones which result in different areas of the pasture are interesting for Io. Calculate the number of different areas that her pasture may have. Note that the pasture must have nonzero area.

Input
The input consists of multiple test cases. The first line contains an integer t (1≤t≤100) — the number of test cases. Then t test cases follow, each one is described in two lines.

In the first line of each test case there is a single integer n (1≤n≤50) denoting the number of trees growing along the river. Next line contains n distinct integers x1<x2<…<xn−1<xn (1≤xi≤50), the x-coordinates of trees growing along the river.

Output
In a single line output an integer, the number of different nonzero areas that triangles with trees as vertices may have. */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    set<int, greater<int> > s1;
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<N-1;i++)
	    {
	        for(int j=i+1;j<N;j++)
	        {
	            s1.insert(abs(arr[i]-arr[j]));
	        }
	    }
	    cout<<s1.size()<<endl;
	}
	return 0;
}
