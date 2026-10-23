/* sub_602F56AC
 * address: 0x602F56AC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F56AC(int a1)
{
  float v2; // s16
  float v3; // s0
  int v4; // r0
  int result; // r0
  int v6; // r0
  int v7; // [sp+8h] [bp-20h] BYREF
  Vec3 speed[2]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = FIELD_F32(a1, 124);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  speed[0].x = FIELD_F32(a1, 6364);
  speed[0].y = FIELD_F32(a1, 6368);
  speed[0].z = 4500.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 6460), 282, speed, 0, 0);
  v3 = FIELD_F32(a1, 124);
  if ( v3 > 0.0 && (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
  {
    FIELD_U32(a1, 100) = -1103101952;
    v3 = v3 * (float)(FIELD_F32(a1, 120) * -0.5);
    FIELD_F32(a1, 124) = v3;
  }
  if ( v2 > 0.0 && v3 <= 0.0 )
    FIELD_U32(a1, 100) = -1103101952;
  if ( v3 < 0.0 )
  {
    v4 = FIELD_U32(a1, 80);
    speed[0].x = 2.4074e-35;
    moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v4], (int *)speed);
    speed[0].x = 0.0;
    v7 = 0x2000000;
    moveValueTo((int *)(a1 + 156), (int *)speed, &v7);
  }
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v6 = FIELD_U32(a1, 6312);
    FIELD_U32(v6, 20) = 1114636288;
    FIELD_U32(v6, 28) |= 2u;
    Animation_update(FIELD_U32(a1, 6312));
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C928B0);
  }
  return result;
}
