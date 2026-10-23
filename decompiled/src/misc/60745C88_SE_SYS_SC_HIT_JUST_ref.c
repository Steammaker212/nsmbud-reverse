/* SE_SYS_SC_HIT_JUST_ref
 * address: 0x60745C88   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_SC_HIT_JUST_ref(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r1
  Vec3 *v7; // r5
  float v8; // r1
  int v9; // r5
  int v10; // r7
  float v11; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  result = 0;
  if ( !FIELD_U8(a1, 816) )
  {
    if ( (FIELD_U8(a1, 20) & 1) != 0 )
    {
      v7 = (Vec3 *)(a1 + 108);
    }
    else
    {
      if ( a2 )
        v6 = FIELD_U32(a2, 64);
      else
        v6 = 0;
      sub_60745DF4(a1, v6, a3);
      v7 = (Vec3 *)(a1 + 108);
      if ( a3 == 1 )
      {
        FIELD_U32(a1, 740) = 1055286886;
        FIELD_U32(a1, 744) = 1055286886;
        FIELD_U32(a1, 748) = 1055286886;
        EffectData_create(447, (Vec3 *)(a1 + 108), 0, a1 + 740);
        v8 = FIELD_F32(a1, 112);
        v9 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v8;
        mapPositionToScreen(&out, &position);
        sub_60813BDC(v9, "SE_SYS_SC_HIT_JUST", &out, 1, 0);
LABEL_10:
        FIELD_U8(a1, 816) = 1;
        FIELD_U8(a1, 19) = 1;
        return 1;
      }
    }
    FIELD_U32(a1, 740) = 1056964608;
    FIELD_U32(a1, 744) = 1056964608;
    FIELD_U32(a1, 748) = 1056964608;
    EffectData_create(440, v7, 0, a1 + 740);
    v10 = Global_BasicSoundActor2;
    v11 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(v7, 0x0);
    position.y = v11;
    mapPositionToScreen(&out, &position);
    sub_60813BDC(v10, "SE_OBJ_CMN_BALLOON_BREAK", &out, 1, 0);
    goto LABEL_10;
  }
  return result;
}
