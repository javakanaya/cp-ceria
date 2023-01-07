/*
	Header file yang digunakan dalam program ini
*/

// Definisi Struktur untuk priority queue

typedef struct pqueueNode_t {
    int data;
    struct pqueueNode_t *next;
} PQueueNode;

typedef struct pqueue_t {
    PQueueNode *_top;
    unsigned _size;
} PriorityQueue;

// Definisi Struktur untuk queue 

typedef struct queueNode_t {
	// node pada queue menyimpan dua variabel, yaitu data(nilai prioritas) dan index
    int data,
        index;
    struct queueNode_t *next;
} QueueNode;

typedef struct queue_t {
    QueueNode   *_front, 
                *_rear;
    unsigned _size;
} Queue;

// Prototipe fungsi

int count_time(PriorityQueue*, Queue*, int);

// Fungsi untuk Priority Queue
void pqueue_init(PriorityQueue*);
int pqueue_isEmpty(PriorityQueue*);
void pqueue_push(PriorityQueue*, int);
void pqueue_pop(PriorityQueue*);
int pqueue_top(PriorityQueue*);

// Fungsi untuk Queue
void queue_init(Queue*);
int queue_isEmpty(Queue*); 
void queue_push(Queue*, int, int);
void queue_pop(Queue*);
int queue_front(Queue*);
int queue_front_index(Queue*);
