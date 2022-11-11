#include <stdio.h>
#include <stdlib.h>

#include "find_min_max.h"
#include "utils.h"

int main(int argc, char **argv) {
  if (argc != 3) { //проверка входных данных, количество аргументов должно быть 
  //равным 3: название программы, зерно и количество элементов в массиве
    printf("Usage: %s seed arraysize\n", argv[0]);
    return 1;
  }

  int seed = atoi(argv[1]); // перевод в int семени
  if (seed <= 0) { //проверка семени на положительность
    printf("seed is a positive number\n");
    return 1;
  }

  int array_size = atoi(argv[2]); //перевод размера массива в int 
  if (array_size <= 0) { //проверка размера массива на положительность
    printf("array_size is a positive number\n");
    return 1;
  }

  int *array = malloc(array_size * sizeof(int)); //выделение памяти под массив
  GenerateArray(array, array_size, seed); //генерация массива
  for (int i=0; i<array_size; i++)
        printf("%d\t",array[i]);
  printf("\n");
  struct MinMax min_max = GetMinMax(array, 0, array_size); //определение максимума 
  //и минимума массива
  free(array);

  printf("min: %d\n", min_max.min);
  printf("max: %d\n", min_max.max);

  return 0;
}
