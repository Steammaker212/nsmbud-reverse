/* SE_EMY_DOWN_ref_33033C
 * address: 0x6033033C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_33033C(int a1, int a2, int a3)
{
  int v4; // r9
  float v5; // r1
  int v6; // r7
  float v7; // s0
  char v8; // r6
  _BOOL4 v9; // r0
  char v10; // r1
  Vec3 v12; // [sp+0h] [bp-48h] BYREF
  _BOOL4 v13; // [sp+Ch] [bp-3Ch]
  int v14; // [sp+10h] [bp-38h]
  char v15; // [sp+14h] [bp-34h]
  char v16; // [sp+15h] [bp-33h]
  char v17; // [sp+16h] [bp-32h]
  _BOOL4 v18; // [sp+18h] [bp-30h]
  char v19; // [sp+1Ch] [bp-2Ch]
  Vec2 out; // [sp+20h] [bp-28h] BYREF

  v4 = FIELD_U32(a3, 64);
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor1;
  v12.x = FIELD_F32(a1, 108);
  v12.y = v5;
  mapPositionToScreen(&out, &v12);
  BasicSoundActor1_playSound(v6, "SE_EMY_DOWN", (int)&out, 0);
  v7 = FIELD_F32(v4, 120);
  v12.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v12.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v12.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  v13 = v7 < 0.0;
  v14 = 1;
  v15 = 0;
  v17 = 0;
  v16 = 0;
  sub_60583000(dword_60CAF15C, &v12, 3);
  v8 = sub_602856C4((_DWORD *)(a1 + 6292));
  v9 = sub_6000ADDC(a1, v4);
  v10 = FIELD_U8(v4, 84);
  v13 = 0;
  memset(&v12, 0, sizeof(v12));
  v14 = (int)&unk_60C93E40;
  v15 = v8;
  v18 = v9;
  v19 = v10;
  sub_602A852C(a1 + 6104, &v12);
  return 1;
}
