/* SE_OBJ_CMN_TOUCH_MOVE_LV_ref_3
 * address: 0x6067008C   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_MOVE_LV_ref_3(int a1)
{
  int v2; // r5
  int *v3; // r4
  float v4; // s0
  _DWORD *v5; // r6
  int v6; // r7
  int v7; // r11
  int v8; // r1
  char v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r0
  float v12; // r1
  int v13; // r5
  int v14; // r6
  Vec2 out; // [sp+4h] [bp-34h] BYREF
  Vec3 position; // [sp+Ch] [bp-2Ch] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U8(a1, 8264) )
  {
    v2 = 8160;
    v3 = (int *)(a1 + 8088);
    LODWORD(v4) = (int)(float)(FIELD_F32(a1, 8244) * (float)FIELD_S32(a1, 8252));
    FIELD_U32(a1, 8256) += LODWORD(v4);
    v5 = (_DWORD *)(a1 + 6120);
    do
    {
      v6 = *v3;
      v7 = v3[1];
      ((void (__fastcall *)(int, int, float))loc_6069B070)(a1 + v2, a1 + 108, v4);
      v5[43] = v6;
      v5[44] = v7;
      (*(void (__fastcall **)(_DWORD *))(*v5 + 28))(v5);
      v5 += 164;
      v3 += 2;
      v2 += 40;
    }
    while ( (unsigned int)v5 <= a1 + 6776 );
    v8 = FIELD_S8(a1, 8266);
    if ( v8 < 1 )
    {
      out.x = 4.3082e-26;
      position.x = 0.0;
      moveValueTo((int *)(a1 + 8276), (int *)&position, (int *)&out);
      v11 = FIELD_U32(a1, 8276);
      FIELD_F32(a1, 8280) = (float)(*(float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0))
                                    + (float)((float)((float)(v11 & 0xFFFFFF)
                                                    * *(float *)((char *)&sinLutTable[1] + ((v11 >> 20) & 0xFF0)))
                                            * 0.000000059605))
                            * 1.25;
      if ( v11 )
      {
LABEL_10:
        v12 = FIELD_F32(a1, 112);
        v13 = FIELD_U32(a1, 8);
        v14 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v12;
        mapPositionToScreen(&out, &position);
        SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v14, "SE_OBJ_CMN_TOUCH_MOVE_LV", v13, &out, 0);
      }
    }
    else
    {
      v9 = v8 - 1;
      FIELD_U8(a1, 8266) = v9;
      if ( !v9 )
        sub_606702FC(a1);
      v10 = FIELD_U32(a1, 8276) + 357913941;
      FIELD_U32(a1, 8276) = v10;
      FIELD_F32(a1, 8280) = (float)(*(float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0))
                                    + (float)((float)((float)(v10 & 0xFFFFFF)
                                                    * *(float *)((char *)&sinLutTable[1] + ((v10 >> 20) & 0xFF0)))
                                            * 0.000000059605))
                            * 1.25;
      if ( v10 )
        goto LABEL_10;
    }
  }
  ((void (__fastcall *)(int))loc_6066FCB4)(a1);
  return 1;
}
