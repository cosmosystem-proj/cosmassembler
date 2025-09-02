/* Creator: Kurt M. Weber
 *
 * Created on: 2025-09-01
 *
 * This file is part of cosmassembler, a component of the Cosmoverse.
 *
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR See file LICENSE for full
 * licensing information.
 */

#define _READSOURCE_C

#include "cosasm-common.h"
#include "quanta/platform.h"
#include "quanta/types.h"
#include "reader.h"

void read_input(FILE *input) {
  int ch;
  uint64 src_line = 0;
  uint64 src_col = 0;
  uint64 src_pos = 0;
  reader_char *rch = NULL;

  // ch has to be int because otherwise we can't compare it against EOF
  while ((ch = fgetc(input)) != EOF) {
    putchar(ch);
  }
}