class EfficientTruckLoads
{
static int *tl;

public:
EfficientTruckLoads(int n)
{
tl = new int[n];
}

int CalculateEfficientTruckLoads(int n)
{

if(n == 1 || n == 2) return 1;

if(tl[n] > 0)
return tl[n];

return tl[n] = CalculateEfficientTruckLoads(n-1) + CalculateEfficientTruckLoads(n-2);
}
};
static int i [] = {0};
int* EfficientTruckLoads :: tl = i;