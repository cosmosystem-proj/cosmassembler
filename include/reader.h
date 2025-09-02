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

#ifndef _READER_H
#define _READER_H

#include "quanta/types.h"

typedef struct reader_char {
  unsigned char ch;
  uint64 src_line;
  uint64 src_col;
  uint64 src_pos;
} reader_char;

#endif