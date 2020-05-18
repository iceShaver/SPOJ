// SPOJ: KC005
// TIME: 2020-05-12

#include <regex.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LINE_LEN 128

bool regex_match(const char *str, const char *regex){
  regex_t reg;
  bool result = false;
  regcomp(&reg, regex, REG_EXTENDED);
  if(regexec(&reg, str, 0, NULL, 0) == 0)
    result = true;
  regfree(&reg);
  return result;
}

int main() {
  const char *name_regex = "^[A-Z][a-z]*$";
  const char *birth_date_regex = "^(19[0-9][0-9]|2000)-(1[0-2]|0[1-9])-(0[1-9]|1[0-9]|2[0-9]|3[0-1])$";
  char in_buff[LINE_LEN];
  while (fgets(in_buff, LINE_LEN, stdin)) {
    char *name = strtok(in_buff, ";");
    char *surname=strtok(NULL, ";");
    char *birth_date=strtok(NULL, ";");

    strtok(name, " ");
    name = strtok(NULL, " ");
    strtok(surname, " ");
    surname = strtok(NULL, " ");
    strtok(birth_date, " ");
    strtok(NULL, " ");
    birth_date = strtok(NULL, " ");
    birth_date[strlen(birth_date)-1] = '\0';

    if(!regex_match(name, name_regex))
      puts("0");
    else if(!regex_match(surname, name_regex))
      puts("1");
    else if(!regex_match(birth_date, birth_date_regex))
      puts("2");
    else
      puts("3");
  }
  return 0;
}
