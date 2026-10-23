/* ActiveColldierMgr_removeFromCreateList
 * address: 0x6015B0E4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall ActiveColldierMgr_removeFromCreateList(ActiveColliderMgr *mgr, ActiveCollider *aCollider)
{
  ActiveColliderNode *next; // r3
  ActiveColliderNode *prev; // r2
  ActiveColliderNode *p_createNode; // r12
  ActiveColliderNode **p_next; // lr
  ActiveColliderNode **p_last; // r0
  ActiveColliderNode *last; // t1

  next = FIELD_U32(aCollider, 0x20);
  prev = FIELD_U32(aCollider, 0x24);
  p_createNode = &FIELD_U32(aCollider, 0x1C);
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
  if ( FIELD_U32(mgr, 0x20) != p_createNode )
    return mgr;
LABEL_9:
  p_next = &FIELD_U32(mgr, 0x20);
  if ( FIELD_U32(mgr, 0x20) != p_createNode )
  {
    if ( next )
      goto LABEL_11;
LABEL_13:
    last = FIELD_U32(mgr, 0x24);
    p_last = &FIELD_U32(mgr, 0x24);
    if ( last != p_createNode )
      goto LABEL_14;
    goto LABEL_12;
  }
LABEL_6:
  *p_next = next;
  next = FIELD_U32(aCollider, 0x20);
  if ( !next )
    goto LABEL_13;
LABEL_11:
  p_last = &FIELD_U32(next, 0x8);
LABEL_12:
  *p_last = FIELD_U32(aCollider, 0x24);
LABEL_14:
  FIELD_U32(aCollider, 0x20) = 0;
  FIELD_U32(aCollider, 0x24) = 0;
  return 0;
}
