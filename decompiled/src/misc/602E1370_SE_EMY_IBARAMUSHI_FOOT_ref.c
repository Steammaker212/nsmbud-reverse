/* SE_EMY_IBARAMUSHI_FOOT_ref
 * address: 0x602E1370   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_IBARAMUSHI_FOOT_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float v6; // s0
  float v7; // r1
  int v8; // r6
  int v9; // r4
  unsigned int v10; // r0
  float v11; // r1
  int v12; // r6
  Vec3 v14; // [sp+0h] [bp-30h] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  v2 = *(_DWORD **)(a1 + 6300);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  v6 = *(float *)(*(_DWORD *)v3 + 20);
  if ( v6 >= 40.0 && FIELD_U8(a1, 15400) == 1 )
  {
    if ( v6 != 40.0 )
      return 0;
    v7 = FIELD_F32(a1, 112);
    v8 = Global_BasicSoundActor1;
    v14.x = FIELD_F32(a1, 108);
    v14.y = v7;
    mapPositionToScreen(&out, &v14);
    v9 = 0;
    BasicSoundActor1_playSound(v8, "SE_EMY_IBARAMUSHI_FOOT", (int)&out, 0);
    v10 = byte_60AFDF8C[2 * FIELD_U32(a1, 80) + FIELD_U8(a1, 15378)];
    if ( v10 >= 2 )
      v10 = 0;
    goto LABEL_15;
  }
  v9 = 1;
  if ( FIELD_U8(a1, 15373) && v6 == 5.0 && v6 <= 5.0 && !FIELD_U8(a1, 15400) )
  {
    v11 = FIELD_F32(a1, 112);
    v12 = Global_BasicSoundActor1;
    v14.x = FIELD_F32(a1, 108);
    v14.y = v11;
    mapPositionToScreen(&out, &v14);
    BasicSoundActor1_playSound(v12, "SE_EMY_IBARAMUSHI_FOOT", (int)&out, 0);
    v10 = byte_60AFDF8C[2 * FIELD_U32(a1, 80) + FIELD_U8(a1, 15378)];
    if ( v10 >= 2 )
      v10 = 0;
LABEL_15:
    v14 = *(Vec3 *)(a1 + 12 * v10 + 6504);
    v14.y = v14.y + -3.0;
    EffectData_create(697, &v14, 0, 0);
  }
  return v9;
}
