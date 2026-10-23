/* SE_EMY_CRASHER_PUNCH_ref
 * address: 0x602871DC   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_CRASHER_PUNCH_ref(int a1)
{
  int v2; // r5
  float32x2_t v3; // d2
  float32x2_t v4; // d0
  unsigned __int32 v5; // s0
  _DWORD *v6; // r0
  int v7; // r5
  int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int result; // r0
  bool v16; // zf
  float v17; // r1
  int v18; // r5
  Vec2 v19; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 80);
  if ( v2 != StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) && !FIELD_U8(a1, 6607) )
  {
    FIELD_U8(a1, 6607) = 1;
    FIELD_U32(a1, 80) ^= 1u;
    FIELD_U32(a1, 120) = 0;
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_602890D0(a1);
  sub_602892A4(a1);
  v3.n64_u32[0] = 1.0;
  v4.n64_f32[0] = FIELD_F32(a1, 6564) + 0.125;
  v5 = vmin_f32(v4, v3).n64_u32[0];
  FIELD_U32(a1, 6564) = v5;
  v7 = a1 + 6300;
  v6 = *(_DWORD **)(a1 + 6300);
  v8 = v6[3];
  v9 = v6[2];
  v10 = v6[17];
  if ( v9 > v10 )
    v8 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = v5;
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v11 = FIELD_U32(a1, 2872);
  if ( (v11 & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F24C);
    v11 = FIELD_U32(a1, 2872);
  }
  if ( (v11 & 0x10400) == 0x400 )
    FIELD_U32(a1, 124) = -1073741824;
  v12 = FIELD_U32(a1, 80);
  position.x = 1.5046e-36;
  if ( moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v12], (int *)&position) )
  {
    FIELD_U8(a1, 6607) = 0;
    FIELD_F32(a1, 120) = flt_60AF1EA0[FIELD_U32(a1, 80)];
  }
  v13 = *(_DWORD *)(*(_DWORD *)v7 + 12);
  v14 = *(_DWORD *)(*(_DWORD *)v7 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 8) > v14 )
    v13 += 4 * v14;
  result = (int)*(float *)(*(_DWORD *)v13 + 20);
  v16 = result == 12;
  if ( result != 12 )
    v16 = result == 0;
  if ( v16 )
  {
    v17 = FIELD_F32(a1, 112);
    v18 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v17;
    mapPositionToScreen(&v19, &position);
    return BasicSoundActor1_playSound(v18, "SE_EMY_CRASHER_PUNCH", (int)&v19, 0);
  }
  return result;
}
