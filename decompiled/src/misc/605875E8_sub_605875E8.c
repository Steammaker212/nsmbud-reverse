/* sub_605875E8
 * address: 0x605875E8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderNode *__fastcall sub_605875E8(StateActor *a1)
{
  ActiveColliderNode *result; // r0
  ActiveCollider *v3; // r1
  ActiveCollider *owner; // t1
  ActiveCollider *v5; // r1
  unsigned int v6; // r0
  StateActor *next; // r1
  int v8; // r2
  int v9; // r5
  unsigned int v10; // r6
  int a2; // [sp+0h] [bp-28h]
  Actor *child; // [sp+4h] [bp-24h]
  Actor *v13; // [sp+8h] [bp-20h]

  owner = a1[1]._._.aCollider.node3.owner;
  result = &a1[1]._._.aCollider.node3;
  v3 = owner;
  if ( !owner || (v5 = (ActiveCollider *)((char *)v3 - 1), (FIELD_U32(result, 0x0) = v5) == 0) )
  {
    v6 = 0;
    v13 = 0;
    child = 0;
    a2 = 0;
    next = (StateActor *)FIELD_U32(a1, 0x24);
    if ( next != (StateActor *)&FIELD_U32(a1, 0x20) )
    {
      v8 = FIELD_U32(a1, 0x2C);
      v9 = (int)next - v8;
      do
      {
        v10 = 0;
        if ( v6 < 3 )
          v10 = v6;
        ++v6;
        *(&a2 + v10) = v9;
        next = (StateActor *)FIELD_U32(next, 0x4);
        v9 = (int)next - v8;
      }
      while ( (char *)next - v8 != (char *)&FIELD_U32(a1, 0x20) - v8 );
      if ( a2 )
        Actor__removeChild(&FIELD_U32(a1, 0x0), (Actor *)a2);
    }
    if ( child )
      Actor__removeChild(&FIELD_U32(a1, 0x0), child);
    if ( v13 )
      Actor__removeChild(&FIELD_U32(a1, 0x0), v13);
    return (ActiveColliderNode *)StageActor__delete(a1, 1);
  }
  return result;
}
