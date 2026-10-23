/* ColliderMgr_removeFromList4
 * address: 0x60153AD0   size: 56   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderMgr *__fastcall ColliderMgr_removeFromList4(ColliderMgr *result, ColliderBase *a2)
{
  ColliderListNode *next; // r3
  ColliderListNode *v4; // r1

  next = FIELD_U32(a2, 0x10)[5].next;
  v4 = &FIELD_U32(a2, 0x10)[5];
  if ( next || FIELD_U32(a2, 0x10)[5].prev || FIELD_U32(result, 0x10)[4].first == v4 )
    return (*(ColliderMgr *(__fastcall **)(ColliderList *, ColliderListNode *))(FIELD_U32(result, 0x10)[4].vtable + 4))(
             &FIELD_U32(result, 0x10)[4],
             v4);
  return result;
}
