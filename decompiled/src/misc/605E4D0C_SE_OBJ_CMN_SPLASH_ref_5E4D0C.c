/* SE_OBJ_CMN_SPLASH_ref_5E4D0C
 * address: 0x605E4D0C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_5E4D0C(int result, int r1_0)
{
  float v2; // r1
  int v3; // r1
  float v4; // r1
  _DWORD v5[3]; // [sp+8h] [bp-20h] BYREF
  Vec3 a2; // [sp+14h] [bp-14h] BYREF

  if ( r1_0 == 1 )
  {
    if ( FIELD_U8(result, 6892) )
    {
      v2 = FIELD_F32(result, 6900);
      a2.x = FIELD_F32(result, 6896);
      a2.y = v2;
      a2.z = 6500.0;
      v3 = FIELD_U32(result, 6904);
      v5[0] = 0;
      v5[1] = 0;
      v5[2] = v3;
      sub_605D8938(result, "SE_OBJ_CMN_SPLASH", 0);
      return EffectData_create(1106, &a2, (int)v5, 0);
    }
  }
  else
  {
    v4 = FIELD_F32(result, 6852);
    a2.x = FIELD_F32(result, 108);
    a2.y = v4;
    a2.z = 6500.0;
    return StageActor__createWaterSplash((StageActor *)result, (Vec2 *)&a2, 437, 6, "SE_OBJ_CMN_SPLASH");
  }
  return result;
}
