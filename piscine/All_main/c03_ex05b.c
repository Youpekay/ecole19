#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned size);

int main() {
  printf("Size is [%u]\n", ft_strlcat("salut", " les amis", 15));
  printf("Size is [%lu]", strlcat("salut", "les amis", 15));
  return (0);
}
