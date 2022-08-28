class TruckLoads
{
public:
int CalculateTruckLoads(int n)
{
if(n == 0) return 0;
if(n == 1 || n == 2) return 1;

return CalculateTruckLoads(n-1) + CalculateTruckLoads(n-2);
}
};