/* sub_602D82CC
 * address: 0x602D82CC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D82CC(int a1)
{
  float v2; // s0
  float *v3; // r5
  float v4; // s0
  float v5; // r1
  float *v6; // r0
  float v7; // r0
  int result; // r0
  Vec3 v9; // [sp+0h] [bp-20h] BYREF
  int speed[5]; // [sp+Ch] [bp-14h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) == 0 )
    goto LABEL_10;
  FIELD_U32(a1, 124) = 0;
  if ( (FIELD_U8(a1, 2880) & 1) != 0 )
    goto LABEL_10;
  if ( FIELD_U8(a1, 6470) )
  {
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      v3 = (float *)(a1 + 108);
      v4 = FIELD_F32(a1, 112);
      v5 = FIELD_F32(a1, 116);
      v9.x = FIELD_F32(a1, 108);
      v9.y = v4 + 7.0;
      v9.z = v5;
      ((void (__fastcall *)(int *, _DWORD, Vec3 *, _DWORD))checkLiquidCollisions)(
        speed,
        0,
        &v9,
        FIELD_U8(a1, 86));
      if ( speed[0] )
        goto LABEL_10;
      v6 = (float *)(a1 + 112);
    }
    else
    {
      v6 = (float *)(a1 + 112);
      v3 = (float *)(a1 + 108);
    }
    v7 = *v6;
    v9.x = *v3;
    v9.y = v7;
    v9.z = 4500.0;
    EffectData_create(727, &v9, 0, 0);
  }
  else
  {
    FIELD_U8(a1, 6470) = 1;
  }
LABEL_10:
  LODWORD(v9.x) = (unsigned __int8)byte_60AFE3F4[FIELD_U32(a1, 80)] << 29;
  speed[0] = 0x4000000;
  result = moveValueTo((int *)(a1 + 160), (int *)&v9, speed);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91C88);
  return result;
}
