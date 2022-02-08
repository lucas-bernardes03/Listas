#define MAX 100

typedef struct{
    int ordem;
    int forca;
} Bacteria;

typedef struct{
    Bacteria mundo [MAX][MAX];
    int m;
    int n;
} World;

int menu();

void newWorld (World * mundo,unsigned int n, unsigned int m);
World cloneWorld (World * w);
void freeWorld (World * w);
unsigned int randomWorld (World * w, unsigned int n);
unsigned int addBacterium (World * w, Bacteria b);
unsigned int addBacteriumXY (World * w, Bacteria b, unsigned int x, unsigned int y);
unsigned int killBacterium (World * w, unsigned int n);
unsigned int killBacteriumXY (World * w, unsigned int x, unsigned int y);
World jointWorlds (World * w1, World *w2);
World warWorlds (World * w1, World *w2);
World probabilisticWarWorlds (World * w1, World *w2, float p);
unsigned int sizeWorld (World * w);
unsigned int forceWorld (World * w);
unsigned int showWorld (World * w);

