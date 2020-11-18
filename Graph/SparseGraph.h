//
// Created by WSX on 2020/11/16.
//

#ifndef GRAPH_SPARSEGRAPH_H
#define GRAPH_SPARSEGRAPH_H
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

class SparseGraph{

private:
    int n, m;
    bool isDirected;
    vector<vector<int>> g;
public:
    SparseGraph(int n, bool isDirected){
        this -> n = n;
        this -> m = 0;
        this ->isDirected = isDirected;
        for (int i=0; i< n; i++)
            g.push_back(vector<int>());
    }


    void addEdge(int v, int w){
        assert(v>=0 && v<n);
        assert(w>=0 && w<n);

//        if (!this->hasEdge(v, w))
        g[v].push_back(w);

        if(v != w && !this -> isDirected){
            g[w].push_back(v);
        }
        this -> m ++;
    }

    bool hasEdge(int v, int w){
        assert(v>=0 && v<n);
        assert(w>=0 && w<n);

        for(int i=0; i<g[v].size(); i++){
            if (g[v][i] == w)
                return true;
        }
        return false;
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

    int E(){return this->m;}
    int V(){return this->n;}

    class adjIterator{
    private:
        SparseGraph &G;
        int v;
        int index;

    public:
        adjIterator(SparseGraph &graph, int v): G(graph){
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
//            assert(index < G.g[v].size());
//            return G.g[v][index];
            if (index < G.g[v].size())
                return G.g[v][index];
            return -1;
        }

        bool end(){
            return index >= G.g[v].size();
        }
    };

};
#endif //GRAPH_SPARSEGRAPH_H
