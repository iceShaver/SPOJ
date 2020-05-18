// SPOJ: JLITOSL
// TIME: 2020-05-12

#include <stdio.h>

#define OUTPUT_LEN 20

typedef long long num_t;

const char *numerals[] = {
        "zero", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec",
        "dziesiec", "jedenascie", "dwanascie", "trzynascie", "czternascie", "pietnascie", "szesnascie", "siedemnascie", "osiemnascie", "dziewietnascie",
        "zero", "dziesiec", "dwadziescia", "trzydziesci", "czterdziesci", "piecdziesiat", "szescdziesiat", "siedemdziesiat", "osiemdziesiat", "dziewiecdziesiat",
        "zero", "sto", "dwiescie", "trzysta", "czterysta", "piecset", "szescset", "siedemset", "osiemset", "dziewiecset",
        "tys.", "mln.", "mld.", "bln."};

int main() {
  num_t number;
  unsigned int n;

  scanf("%i", &n);
  while (n--) {
    const char *output[OUTPUT_LEN] = {0};
    int i = 0;

    scanf("%llu", &number);
    while (number) {
      unsigned _100 = (number % 1000) / 100;
      unsigned _10 = (number % 100) / 10;
      unsigned _1 = number % 10;

      if (_100)// hundreds
        output[4 * i + 3] = numerals[30 + _100];
      if (_10 > 1)// tens
        output[4 * i + 2] = numerals[20 + _10];
      if (_10 == 1)// *teen
        output[4 * i + 2] = numerals[10 + _1];
      else if (_1)// if not *teen check units
        output[4 * i + 1] = numerals[_1];

      if (i && (_100 || _10 || _1))// write tys, mln, mld or bln if any of above numbers where present
        output[4 * i] = numerals[40 + i - 1];

      number = number / 1000;
      i++;
    }
    // write output array reversely
    for (i = OUTPUT_LEN - 1; i >= 0; i--)
      if (output[i])
        printf("%s ", output[i]);
    putchar('\n');
  }
  return 0;
}
