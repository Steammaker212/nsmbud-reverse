/* GoombaBase__splashLava
 * address: 0x6033D71C   size: 212   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000EC4
// 
// Overridden by: None
int __fastcall GoombaBase__splashLava(StageActor *a1, float *r1_0)
{
  float v3; // r0
  float y; // r1
  TileCheck *v5; // r0
  int result; // r0
  Vec2 a2; // [sp+8h] [bp-80h] BYREF
  int v8; // [sp+10h] [bp-78h]
  TileCheck v9; // [sp+18h] [bp-70h] BYREF
  TileCheck_Param v10; // [sp+64h] [bp-24h] BYREF
  Vec2 positionOffset; // [sp+70h] [bp-18h] BYREF
  Vec2 a3; // [sp+78h] [bp-10h] BYREF

  v3 = *r1_0;
  a2.y = r1_0[1];
  a2.x = v3;
  v8 = 1170939904;
  if ( (a1[4].aCollider.field_6C & 1) != 0 )
    return StageActor__createWaterSplash(a1, &a2, 273, 16, "SE_OBJ_CMN_SPLASH_LAVA");
  y = FIELD_F32(a1, 0x70);
  a3.x = FIELD_F32(a1, 0x6C);
  a3.y = y;
  positionOffset.x = a3.x;
  *(_WORD *)&v10.field_0 = 0;
  positionOffset.y = y + -4.0;
  v10.field_2 = FIELD_U8(a1, 0x56);
  v10.field_3 = FIELD_U8(a1, 0x57);
  v10.field_4 = 0;
  v10.field_8 = 0;
  v5 = TileCheck_ctor(&v9, &v10);
  result = TileCheck_check(v5, 0, &a3, &positionOffset, 8);
  if ( result == 1 )
    return StageActor__createWaterSplash(a1, &a2, 273, 16, "SE_OBJ_CMN_SPLASH_LAVA");
  return result;
}
