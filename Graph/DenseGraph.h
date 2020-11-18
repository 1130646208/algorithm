//
// Created by WSX on 2020/11/16.
//

#ifndef GRAPH_DENSEGRAPH_H
#define GRAPH_DENSEGRAPH_H

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
class DenseGraph{
private:
    int m, n;
    //m is edge, n is point
    bool isDirected;
    vector<vector<bool>> g;

public:
    DenseGraph(int n, bool directed){
        this->n = n;
        this->m = 0;
        this->isDirected = directed;
        for (int i=0;i<n; i++){
            g.push_back(vector<bool>(n, false));
        }

    }
    int E(){
        return this->m;
    }
    int V(){
        return this->n;
    }
    void show(){
        for(int i=0; i<g.size(); i++){
            cout<< "V"<< i <<" "<<"\t";
            for(int j=0; j<g[i].size(); j++){
                cout<< g[i][j] <<"\t";
            }
            cout<<endl;
        }
    }

    void addEdge(int v, int w){
        assert(v>=0 && v<n);
        assert(w>=0 && w<n);

        if (hasEdge(v, w))
            return;

        g[v][w] = true;

        if (!this->isDirected)
            g[w][v] = true;
        this->m++;
    }

    bool hasEdge(int v, int w){
        assert(v>=0 && v<n);
        assert(w>=0 && w<n);

        return g[v][w];

    }
    //******************************
    class adjIterator{
    private:
        DenseGraph &G;
        int v;
        int index;

    public:
        adjIterator(DenseGraph &graph, int v): G(graph){
            this->v = v;
            this->index = 0;
        }

        ~adjIterator(){}

        int begin(){
            this->index = 0;
            if (!G.g[v].empty())
                return G.g[v][index];
            return -1;
        }
        int next(){
            index ++;
            if (index < G.g[v].size())
                return G.g[v][index];
            return -1;
        }

        bool end(){
            return index >= G.g[v].size();
        }
    };
};

#endif //GRAPH_DENSEGRAPH_H
