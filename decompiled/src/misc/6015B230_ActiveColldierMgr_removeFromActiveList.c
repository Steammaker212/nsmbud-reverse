/* ActiveColldierMgr_removeFromActiveList
 * address: 0x6015B230   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr *this, ActiveCollider *a2)
{
  ActiveColliderNode *next; // r4
  ActiveColliderNode *prev; // r2
  ActiveColliderNode *p_activeNode; // r12
  ActiveColliderNode **p_next; // r2
  ActiveColliderNode **p_prev; // r2
  ActiveColliderNode *v7; // r3
  ActiveColliderNode *v8; // r2
  ActiveColliderNode *p_node4; // r12
  ActiveColliderNode **p_first; // r2
  ActiveColliderNode **p_last; // r0
  ActiveColliderNode *last; // t1

  next = FIELD_U32(a2, 0x14);
  prev = FIELD_U32(a2, 0x18);
  p_activeNode = &FIELD_U32(a2, 0x10);
  if ( next )
  {
    if ( !prev )
      goto LABEL_3;
LABEL_6:
    p_next = &FIELD_U32(prev, 0x4);
LABEL_7:
    *p_next = next;
    next = FIELD_U32(a2, 0x14);
LABEL_8:
    if ( next )
    {
      p_prev = &FIELD_U32(next, 0x8);
    }
    else
    {
      p_prev = &FIELD_U32(this, 0x18);
      if ( FIELD_U32(this, 0x18) != p_activeNode )
        goto LABEL_12;
    }
    *p_prev = FIELD_U32(a2, 0x18);
LABEL_12:
    FIELD_U32(a2, 0x14) = 0;
    FIELD_U32(a2, 0x18) = 0;
    goto LABEL_13;
  }
  if ( prev )
    goto LABEL_6;
  if ( FIELD_U32(this, 0x14) == p_activeNode
    || (FIELD_U32(a2, 0x90) & 0x800) != 0 && (FIELD_U32(a2, 0x38) || FIELD_U32(a2, 0x3C) || FIELD_U32(this, 0x38) == &FIELD_U32(a2, 0x34)) )
  {
LABEL_3:
    p_next = &FIELD_U32(this, 0x14);
    if ( FIELD_U32(this, 0x14) != p_activeNode )
      goto LABEL_8;
    goto LABEL_7;
  }
LABEL_13:
  v7 = FIELD_U32(a2, 0x38);
  v8 = FIELD_U32(a2, 0x3C);
  p_node4 = &FIELD_U32(a2, 0x34);
  if ( v7 )
  {
    if ( !v8 )
    {
      p_first = &FIELD_U32(this, 0x38);
      if ( FIELD_U32(this, 0x38) != p_node4 )
        goto LABEL_20;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( v8 )
  {
LABEL_18:
    p_first = &FIELD_U32(v8, 0x4);
    goto LABEL_19;
  }
  p_first = &FIELD_U32(this, 0x38);
  if ( FIELD_U32(this, 0x38) == p_node4 )
  {
LABEL_19:
    *p_first = v7;
    v7 = FIELD_U32(a2, 0x38);
    if ( !v7 )
    {
      last = FIELD_U32(this, 0x3C);
      p_last = &FIELD_U32(this, 0x3C);
      if ( last != p_node4 )
        goto LABEL_22;
      goto LABEL_21;
    }
LABEL_20:
    p_last = &FIELD_U32(v7, 0x8);
LABEL_21:
    *p_last = FIELD_U32(a2, 0x3C);
LABEL_22:
    FIELD_U32(a2, 0x38) = 0;
    FIELD_U32(a2, 0x3C) = 0;
    return 0;
  }
  return this;
}
