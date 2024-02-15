#include <stdio.h>

int testy();

int main() {
  printf("main\n");

  testy();
}

int testy() {
  printf("testy\n");
}


void __attribute__((no_instrument_function)) __cyg_profile_func_enter(void *func,  void *caller)
{
  printf("enter %p\n", func);
}

void __attribute__((no_instrument_function)) __cyg_profile_func_exit (void *func,  void *caller)
{
  printf("exit %p\n", func);
}
