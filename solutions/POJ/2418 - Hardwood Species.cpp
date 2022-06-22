/******************************

    @author:  AMY
    @title:   ACM - POJ - 2418
    @date:    17th - April - 2019

*******************************/
#include <iostream>
#include <iomanip>
#include <map>
#include <set>

using namespace std;

set <string> s;
set <string>::iterator t;
map <string,int> m;
string x;
int cnt;

int main ()
{
     ios::sync_with_stdio(false);
     while (getline(cin,x)) {
          s.insert(x);
          m[x]++;
          cnt++;
     }
     t = s.begin();
     while ( t != s.end() ) {
          cout << fixed << setprecision(4) << *t << " " << 1.0*m[*t]/cnt*100.0 << endl;
          t++;
     }

     return 0;
}

/* Another Solution:

#include<stdio.h>
#include<string.h>
#include<iostream>
#include<cctype>
#include<limits>
using namespace std;

float total=0;
struct Tree
{
    char name[31];
    float count;
    struct Tree *left,*right;
}*root=NULL,*nw,*tmp;

int insert(char *);
int infix(struct Tree *);
int main()
{
    char tree[31];
    while(1)
    {
        cin.getline(tree,30);
        if(cin.fail())
            break;
        total++;
        insert(tree);
    }
    infix(root);
    return 0;
}

int insert(char *tree)
{
    if(root==NULL)
    {
        nw=new Tree;
        strcpy(nw->name,tree);
        nw->count=1;
        nw->left=nw->right=NULL;
        root=nw;
    }
    else
    {
        tmp=root;
        while((strcmp(tree,tmp->name)>0&&tmp->right!=NULL)||(strcmp(tree,tmp->name)<0&&tmp->left!=NULL))
        {
            if(strcmp(tree,tmp->name)>0)
                tmp=tmp->right;
            else if(strcmp(tree,tmp->name)<0)
                tmp=tmp->left;
        }
        if(strcmp(tree,tmp->name)==0)
            tmp->count++;
        else
        {
            nw=new Tree;
            strcpy(nw->name,tree);
            nw->count=1;
            nw->left=nw->right=NULL;
            if(strcmp(tree,tmp->name)>0)
                tmp->right=nw;
            else
                tmp->left=nw;
        }
    }
    return 0;
}

int infix(struct Tree *root)
{
    if(root!=NULL)
    {
        if(root->left!=NULL)
            infix(root->left);
        printf("%s %.4f\n",root->name,(root->count)/total*100);
        if(root->right!=NULL)
            infix(root->right);
    }
    return 0;
}

*/