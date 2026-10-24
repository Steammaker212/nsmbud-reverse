/* SwingingCollider_execute
 * address: 0x60165CC4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SwingingCollider_execute(ColliderBase *a1)
{
  int v2; // r0
  int owner; // r0
  int next; // r0
  int result; // r0

  sub_601603E8(a1);
  sub_601656B0((int)a1);
  (*(void (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 52))(a1);
  SwingingCollider_execute_helper(a1);
  (*(void (__fastcall **)(ColliderBase *))(FIELD_U32(a1 + (1) * 340, 0x0) + 16))(a1 + 1);
  v2 = FIELD_U32(a1 + (1) * 340, 0xC);
  if ( v2 >= 1 )
    FIELD_U32(a1 + (1) * 340, 0xC) = v2 - 1;
  owner = (int)FIELD_U32(a1 + (1) * 340, 0x10)[0].owner;
  if ( owner >= 1 )
    FIELD_U32(a1 + (1) * 340, 0x10)[0].owner = (ColliderBase *)(owner - 1);
  next = (int)FIELD_U32(a1 + (1) * 340, 0x10)[0].next;
  if ( next >= 1 )
    FIELD_U32(a1 + (1) * 340, 0x10)[0].next = (ColliderListNode *)(next - 1);
  result = (int)FIELD_U32(a1 + (1) * 340, 0x10)[0].prev;
  if ( result >= 1 )
    FIELD_U32(a1 + (1) * 340, 0x10)[0].prev = (ColliderListNode *)--result;
  return result;
}
