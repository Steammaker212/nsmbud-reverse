/* SE_OBJ_CMN_SPLASH_ref_39092C
 * address: 0x6039092C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_OBJ_CMN_SPLASH_ref_39092C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float v6; // s18
  int v7; // r1
  int v8; // r2
  char *v9; // r6
  char v10; // r7
  Vec2 a2; // [sp+8h] [bp-48h] BYREF
  int v13; // [sp+10h] [bp-40h]
  int v14; // [sp+14h] [bp-3Ch] BYREF
  _DWORD v15[3]; // [sp+18h] [bp-38h] BYREF
  float v16; // [sp+24h] [bp-2Ch] BYREF

  if ( FIELD_U8(a1, 6054) )
  {
    v2 = *(_DWORD **)(a1 + 6300);
    v3 = v2[3];
    v4 = v2[2];
    v5 = v2[17];
    v6 = 2147500000.0 * 4.2188;
    if ( v4 > v5 )
      v3 += 4 * v5;
    *(_DWORD *)(*(_DWORD *)v3 + 24) = 1045220557;
  }
  else
  {
    v6 = 2147500000.0 * 11.25;
  }
  v7 = FIELD_U32(a1, 112);
  v8 = FIELD_U32(a1, 116);
  v15[0] = FIELD_U32(a1, 108);
  v15[1] = v7;
  v15[2] = v8;
  ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD, float))checkLiquidCollisions)(
    &v14,
    &v16,
    v15,
    FIELD_U8(a1, 86),
    2147500000.0);
  v9 = (char *)(a1 + 6353);
  if ( v14 )
  {
    v10 = 1;
    if ( !*v9 )
    {
      a2.x = FIELD_F32(a1, 6328);
      a2.y = v16;
      v13 = 1166843904;
      StageActor__createWaterSplash((StageActor *)a1, &a2, 877, 6, "SE_OBJ_CMN_SPLASH");
    }
  }
  else
  {
    v10 = 0;
  }
  *v9 = v10;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  FIELD_U32(a1, 156) += (int)(float)(v6 / 180.0);
  CollisionActor__handleGravity((CollisionActor *)a1);
  return CollisionActor__handleSpeed((CollisionActor *)a1);
}
