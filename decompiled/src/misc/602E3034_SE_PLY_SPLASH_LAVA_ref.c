/* SE_PLY_SPLASH_LAVA_ref
 * address: 0x602E3034   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SE_PLY_SPLASH_LAVA_ref(int a1)
{
  float v2; // s16
  float v3; // s18
  float v4; // s16
  float v5; // s18
  _BOOL4 result; // r0
  Vec2 a2; // [sp+4h] [bp-44h] BYREF
  int v8; // [sp+Ch] [bp-3Ch]
  _BYTE v9[4]; // [sp+10h] [bp-38h] BYREF
  float y; // [sp+14h] [bp-34h] BYREF
  Vec2 v11; // [sp+18h] [bp-30h] BYREF
  int v12; // [sp+20h] [bp-28h]

  v12 = FIELD_U32(a1, 6512);
  v11 = *(Vec2 *)(a1 + 6504);
  y = v11.y;
  ((void (__fastcall *)(_BYTE *, float *, Vec2 *, _DWORD))checkLiquidCollisions)(
    v9,
    &y,
    &v11,
    FIELD_U8(a1, 86));
  v2 = v11.y;
  v3 = y;
  if ( y <= v11.y )
  {
    if ( !FIELD_U8(a1, 15436) )
      goto LABEL_6;
  }
  else if ( FIELD_U8(a1, 15436) )
  {
    goto LABEL_6;
  }
  v12 = 1170939904;
  a2.x = v11.x;
  a2.y = y;
  v8 = 1166843904;
  StageActor__createWaterSplash((StageActor *)a1, &a2, 621, 16, "SE_PLY_SPLASH_LAVA");
  a2 = v11;
  TileMgr_splashRelated(TileMgr_instance, &a2, 6);
LABEL_6:
  FIELD_U8(a1, 15436) = v3 > v2;
  v12 = FIELD_U32(a1, 6524);
  v11 = *(Vec2 *)(a1 + 6516);
  y = v11.y;
  ((void (__fastcall *)(_BYTE *, float *, Vec2 *, _DWORD))checkLiquidCollisions)(
    v9,
    &y,
    &v11,
    FIELD_U8(a1, 86));
  v4 = v11.y;
  v5 = y;
  if ( y <= v11.y )
  {
    if ( FIELD_U8(a1, 15437) )
    {
LABEL_10:
      v12 = 1170939904;
      a2.x = v11.x;
      a2.y = y;
      v8 = 1166843904;
      StageActor__createWaterSplash((StageActor *)a1, &a2, 621, 16, "SE_PLY_SPLASH_LAVA");
      a2 = v11;
      TileMgr_splashRelated(TileMgr_instance, &a2, 6);
    }
  }
  else if ( !FIELD_U8(a1, 15437) )
  {
    goto LABEL_10;
  }
  result = v5 > v4;
  FIELD_U8(a1, 15437) = result;
  return result;
}
