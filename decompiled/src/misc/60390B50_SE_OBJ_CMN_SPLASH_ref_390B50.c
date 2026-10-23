/* SE_OBJ_CMN_SPLASH_ref_390B50
 * address: 0x60390B50   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_OBJ_CMN_SPLASH_ref_390B50(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int v6; // r1
  int v7; // r2
  char *v8; // r5
  char v9; // r6
  Vec2 a2; // [sp+8h] [bp-30h] BYREF
  int v12; // [sp+10h] [bp-28h]
  int v13; // [sp+14h] [bp-24h] BYREF
  _DWORD v14[3]; // [sp+18h] [bp-20h] BYREF
  float v15; // [sp+24h] [bp-14h] BYREF

  if ( FIELD_U8(a1, 6054) )
  {
    v2 = *(_DWORD **)(a1 + 6300);
    v3 = v2[3];
    v4 = v2[2];
    v5 = v2[17];
    if ( v4 > v5 )
      v3 += 4 * v5;
    *(_DWORD *)(*(_DWORD *)v3 + 24) = 1045220557;
  }
  v6 = FIELD_U32(a1, 112);
  v7 = FIELD_U32(a1, 116);
  v14[0] = FIELD_U32(a1, 108);
  v14[1] = v6;
  v14[2] = v7;
  ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
    &v13,
    &v15,
    v14,
    FIELD_U8(a1, 86));
  v8 = (char *)(a1 + 6353);
  if ( v13 )
  {
    v9 = 1;
    if ( !*v8 )
    {
      a2.x = FIELD_F32(a1, 6328);
      a2.y = v15;
      v12 = 1166843904;
      StageActor__createWaterSplash((StageActor *)a1, &a2, 877, 6, "SE_OBJ_CMN_SPLASH");
    }
  }
  else
  {
    v9 = 0;
  }
  *v8 = v9;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  return Enemy__executeState_DieFall((CollisionActor *)a1);
}
