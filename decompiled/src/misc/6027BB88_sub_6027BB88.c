/* sub_6027BB88
 * address: 0x6027BB88   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6027BB88(int a1)
{
  float v2; // r1
  unsigned int v3; // r6
  _BOOL4 result; // r0
  Vec2 a2; // [sp+8h] [bp-20h] BYREF
  int v6; // [sp+10h] [bp-18h]
  int v7; // [sp+14h] [bp-14h] BYREF

  ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(
    &v7,
    0,
    a1 + 108,
    FIELD_U8(a1, 86));
  v2 = FIELD_F32(a1, 108);
  a2.y = FIELD_F32(a1, 112);
  a2.x = v2;
  v3 = v7 - 1;
  v6 = 1170939904;
  if ( (unsigned int)(v7 - 1) > 4 )
  {
    if ( !FIELD_U8(a1, 9322) )
      goto LABEL_12;
  }
  else if ( FIELD_U8(a1, 9322) )
  {
    goto LABEL_12;
  }
  if ( v3 < 2 )
  {
    StageActor__createWaterSplash((StageActor *)a1, &a2, 620, 6, "SE_OBJ_CMN_SPLASH");
  }
  else
  {
    if ( (unsigned int)(v7 - 3) < 2 )
    {
      StageActor__createWaterSplash((StageActor *)a1, &a2, 622, 16, "SE_OBJ_CMN_SPLASH_LAVA");
LABEL_11:
      sub_6040B3B0(dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6546));
      goto LABEL_12;
    }
    if ( v7 == 5 )
    {
      StageActor__createWaterSplash((StageActor *)a1, &a2, 621, 23, "SE_OBJ_CMN_SPLASH_POISON");
      goto LABEL_11;
    }
  }
LABEL_12:
  result = v3 < 5;
  FIELD_U8(a1, 9322) = result;
  return result;
}
