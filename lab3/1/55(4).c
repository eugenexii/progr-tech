// void Addition (Tree, k) /* поиск звена k в бинарном дереве со
// вставкой */ /* (нерекурсивный алгоритм) */ /* *Tree - указатель
// на вершину дерева */ struct node **Tree; int k; { struct node
// *r; struct node *s /* ------------ */ Poisk (k, Tree, &r); if
// (!B) { s = (struct node *) calloc (sizeof (struct node),1);
// (*s).Key = k; (*s).Count = 1; (*s).Left = NULL; (*s).Right =
// NULL; if (*Tree==NULL) *Tree=s; else if (k<(*r).Key) (*r).Left
// = s;  else (*r).Right = s; } else (*r).Count + 1; }



void Addition (Tree, k) /* поиск звена k в бинарном дереве со вставкой*/
                            /* (нерекурсивный алгоритм) */
                       /* *Tree - указатель на вершину дерева */

struct node **Tree;
int k;
{
    struct node *r;
    struct node *s /* ------------ */
    Poisk (k, Tree, &r);
    if (!B)
    {
        s = (struct node *) calloc (sizeof (struct node),1);
        (*s).Key = k;
        (*s).Count = 1;
        (*s).Left = NULL;
        (*s).Right = NULL;
        if (*Tree==NULL) *Tree=s;
        else if (k<(*r).Key) (*r).Left = s;
        else (*r).Right = s;
    }
    else (*r).Count + 1;
}
