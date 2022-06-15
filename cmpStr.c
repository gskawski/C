#include <string.h>

const char* greet(const char *name, const char *owner) {
  return (strlen(name) == strlen(owner) ? strncmp(name,owner,strlen(name)) == 0 ? "Hello boss" : "Hello guest" : "Hello guest");
}
