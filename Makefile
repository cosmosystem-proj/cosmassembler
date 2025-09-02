# Creator: Kurt M. Weber
# Created on: 2025-09-01

# This file is part of cosmassembler, a component of the Cosmoverse.

# Licensed under Hippocratic License with clauses:
# HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
# See file LICENSE for full licensing information.

SUBDIRS = src/

.PHONY: clean

all: $(SUBDIRS)
	cd $< && make

clean: $(SUBDIRS)
	cd $< && make clean