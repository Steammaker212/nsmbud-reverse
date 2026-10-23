/* ColliderMgr_removeRelated1
 * address: 0x601536E8   size: 264   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall ColliderMgr_removeRelated1(ColliderMgr *this, ColliderBase *a2)
{
  ColliderListNode *next; // r0
  ColliderListNode *nodes; // r1
  ColliderListNode *v6; // r1
  int v7; // r0
  ColliderList *v8; // r4
  int vtable; // t1
  ColliderListNode *result; // r0
  int v11; // t1
  int v12; // t1

  next = FIELD_U32(a2, 0x10)[0].next;
  nodes = FIELD_U32(a2, 0x10);
  if ( next || FIELD_U32(a2, 0x10)[0].prev || (result = FIELD_U32(this, 0x10)[0].first, result == nodes) )
  {
    (*(void (__fastcall **)(ColliderList *, ColliderListNode *))(FIELD_U32(this, 0x10)[0].vtable + 4))(FIELD_U32(this, 0x10), nodes);
    if ( (FIELD_U32(a2, 0x134) & 0xF) != 0 )
    {
      v6 = &FIELD_U32(a2, 0x10)[1];
      if ( !FIELD_U32(a2, 0x10)[1].next && !FIELD_U32(a2, 0x10)[1].prev )
      {
        result = FIELD_U32(this, 0x10)[1].first;
        if ( result != v6 )
          return result;
      }
      vtable = FIELD_U32(this, 0x10)[1].vtable;
      v8 = &FIELD_U32(this, 0x10)[1];
      v7 = vtable;
      return (*(ColliderListNode *(__fastcall **)(ColliderList *, ColliderListNode *))(v7 + 4))(v8, v6);
    }
    if ( (unsigned int)(unsigned __int16)FIELD_U32(a2, 0x130) - 2 > 2 )
    {
      v6 = &FIELD_U32(a2, 0x10)[2];
      if ( FIELD_U32(a2, 0x10)[2].next || FIELD_U32(a2, 0x10)[2].prev || (result = FIELD_U32(this, 0x10)[2].first, result == v6) )
      {
        v12 = FIELD_U32(this, 0x10)[2].vtable;
        v8 = &FIELD_U32(this, 0x10)[2];
        v7 = v12;
        return (*(ColliderListNode *(__fastcall **)(ColliderList *, ColliderListNode *))(v7 + 4))(v8, v6);
      }
    }
    else
    {
      v6 = &FIELD_U32(a2, 0x10)[4];
      if ( FIELD_U32(a2, 0x10)[4].next || FIELD_U32(a2, 0x10)[4].prev || (result = FIELD_U32(this, 0x10)[3].first, result == v6) )
      {
        v11 = FIELD_U32(this, 0x10)[3].vtable;
        v8 = &FIELD_U32(this, 0x10)[3];
        v7 = v11;
        return (*(ColliderListNode *(__fastcall **)(ColliderList *, ColliderListNode *))(v7 + 4))(v8, v6);
      }
    }
  }
  return result;
}
