/* sub_60307690
 * address: 0x60307690   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60307690(StateActor *a1)
{
  unsigned int v2; // r0
  int result; // r0
  float x; // s16
  float y; // s18
  float v6; // s0
  float v7; // s0
  Vec2 out; // [sp+4h] [bp-24h] BYREF
  signed int v9; // [sp+Ch] [bp-1Ch] BYREF

  if ( a1[1]._._.aCollider.field_124 )
    return sub_60309604(a1);
  v2 = StageActor__distanceToPlayer(a1, &out);
  if ( v2 == -1 )
    v2 = 0;
  if ( v2 >= 4 )
    v2 = 0;
  result = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 48);
  if ( result )
  {
    x = out.x;
    y = out.y;
    StageActor__accelerateX(&FIELD_U32(a1, 0x0)._);
    v6 = FIELD_U32(a1, 0x0)._.position.x + FIELD_U32(a1, 0x0)._.speed.x;
    FIELD_U32(a1, 0x0)._.position.x = v6;
    FIELD_U32(a1, 0x0)._.position.y = FIELD_U32(a1, 0x0)._.position.y + FIELD_U32(a1, 0x0)._.speed.y;
    FIELD_U32(a1, 0x0)._.position.z = FIELD_U32(a1, 0x0)._.position.z + FIELD_U32(a1, 0x0)._.speed.z;
    v7 = v6
       + (float)(FIELD_F32(dword_60CC6484, 116)
               + (float)((float)(FIELD_F32(dword_60CC6484, 56) + FIELD_F32(dword_60CC6484, 64)) * -0.5));
    FIELD_U32(a1, 0x0)._.position.x = v7;
    CollisionMgr_process(FIELD_U32(a1, 0x0).collisionMgr, v7);
    LODWORD(out.x) = sub_6000F7B8(x, -y);
    v9 = 0x2000000;
    sub_6083224C(&FIELD_U32(a1, 0x0)._.rotation.y, (int *)&out, &v9);
    return sub_60309604(a1);
  }
  return result;
}
