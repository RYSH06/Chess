#include <stdio.h>
#include "defs.h"

int main() {

  AllInit();

  U64 playedBitBoard = 0ULL;

  playedBitBoard |= (1ULL << SQ64(D2));
  playedBitBoard |= (1ULL << SQ64(D3));
  playedBitBoard |= (1ULL << SQ64(D4));

  printf("\n");
  PrintBitBoard(playedBitBoard);

  int count = CNT(playedBitBoard);

  printf("Count:%d\n", count);

  int index = POP(&playedBitBoard);
  printf("index:%d\n", index);
  PrintBitBoard(playedBitBoard);
  count = CNT(playedBitBoard);
  printf("Count:%d\n", count);
  
  int sq64 = 0;
  while (playedBitBoard) {
    sq64 = POP(playedBitBoard);
    printf("popped:%d\n", sq64);
  }

  return 0;
}
