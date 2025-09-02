# Creator: Kurt M. Weber
# Created on: 2025-08-31

# This file is part of cosmassembler, a component of the Cosmoverse.

# Licensed under Hippocratic License with clauses:
# HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
# See file LICENSE for full licensing information.

CC = gcc
INCLUDE_DIRS = -I../include
CFLAGS = -g $(INCLUDE_DIRS)
COSM-READER_SOURCES = common-invocation.c readsource.c
COSM-READER_OBJS = $(addsuffix .o,$(basename $(COSM-READER_SOURCES)))

.PHONY: clean

all: cosm-reader

cosm-reader: $(COSM-READER_OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -D ENV_HOSTED

clean:
	rm -f cosm-reader *.o *.a *.so