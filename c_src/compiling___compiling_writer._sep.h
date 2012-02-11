/* This C header file is generated by NIT to compile modules and programs that requires src/compiling/compiling_writer. */
#ifndef compiling___compiling_writer_sep
#define compiling___compiling_writer_sep
#include "standard._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_compiling___compiling_writer___Writer[];

extern const classtable_elt_t VFT_compiling___compiling_writer___WriterNode[];

extern const classtable_elt_t VFT_compiling___compiling_writer___WriterCoreNode[];

extern const classtable_elt_t VFT_compiling___compiling_writer___WriterStrings[];
extern const char *LOCATE_compiling___compiling_writer;
extern const int SFT_compiling___compiling_writer[];
#define ID_compiling___compiling_writer___Writer (SFT_compiling___compiling_writer[0])
#define COLOR_compiling___compiling_writer___Writer (SFT_compiling___compiling_writer[1])
#define ATTR_compiling___compiling_writer___Writer____first_sub_writer(recv) ATTR(recv, (SFT_compiling___compiling_writer[2] + 0))
#define ATTR_compiling___compiling_writer___Writer____last_sub_writer(recv) ATTR(recv, (SFT_compiling___compiling_writer[2] + 1))
#define ATTR_compiling___compiling_writer___Writer____last_string(recv) ATTR(recv, (SFT_compiling___compiling_writer[2] + 2))
#define ATTR_compiling___compiling_writer___Writer____is_writing(recv) ATTR(recv, (SFT_compiling___compiling_writer[2] + 3))
#define ATTR_compiling___compiling_writer___Writer____is_frozen(recv) ATTR(recv, (SFT_compiling___compiling_writer[2] + 4))
#define INIT_TABLE_POS_compiling___compiling_writer___Writer (SFT_compiling___compiling_writer[3] + 0)
#define CALL_compiling___compiling_writer___Writer___add(recv) ((compiling___compiling_writer___Writer___add_t)CALL((recv), (SFT_compiling___compiling_writer[3] + 1)))
#define CALL_compiling___compiling_writer___Writer___add_all(recv) ((compiling___compiling_writer___Writer___add_all_t)CALL((recv), (SFT_compiling___compiling_writer[3] + 2)))
#define CALL_compiling___compiling_writer___Writer___append(recv) ((compiling___compiling_writer___Writer___append_t)CALL((recv), (SFT_compiling___compiling_writer[3] + 3)))
#define CALL_compiling___compiling_writer___Writer___internal_append(recv) ((compiling___compiling_writer___Writer___internal_append_t)CALL((recv), (SFT_compiling___compiling_writer[3] + 4)))
#define CALL_compiling___compiling_writer___Writer___sub(recv) ((compiling___compiling_writer___Writer___sub_t)CALL((recv), (SFT_compiling___compiling_writer[3] + 5)))
#define CALL_compiling___compiling_writer___Writer___write_to_stream(recv) ((compiling___compiling_writer___Writer___write_to_stream_t)CALL((recv), (SFT_compiling___compiling_writer[3] + 6)))
#define CALL_compiling___compiling_writer___Writer___is_frozen(recv) ((compiling___compiling_writer___Writer___is_frozen_t)CALL((recv), (SFT_compiling___compiling_writer[3] + 7)))
#define CALL_compiling___compiling_writer___Writer___freeze(recv) ((compiling___compiling_writer___Writer___freeze_t)CALL((recv), (SFT_compiling___compiling_writer[3] + 8)))
#define CALL_compiling___compiling_writer___Writer___init(recv) ((compiling___compiling_writer___Writer___init_t)CALL((recv), (SFT_compiling___compiling_writer[3] + 9)))
#define ID_compiling___compiling_writer___WriterNode (SFT_compiling___compiling_writer[4])
#define COLOR_compiling___compiling_writer___WriterNode (SFT_compiling___compiling_writer[5])
#define ATTR_compiling___compiling_writer___WriterNode____next_writer(recv) ATTR(recv, (SFT_compiling___compiling_writer[6] + 0))
#define INIT_TABLE_POS_compiling___compiling_writer___WriterNode (SFT_compiling___compiling_writer[7] + 0)
#define CALL_compiling___compiling_writer___WriterNode___internal_write_to_stream(recv) ((compiling___compiling_writer___WriterNode___internal_write_to_stream_t)CALL((recv), (SFT_compiling___compiling_writer[7] + 1)))
#define CALL_compiling___compiling_writer___WriterNode___init(recv) ((compiling___compiling_writer___WriterNode___init_t)CALL((recv), (SFT_compiling___compiling_writer[7] + 2)))
#define ID_compiling___compiling_writer___WriterCoreNode (SFT_compiling___compiling_writer[8])
#define COLOR_compiling___compiling_writer___WriterCoreNode (SFT_compiling___compiling_writer[9])
#define ATTR_compiling___compiling_writer___WriterCoreNode____writer(recv) ATTR(recv, (SFT_compiling___compiling_writer[10] + 0))
#define INIT_TABLE_POS_compiling___compiling_writer___WriterCoreNode (SFT_compiling___compiling_writer[11] + 0)
#define CALL_compiling___compiling_writer___WriterCoreNode___init(recv) ((compiling___compiling_writer___WriterCoreNode___init_t)CALL((recv), (SFT_compiling___compiling_writer[11] + 1)))
#define ID_compiling___compiling_writer___WriterStrings (SFT_compiling___compiling_writer[12])
#define COLOR_compiling___compiling_writer___WriterStrings (SFT_compiling___compiling_writer[13])
#define ATTR_compiling___compiling_writer___WriterStrings____string(recv) ATTR(recv, (SFT_compiling___compiling_writer[14] + 0))
#define ATTR_compiling___compiling_writer___WriterStrings____next(recv) ATTR(recv, (SFT_compiling___compiling_writer[14] + 1))
#define INIT_TABLE_POS_compiling___compiling_writer___WriterStrings (SFT_compiling___compiling_writer[15] + 0)
#define CALL_compiling___compiling_writer___WriterStrings___init(recv) ((compiling___compiling_writer___WriterStrings___init_t)CALL((recv), (SFT_compiling___compiling_writer[15] + 1)))
static const char * const LOCATE_compiling___compiling_writer___Writer___add = "compiling_writer::Writer::add";
val_t compiling___compiling_writer___Writer___add(val_t p0, val_t p1);
typedef val_t (*compiling___compiling_writer___Writer___add_t)(val_t p0, val_t p1);
static const char * const LOCATE_compiling___compiling_writer___Writer___add_all = "compiling_writer::Writer::add_all";
val_t compiling___compiling_writer___Writer___add_all(val_t p0, val_t p1, val_t p2);
typedef val_t (*compiling___compiling_writer___Writer___add_all_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_compiling___compiling_writer___Writer___append = "compiling_writer::Writer::append";
val_t compiling___compiling_writer___Writer___append(val_t p0, val_t p1);
typedef val_t (*compiling___compiling_writer___Writer___append_t)(val_t p0, val_t p1);
static const char * const LOCATE_compiling___compiling_writer___Writer___internal_append = "compiling_writer::Writer::internal_append";
void compiling___compiling_writer___Writer___internal_append(val_t p0, val_t p1);
typedef void (*compiling___compiling_writer___Writer___internal_append_t)(val_t p0, val_t p1);
static const char * const LOCATE_compiling___compiling_writer___Writer___sub = "compiling_writer::Writer::sub";
val_t compiling___compiling_writer___Writer___sub(val_t p0);
typedef val_t (*compiling___compiling_writer___Writer___sub_t)(val_t p0);
static const char * const LOCATE_compiling___compiling_writer___Writer___write_to_stream = "compiling_writer::Writer::write_to_stream";
void compiling___compiling_writer___Writer___write_to_stream(val_t p0, val_t p1);
typedef void (*compiling___compiling_writer___Writer___write_to_stream_t)(val_t p0, val_t p1);
static const char * const LOCATE_compiling___compiling_writer___Writer___is_frozen = "compiling_writer::Writer::is_frozen";
val_t compiling___compiling_writer___Writer___is_frozen(val_t p0);
typedef val_t (*compiling___compiling_writer___Writer___is_frozen_t)(val_t p0);
static const char * const LOCATE_compiling___compiling_writer___Writer___freeze = "compiling_writer::Writer::freeze";
void compiling___compiling_writer___Writer___freeze(val_t p0);
typedef void (*compiling___compiling_writer___Writer___freeze_t)(val_t p0);
static const char * const LOCATE_compiling___compiling_writer___Writer___init = "compiling_writer::Writer::init";
void compiling___compiling_writer___Writer___init(val_t p0, int* init_table);
typedef void (*compiling___compiling_writer___Writer___init_t)(val_t p0, int* init_table);
val_t NEW_Writer_compiling___compiling_writer___Writer___init();
static const char * const LOCATE_compiling___compiling_writer___WriterNode___internal_write_to_stream = "compiling_writer::WriterNode::internal_write_to_stream";
void compiling___compiling_writer___WriterNode___internal_write_to_stream(val_t p0, val_t p1);
typedef void (*compiling___compiling_writer___WriterNode___internal_write_to_stream_t)(val_t p0, val_t p1);
static const char * const LOCATE_compiling___compiling_writer___WriterNode___init = "compiling_writer::WriterNode::init";
void compiling___compiling_writer___WriterNode___init(val_t p0, int* init_table);
typedef void (*compiling___compiling_writer___WriterNode___init_t)(val_t p0, int* init_table);
val_t NEW_WriterNode_compiling___compiling_writer___WriterNode___init();
static const char * const LOCATE_compiling___compiling_writer___WriterCoreNode___internal_write_to_stream = "compiling_writer::WriterCoreNode::(compiling_writer::WriterNode::internal_write_to_stream)";
void compiling___compiling_writer___WriterCoreNode___internal_write_to_stream(val_t p0, val_t p1);
typedef void (*compiling___compiling_writer___WriterCoreNode___internal_write_to_stream_t)(val_t p0, val_t p1);
static const char * const LOCATE_compiling___compiling_writer___WriterCoreNode___init = "compiling_writer::WriterCoreNode::init";
void compiling___compiling_writer___WriterCoreNode___init(val_t p0, val_t p1, int* init_table);
typedef void (*compiling___compiling_writer___WriterCoreNode___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_WriterCoreNode_compiling___compiling_writer___WriterCoreNode___init(val_t p0);
static const char * const LOCATE_compiling___compiling_writer___WriterStrings___init = "compiling_writer::WriterStrings::init";
void compiling___compiling_writer___WriterStrings___init(val_t p0, val_t p1, int* init_table);
typedef void (*compiling___compiling_writer___WriterStrings___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_WriterStrings_compiling___compiling_writer___WriterStrings___init(val_t p0);
static const char * const LOCATE_compiling___compiling_writer___WriterStrings___internal_write_to_stream = "compiling_writer::WriterStrings::(compiling_writer::WriterNode::internal_write_to_stream)";
void compiling___compiling_writer___WriterStrings___internal_write_to_stream(val_t p0, val_t p1);
typedef void (*compiling___compiling_writer___WriterStrings___internal_write_to_stream_t)(val_t p0, val_t p1);
#endif
