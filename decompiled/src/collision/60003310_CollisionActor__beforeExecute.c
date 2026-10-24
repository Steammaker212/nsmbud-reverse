/* CollisionActor__beforeExecute
 * address: 0x60003310   size: 260   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x600006C4
// 
// Overridden by:
//   - 0x602A1BC8 : Enemy
signed int __fastcall CollisionActor__beforeExecute(StageActor *a1)
{
  int v2; // r5
  _DWORD *p_owner; // r0
  _DWORD *p_next; // r2
  int v5; // r5
  int v6; // r0
  int vtable; // r0
  int v8; // r1

  v2 = 0;
  if ( StageActor__beforeExecute(a1) == 1 )
  {
    CollisionMgr_vf18(&FIELD_U32(a1 + (1) * 644, 0x4));
    BYTE1(a1[9].aCollider.field_44) = 0;
    p_owner = &a1[9].aCollider.node3.owner;
    a1[9].aCollider.node3.prev = (ActiveColliderNode *)a1[9].aCollider.node3.owner;
    p_next = &a1[9].aCollider.node3.next;
    a1[9].aCollider.node4.owner = (ActiveCollider *)a1[9].aCollider.node3.next;
    v5 = *(_DWORD *)&a1[4].aCollider.field_6C;
    if ( (v5 & 1) != 0 )
    {
      if ( (v5 & 0x10100) != 0 )
        BYTE1(a1[9].aCollider.field_44) = 1;
      *p_owner = FIELD_U32(a1 + (4) * 644, 0x188);
      *p_next = FIELD_U32(a1 + (4) * 644, 0x18C);
    }
    else
    {
      *p_owner = 0;
      *p_next = 0;
    }
    v2 = 1;
    if ( !FIELD_U8(a1, 0x218) && (*(int (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 156))(a1) == 1 )
    {
      v6 = FIELD_U32(AreaRumbleMgr_instance, 56);
      if ( (v6 & 2) != 0 )
      {
        vtable = FIELD_U32(a1, 0x0);
        v8 = 0;
        goto LABEL_13;
      }
      if ( (v6 & 4) != 0 )
      {
        vtable = FIELD_U32(a1, 0x0);
        v2 = 1;
        v8 = 1;
LABEL_13:
        (*(void (__fastcall **)(StageActor *, int))(vtable + 160))(a1, v8);
      }
    }
  }
  return v2;
}
