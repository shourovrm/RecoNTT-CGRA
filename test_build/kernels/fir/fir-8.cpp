
#include <cstdio>
#define NTAPS 8

float input[NTAPS];
float output[NTAPS];
float coefficients[NTAPS] = {15.0, 30.0, 45.0, -30.0, 60.0, 75.0, -45.0, 90.0};

void kernel(float input[], float output[], float coefficient[]);

int main()
{

//  input_dsp (input, NTAPS, 0);
  for (int i = 0; i < NTAPS; i++) {
      input[i] = i + 1;
  }

  kernel(input, output, coefficients);
   for (int i = 0; i < NTAPS; i++) {
      printf("%f  ",  output[i]);
   } 
//  output_dsp (input, NTAPS, 0);
//  output_dsp (coefficients, NTAPS, 0);
//  output_dsp (output, NTAPS, 0);
  return 0;
}


void kernel(float input[], float output[], float coefficient[])
/*   input :           input sample array */
/*   output:           output sample array */
/*   coefficient:      coefficient array */
{
  int i;
  int j = 0;

 // for(j=0; j< NTAPS; ++j) {
    for (i = 0; i < NTAPS; ++i) {
      output[j] += input[i] * coefficient[i];
    }
 // }
}
