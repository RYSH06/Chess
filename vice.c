#include <stdio.h>
#include "defs.h"

int main() {

  AllInit();

  U64 playedBitBoard = 0ULL;

  printf("Start:\n\n");
  PrintBitBoard(playedBitBoard);

  playedBitBoard |= (1ULL << SQ64(D2));
  printf("D2:\n\n");
  PrintBitBoard(playedBitBoard);

  playedBitBoard |= (1ULL << SQ64(G2));
  printf("G2:\n\n");
  PrintBitBoard(playedBitBoard);



  return 0;
}
