int lostSheep(const int *friday, const int* saturday, int total)
{
    int sum = 0;
    
    while(*friday != 0)
      sum += *friday++;
    
    while(*saturday != 0)
      sum += *saturday++;
    
    return total - sum;
}
