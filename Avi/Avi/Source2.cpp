//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//int dp[100005];
//int countPaths(vector<vector<int>>& graph, int s, int t)
//{
//    if (s == t)   // if s==t we get one path this is base condition
//        return 1;
//    if (dp[s] != -1)
//        return dp[s];
//    int countpath_s_to_t = 0;
//    for (int& neb : graph[s])  // traverse all nodes of graph
//    {
//        int ct = countPaths(graph, neb, t);
//        if (ct != -1)
//            countpath_s_to_t += ct;
//    }
//    if (countpath_s_to_t == 0)  // if we don't get any path from s to t
//        return dp[s] = -1;
//    else
//        return dp[s] = countpath_s_to_t;
//
//}
//int main()
//{
//    cout << "Enter the no of vertex in a graph :- ";
//    int v;
//    cin >> v;
//    cout << "Enter the No of edge in a graph :- ";
//    int e;
//    cin >> e;
//    vector<vector<int>>graph(v + 1);
//    cout << "Enter " << e << " edges to make a graph :- " << endl;
//    for (int i = 0; i < e; i++)
//    {
//        int u, v;
//        cin >> u >> v;
//        graph[u].push_back(v);
//    }
//    cout << "Enter source  node :- ";
//    int s;
//    cin >> s;
//    cout << "Enter destination node :- ";
//    int t;
//    cin >> t;
//    memset(dp, -1, sizeof(dp));  // store dp array with -1
//    int no_of_path_s_to_t = countPaths(graph, s, t);
//
//    if (no_of_path_s_to_t == -1)
//        cout << "count of the total from " << s << " to " << t << " is :- " << "0" << endl;
//    else
//        cout << "count of the total from " << s << " to " << t << " is :- " << no_of_path_s_to_t << endl;
//    return 0;
//}