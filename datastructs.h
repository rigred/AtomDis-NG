/*
 * Copyright 2007 Matthias Hopf <mhopf@suse.de>
 *
 * AtomBIOS disassembler + data structure dumper
 *
 * datastructs.h:
 * Data structure dumpers (actual dumper code autogenerated from _factory.pl).
 *
 * License: to be determined
 */

#ifndef DATASTRUCTS_H_
#define DATASTRUCTS_H_

#define USE_ATOMBIOS_RELATED_STUFF

typedef int data_dumper_t (uint8_t *start, uint8_t *data, int indent);

extern void init_data_dumpers (void);

extern data_dumper_t *get_data_dumper (int ind, int *version, int *revision,
				       const char **comment);

#endif
