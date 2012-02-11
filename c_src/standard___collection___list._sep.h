/* This C header file is generated by NIT to compile modules and programs that requires ./../lib/standard/collection/list. */
#ifndef standard___collection___list_sep
#define standard___collection___list_sep
#include "standard___collection___abstract_collection._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_standard___collection___list___List[];

extern const classtable_elt_t VFT_standard___collection___list___ListIterator[];

extern const classtable_elt_t VFT_standard___collection___list___ListNode[];
extern const char *LOCATE_standard___collection___list;
extern const int SFT_standard___collection___list[];
#define ID_standard___collection___list___List (SFT_standard___collection___list[0])
#define COLOR_standard___collection___list___List (SFT_standard___collection___list[1])
#define ATTR_standard___collection___list___List____head(recv) ATTR(recv, (SFT_standard___collection___list[2] + 0))
#define ATTR_standard___collection___list___List____tail(recv) ATTR(recv, (SFT_standard___collection___list[2] + 1))
#define INIT_TABLE_POS_standard___collection___list___List (SFT_standard___collection___list[3] + 0)
#define CALL_standard___collection___list___List___link(recv) ((standard___collection___list___List___link_t)CALL((recv), (SFT_standard___collection___list[3] + 1)))
#define CALL_standard___collection___list___List___init(recv) ((standard___collection___list___List___init_t)CALL((recv), (SFT_standard___collection___list[3] + 2)))
#define CALL_standard___collection___list___List___from(recv) ((standard___collection___list___List___from_t)CALL((recv), (SFT_standard___collection___list[3] + 3)))
#define CALL_standard___collection___list___List___get_node(recv) ((standard___collection___list___List___get_node_t)CALL((recv), (SFT_standard___collection___list[3] + 4)))
#define CALL_standard___collection___list___List___search_node_after(recv) ((standard___collection___list___List___search_node_after_t)CALL((recv), (SFT_standard___collection___list[3] + 5)))
#define CALL_standard___collection___list___List___remove_node(recv) ((standard___collection___list___List___remove_node_t)CALL((recv), (SFT_standard___collection___list[3] + 6)))
#define CALL_standard___collection___list___List___insert_before(recv) ((standard___collection___list___List___insert_before_t)CALL((recv), (SFT_standard___collection___list[3] + 7)))
#define ID_standard___collection___list___ListIterator (SFT_standard___collection___list[4])
#define COLOR_standard___collection___list___ListIterator (SFT_standard___collection___list[5])
#define ATTR_standard___collection___list___ListIterator____list(recv) ATTR(recv, (SFT_standard___collection___list[6] + 0))
#define ATTR_standard___collection___list___ListIterator____node(recv) ATTR(recv, (SFT_standard___collection___list[6] + 1))
#define ATTR_standard___collection___list___ListIterator____index(recv) ATTR(recv, (SFT_standard___collection___list[6] + 2))
#define INIT_TABLE_POS_standard___collection___list___ListIterator (SFT_standard___collection___list[7] + 0)
#define CALL_standard___collection___list___ListIterator___item__eq(recv) ((standard___collection___list___ListIterator___item__eq_t)CALL((recv), (SFT_standard___collection___list[7] + 1)))
#define CALL_standard___collection___list___ListIterator___init(recv) ((standard___collection___list___ListIterator___init_t)CALL((recv), (SFT_standard___collection___list[7] + 2)))
#define CALL_standard___collection___list___ListIterator___delete(recv) ((standard___collection___list___ListIterator___delete_t)CALL((recv), (SFT_standard___collection___list[7] + 3)))
#define CALL_standard___collection___list___ListIterator___insert_before(recv) ((standard___collection___list___ListIterator___insert_before_t)CALL((recv), (SFT_standard___collection___list[7] + 4)))
#define ID_standard___collection___list___ListNode (SFT_standard___collection___list[8])
#define COLOR_standard___collection___list___ListNode (SFT_standard___collection___list[9])
#define ATTR_standard___collection___list___ListNode____next(recv) ATTR(recv, (SFT_standard___collection___list[10] + 0))
#define ATTR_standard___collection___list___ListNode____prev(recv) ATTR(recv, (SFT_standard___collection___list[10] + 1))
#define INIT_TABLE_POS_standard___collection___list___ListNode (SFT_standard___collection___list[11] + 0)
#define CALL_standard___collection___list___ListNode___init(recv) ((standard___collection___list___ListNode___init_t)CALL((recv), (SFT_standard___collection___list[11] + 1)))
#define CALL_standard___collection___list___ListNode___next(recv) ((standard___collection___list___ListNode___next_t)CALL((recv), (SFT_standard___collection___list[11] + 2)))
#define CALL_standard___collection___list___ListNode___next__eq(recv) ((standard___collection___list___ListNode___next__eq_t)CALL((recv), (SFT_standard___collection___list[11] + 3)))
#define CALL_standard___collection___list___ListNode___prev(recv) ((standard___collection___list___ListNode___prev_t)CALL((recv), (SFT_standard___collection___list[11] + 4)))
#define CALL_standard___collection___list___ListNode___prev__eq(recv) ((standard___collection___list___ListNode___prev__eq_t)CALL((recv), (SFT_standard___collection___list[11] + 5)))
static const char * const LOCATE_standard___collection___list___List_____bra = "list::List::(abstract_collection::MapRead::[])";
val_t standard___collection___list___List_____bra(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List_____bra_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List_____braeq = "list::List::(abstract_collection::Map::[]=)";
void standard___collection___list___List_____braeq(val_t p0, val_t p1, val_t p2);
typedef void (*standard___collection___list___List_____braeq_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___collection___list___List___first = "list::List::(abstract_collection::Collection::first)";
val_t standard___collection___list___List___first(val_t p0);
typedef val_t (*standard___collection___list___List___first_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___List___first__eq = "list::List::(abstract_collection::Sequence::first=)";
void standard___collection___list___List___first__eq(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___first__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___last = "list::List::(abstract_collection::SequenceRead::last)";
val_t standard___collection___list___List___last(val_t p0);
typedef val_t (*standard___collection___list___List___last_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___List___last__eq = "list::List::(abstract_collection::Sequence::last=)";
void standard___collection___list___List___last__eq(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___last__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___is_empty = "list::List::(abstract_collection::Collection::is_empty)";
val_t standard___collection___list___List___is_empty(val_t p0);
typedef val_t (*standard___collection___list___List___is_empty_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___List___length = "list::List::(abstract_collection::Collection::length)";
val_t standard___collection___list___List___length(val_t p0);
typedef val_t (*standard___collection___list___List___length_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___List___has = "list::List::(abstract_collection::Collection::has)";
val_t standard___collection___list___List___has(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List___has_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___has_only = "list::List::(abstract_collection::Collection::has_only)";
val_t standard___collection___list___List___has_only(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List___has_only_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___count = "list::List::(abstract_collection::Collection::count)";
val_t standard___collection___list___List___count(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List___count_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___has_key = "list::List::(abstract_collection::MapRead::has_key)";
val_t standard___collection___list___List___has_key(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List___has_key_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___push = "list::List::(abstract_collection::Sequence::push)";
void standard___collection___list___List___push(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___push_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___unshift = "list::List::(abstract_collection::Sequence::unshift)";
void standard___collection___list___List___unshift(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___unshift_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___link = "list::List::link";
void standard___collection___list___List___link(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___link_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___pop = "list::List::(abstract_collection::Sequence::pop)";
val_t standard___collection___list___List___pop(val_t p0);
typedef val_t (*standard___collection___list___List___pop_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___List___shift = "list::List::(abstract_collection::Sequence::shift)";
val_t standard___collection___list___List___shift(val_t p0);
typedef val_t (*standard___collection___list___List___shift_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___List___remove = "list::List::(abstract_collection::RemovableCollection::remove)";
void standard___collection___list___List___remove(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___remove_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___remove_at = "list::List::(abstract_collection::Map::remove_at)";
void standard___collection___list___List___remove_at(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___remove_at_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___clear = "list::List::(abstract_collection::RemovableCollection::clear)";
void standard___collection___list___List___clear(val_t p0);
typedef void (*standard___collection___list___List___clear_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___List___iterator = "list::List::(abstract_collection::Collection::iterator)";
val_t standard___collection___list___List___iterator(val_t p0);
typedef val_t (*standard___collection___list___List___iterator_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___List___init = "list::List::init";
void standard___collection___list___List___init(val_t p0, int* init_table);
typedef void (*standard___collection___list___List___init_t)(val_t p0, int* init_table);
val_t NEW_List_standard___collection___list___List___init();
static const char * const LOCATE_standard___collection___list___List___from = "list::List::from";
void standard___collection___list___List___from(val_t p0, val_t p1, int* init_table);
typedef void (*standard___collection___list___List___from_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_List_standard___collection___list___List___from(val_t p0);
static const char * const LOCATE_standard___collection___list___List___get_node = "list::List::get_node";
val_t standard___collection___list___List___get_node(val_t p0, val_t p1);
typedef val_t (*standard___collection___list___List___get_node_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___search_node_after = "list::List::search_node_after";
val_t standard___collection___list___List___search_node_after(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___collection___list___List___search_node_after_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___collection___list___List___remove_node = "list::List::remove_node";
void standard___collection___list___List___remove_node(val_t p0, val_t p1);
typedef void (*standard___collection___list___List___remove_node_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___List___insert_before = "list::List::insert_before";
void standard___collection___list___List___insert_before(val_t p0, val_t p1, val_t p2);
typedef void (*standard___collection___list___List___insert_before_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___collection___list___ListIterator___item = "list::ListIterator::(abstract_collection::Iterator::item)";
val_t standard___collection___list___ListIterator___item(val_t p0);
typedef val_t (*standard___collection___list___ListIterator___item_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___ListIterator___item__eq = "list::ListIterator::item=";
void standard___collection___list___ListIterator___item__eq(val_t p0, val_t p1);
typedef void (*standard___collection___list___ListIterator___item__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___ListIterator___is_ok = "list::ListIterator::(abstract_collection::Iterator::is_ok)";
val_t standard___collection___list___ListIterator___is_ok(val_t p0);
typedef val_t (*standard___collection___list___ListIterator___is_ok_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___ListIterator___next = "list::ListIterator::(abstract_collection::Iterator::next)";
void standard___collection___list___ListIterator___next(val_t p0);
typedef void (*standard___collection___list___ListIterator___next_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___ListIterator___init = "list::ListIterator::init";
void standard___collection___list___ListIterator___init(val_t p0, val_t p1, int* init_table);
typedef void (*standard___collection___list___ListIterator___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_ListIterator_standard___collection___list___ListIterator___init(val_t p0);
static const char * const LOCATE_standard___collection___list___ListIterator___index = "list::ListIterator::(abstract_collection::IndexedIterator::index)";
val_t standard___collection___list___ListIterator___index(val_t p0);
typedef val_t (*standard___collection___list___ListIterator___index_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___ListIterator___delete = "list::ListIterator::delete";
void standard___collection___list___ListIterator___delete(val_t p0);
typedef void (*standard___collection___list___ListIterator___delete_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___ListIterator___insert_before = "list::ListIterator::insert_before";
void standard___collection___list___ListIterator___insert_before(val_t p0, val_t p1);
typedef void (*standard___collection___list___ListIterator___insert_before_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___ListNode___init = "list::ListNode::init";
void standard___collection___list___ListNode___init(val_t p0, val_t p1, int* init_table);
typedef void (*standard___collection___list___ListNode___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_ListNode_standard___collection___list___ListNode___init(val_t p0);
static const char * const LOCATE_standard___collection___list___ListNode___next = "list::ListNode::next";
val_t standard___collection___list___ListNode___next(val_t p0);
typedef val_t (*standard___collection___list___ListNode___next_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___ListNode___next__eq = "list::ListNode::next=";
void standard___collection___list___ListNode___next__eq(val_t p0, val_t p1);
typedef void (*standard___collection___list___ListNode___next__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___collection___list___ListNode___prev = "list::ListNode::prev";
val_t standard___collection___list___ListNode___prev(val_t p0);
typedef val_t (*standard___collection___list___ListNode___prev_t)(val_t p0);
static const char * const LOCATE_standard___collection___list___ListNode___prev__eq = "list::ListNode::prev=";
void standard___collection___list___ListNode___prev__eq(val_t p0, val_t p1);
typedef void (*standard___collection___list___ListNode___prev__eq_t)(val_t p0, val_t p1);
#endif
