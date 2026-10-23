/* ColliderMgr_removeFromList1
 * address: 0x601537F0   size: 56   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ColliderMgr_removeFromList1(ColliderMgr *this, ColliderBase *collider)
{
  ColliderListNode *next; // r3
  ColliderListNode *v4; // r1

  next = FIELD_U32(collider, 0x10)[1].next;
  v4 = &FIELD_U32(collider, 0x10)[1];
  if ( next || FIELD_U32(collider, 0x10)[1].prev || FIELD_U32(this, 0x10)[1].first == v4 )
    (*(void (__fastcall **)(ColliderList *, ColliderListNode *))(FIELD_U32(this, 0x10)[1].vtable + 4))(&FIELD_U32(this, 0x10)[1], v4);// List__remove
}
