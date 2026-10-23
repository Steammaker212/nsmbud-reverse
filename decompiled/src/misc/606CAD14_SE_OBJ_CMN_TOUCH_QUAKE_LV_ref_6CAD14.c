/* SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_6CAD14
 * address: 0x606CAD14   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_6CAD14(int a1)
{
  int v2; // r0
  _BYTE *v3; // r1
  int v4; // r0
  int v5; // r0
  float v6; // r1
  int v7; // r6
  int v8; // r5
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v3 = (_BYTE *)(a1 + 6914);
  v2 = FIELD_U8(a1, 6914);
  if ( v2 )
  {
    *v3 = v2 - 1;
    if ( v2 != 1 )
    {
      v4 = sub_606CA1C8(a1);
      if ( v4 )
        sub_606D47D8(v4, FIELD_U32(a1, 6908));
    }
  }
  else if ( FIELD_U8(a1, 6913) )
  {
    *v3 = 60;
  }
  if ( FIELD_U8(a1, 6912) )
  {
    v5 = FIELD_U32(dword_60C99DD4, 1052);
    FIELD_F32(a1, 6900) = (float)(*(float *)((char *)sinLutTable + ((v5 << 8) & 0xF00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v5 << 8) & 0xF00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    FIELD_F32(a1, 6904) = (float)(*(float *)((char *)sinLutTable + ((v5 << 9) & 0xE00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v5 << 9) & 0xE00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    v6 = FIELD_F32(a1, 112);
    v7 = FIELD_U32(a1, 8);
    v8 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v8, "SE_OBJ_CMN_TOUCH_QUAKE_LV", v7, &out, 0);
  }
  else
  {
    FIELD_U32(a1, 6900) = 0;
    FIELD_U32(a1, 6904) = 0;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 252))(a1);
  FIELD_U8(a1, 6913) = 0;
  return 0;
}
