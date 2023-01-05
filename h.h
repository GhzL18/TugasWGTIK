#ifndef H_H_INCLUDED
#define H_H_INCLUDED

#include <iostream>
using namespace std;

#define left(P) (P)->left
#define right(P) (P)->right
#define info(P) (P)->info
#define nil NULL

typedef struct ElmTree *adrNode;

typedef int infotype;

struct ElmTree{
    infotype info ;
    adrNode left, right;
};

adrNode newNode_1301213378(infotype x);
adrNode findNode_1301213378(adrNode root, infotype x);
void insertNode_1301213378(adrNode &root, adrNode p);
void printPreOrder_1301213378(adrNode root);
void printDescendant_1301213378(adrNode root, infotype x);
int sumNode_1301213378(adrNode root);
int countLeaves_1301213378(adrNode root);
int heightTree_1301213378(adrNode root);

#endif // H_H_INCLUDED
