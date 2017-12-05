#include <stdio.h>
#include <omp.h>
 
int main() {
    int total = omp_get_num_threads();
    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        printf("Greetings from process %d out of %d.\n", id, total);
    }
    printf("Parallel ends.\n");
  return 0;
}
