/* ColliderMgr_removeRelated2
 * address: 0x60153C00   size: 148   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderMgr *__fastcall ColliderMgr_removeRelated2(ColliderMgr *result, ColliderBase *a2)
{
  ColliderListNode *next; // r3
  ColliderListNode *prev; // r2
  ColliderListNode *v4; // r12
  ColliderListNode **p_next; // lr
  ColliderListNode **p_last; // r0
  ColliderListNode *last; // t1

  next = FIELD_U32(a2, 0x10)[7].next;
  prev = FIELD_U32(a2, 0x10)[7].prev;
  v4 = &FIELD_U32(a2, 0x10)[7];
  if ( next )
  {
    if ( !prev )
      goto LABEL_9;
LABEL_5:
    p_next = &FIELD_U32(prev, 0x4);
    goto LABEL_6;
  }
  if ( prev )
    goto LABEL_5;
  if ( FIELD_U32(result, 0x10)[6].first != v4 )
    return result;
LABEL_9:
  p_next = &FIELD_U32(result, 0x10)[6].first;
  if ( FIELD_U32(result, 0x10)[6].first != v4 )
  {
    if ( next )
      goto LABEL_11;
LABEL_13:
    last = FIELD_U32(result, 0x10)[6].last;
    p_last = &FIELD_U32(result, 0x10)[6].last;
    if ( last != v4 )
      goto LABEL_14;
    goto LABEL_12;
  }
LABEL_6:
  *p_next = next;
  next = FIELD_U32(a2, 0x10)[7].next;
  if ( !next )
    goto LABEL_13;
LABEL_11:
  p_last = &FIELD_U32(next, 0x8);
LABEL_12:
  *p_last = FIELD_U32(a2, 0x10)[7].prev;
LABEL_14:
  FIELD_U32(a2, 0x10)[7].next = 0;
  FIELD_U32(a2, 0x10)[7].prev = 0;
  return 0;
}
