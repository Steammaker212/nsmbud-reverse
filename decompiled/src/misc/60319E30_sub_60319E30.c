/* sub_60319E30
 * address: 0x60319E30   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60319E30(int a1)
{
  float v2; // r0
  float v3; // r1
  int v4; // r2
  int result; // r0
  unsigned int v6; // r1
  int v7; // [sp+4h] [bp-34h] BYREF
  _DWORD v8[4]; // [sp+8h] [bp-30h] BYREF
  Vec2 a2; // [sp+18h] [bp-20h] BYREF
  int v10; // [sp+20h] [bp-18h]

  v2 = FIELD_F32(a1, 108);
  a2.y = FIELD_F32(a1, 112);
  a2.x = v2;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  v8[0] = FIELD_U32(a1, 108);
  v8[2] = v4;
  v10 = 1170939904;
  *(float *)&v8[1] = v3 + -2.0;
  ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
    &v7,
    &a2.y,
    v8,
    FIELD_U8(a1, 86));
  result = v7;
  switch ( v7 )
  {
    case 0:
      FIELD_U8(a1, 6428) = 0;
      result = 6428;
      break;
    case 1:
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) == 0 )
      {
        result = a1 + 6428;
        if ( !FIELD_U8(a1, 6428) )
        {
          *(_BYTE *)result = 1;
          StageActor__createWaterSplash((StageActor *)a1, &a2, 1219, 6, "SE_OBJ_CMN_SPLASH");
          v6 = FIELD_U32(a1, 6408);
          goto LABEL_12;
        }
      }
      break;
    case 3:
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) == 0 )
      {
        result = a1 + 6428;
        if ( !FIELD_U8(a1, 6428) )
        {
          *(_BYTE *)result = 1;
          StageActor__createWaterSplash((StageActor *)a1, &a2, 726, 16, "SE_OBJ_CMN_SPLASH_LAVA");
          v6 = FIELD_U32(a1, 6408);
          goto LABEL_12;
        }
      }
      break;
    case 4:
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) == 0 )
      {
        result = a1 + 6428;
        if ( !FIELD_U8(a1, 6428) )
        {
          *(_BYTE *)result = 1;
          StageActor__createWaterSplash((StageActor *)a1, &a2, 824, 16, "SE_OBJ_CMN_SPLASH_LAVA");
          v6 = FIELD_U32(a1, 6408);
LABEL_12:
          result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
          if ( result )
            FIELD_U8(result, 7670) = 1;
        }
      }
      break;
    default:
      return result;
  }
  return result;
}
