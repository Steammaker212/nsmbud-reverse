/* ActiveColliderMgr_remove
 * address: 0x6015B37C   size: 116   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgrList *__fastcall ActiveColliderMgr_remove(ActiveColliderMgrList *this, ActiveColliderNode *node)
{
  ActiveColliderNode *prev; // r2
  ActiveColliderNode **prevNextPtr; // r12
  ActiveColliderNode **p_next; // r3
  ActiveColliderNode **p_prev; // r0
  ActiveColliderNode *last; // t1

  if ( node )
  {
    prev = FIELD_U32(node, 0x8);
    if ( prev )
    {
      prevNextPtr = &FIELD_U32(prev, 0x4);
    }
    else
    {
      prevNextPtr = &FIELD_U32(this, 0x4);
      if ( FIELD_U32(this, 0x4) != node )
      {
        p_next = &FIELD_U32(node, 0x4);
LABEL_7:
        if ( *p_next )
        {
          p_prev = &(*p_next)->prev;
        }
        else
        {
          last = FIELD_U32(this, 0x8);
          p_prev = &FIELD_U32(this, 0x8);
          if ( last != node )
            goto LABEL_11;
        }
        *p_prev = FIELD_U32(node, 0x8);
LABEL_11:
        FIELD_U32(node, 0x4) = 0;
        FIELD_U32(node, 0x8) = 0;
        return 0;
      }
    }
    p_next = &FIELD_U32(node, 0x4);
    *prevNextPtr = FIELD_U32(node, 0x4);
    goto LABEL_7;
  }
  return this;
}
