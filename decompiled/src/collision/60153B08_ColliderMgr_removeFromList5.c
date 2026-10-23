/* ColliderMgr_removeFromList5
 * address: 0x60153B08   size: 196   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall ColliderMgr_removeFromList5(ColliderMgr *a1, ColliderBase *a2)
{
  ColliderListNode *next; // r0
  ColliderListNode *v5; // r1
  ColliderListNode *v6; // r1
  int v7; // r0
  ColliderList *v8; // r4
  int vtable; // t1
  ColliderListNode *result; // r0
  int v11; // t1

  next = FIELD_U32(a2, 0x10)[6].next;
  v5 = &FIELD_U32(a2, 0x10)[6];
  if ( next || FIELD_U32(a2, 0x10)[6].prev || (result = FIELD_U32(a1, 0x10)[5].first, result == v5) )
  {
    (*(void (__fastcall **)(ColliderList *, ColliderListNode *))(FIELD_U32(a1, 0x10)[5].vtable + 4))(&FIELD_U32(a1, 0x10)[5], v5);
    if ( (FIELD_U32(a2, 0x134) & 0xF) != 0 )
    {
      v6 = &FIELD_U32(a2, 0x10)[1];
      if ( !FIELD_U32(a2, 0x10)[1].next && !FIELD_U32(a2, 0x10)[1].prev )
      {
        result = FIELD_U32(a1, 0x10)[1].first;
        if ( result != v6 )
          return result;
      }
      vtable = FIELD_U32(a1, 0x10)[1].vtable;
      v8 = &FIELD_U32(a1, 0x10)[1];
      v7 = vtable;
      return (*(ColliderListNode *(__fastcall **)(ColliderList *, ColliderListNode *))(v7 + 4))(v8, v6);
    }
    v6 = &FIELD_U32(a2, 0x10)[2];
    if ( FIELD_U32(a2, 0x10)[2].next || FIELD_U32(a2, 0x10)[2].prev || (result = FIELD_U32(a1, 0x10)[2].first, result == v6) )
    {
      v11 = FIELD_U32(a1, 0x10)[2].vtable;
      v8 = &FIELD_U32(a1, 0x10)[2];
      v7 = v11;
      return (*(ColliderListNode *(__fastcall **)(ColliderList *, ColliderListNode *))(v7 + 4))(v8, v6);
    }
  }
  return result;
}
