#include "find_min_max.h"

#include <limits.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end)
{
      struct MinMax min_max;
      min_max.min = INT_MAX;
      min_max.max = INT_MIN;
      int min, max;
      min=array[begin];
      max=array[begin];
      for (int i=begin; i<end; i++)
      {
          if (array[i]<min) min=array[i];
          else if (array[i]>max) max=array[i];
      }
      min_max.min=min;
      min_max.max=max;
      printf("min: %d\t", min_max.min);
      printf("max: %d\n", min_max.max);
      return min_max;
}
