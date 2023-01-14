/*
    header file yang digunakan dalam program ini
*/

#define RogueValue -999

// definisi struktur node
typedef struct stackNode_t 
{
    int data;
    struct stackNode_t *next;
} StackNode;

// definisi tipe stack
typedef struct stack_t 
{
    StackNode *top;
} Stack;

// prototipe fungsi
Stack* init(void);
int isEmpty(Stack*);
void push(Stack*, int);
void pop(Stack*);
int top(Stack*);
int trainSolve(int[], int);
