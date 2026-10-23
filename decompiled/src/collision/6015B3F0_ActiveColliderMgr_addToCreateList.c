/* ActiveColliderMgr_addToCreateList
 * address: 0x6015B3F0   size: 100   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall ActiveColliderMgr_addToCreateList(ActiveColliderMgr *this, ActiveCollider *aCollider)
{
  ActiveColliderNode *pCreateNode; // r2
  ActiveColliderNode *last; // r3

  if ( !FIELD_U32(aCollider, 0x1C).next && !FIELD_U32(aCollider, 0x1C).prev )
  {
    pCreateNode = &FIELD_U32(aCollider, 0x1C);
    if ( FIELD_U32(this, 0x1C).first != &FIELD_U32(aCollider, 0x1C) )
    {
      last = FIELD_U32(this, 0x1C).last;
      if ( last )
      {
        FIELD_U32(last, 0x4) = pCreateNode;
        FIELD_U32(aCollider, 0x1C).prev = FIELD_U32(this, 0x1C).last;
      }
      else
      {
        FIELD_U32(this, 0x1C).first = pCreateNode;
      }
      FIELD_U32(this, 0x1C).last = pCreateNode;
      FIELD_U8(aCollider, 0x6E) &= ~2u;
      return (ActiveColliderMgr *)ActiveCollider_reset(aCollider);
    }
  }
  return this;
}
