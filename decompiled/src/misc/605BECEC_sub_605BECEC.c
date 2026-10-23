/* sub_605BECEC
 * address: 0x605BECEC   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_605BECEC(int a1, StageActor *a2, int a3)
{
  float v6; // s0
  float v7; // s2
  float y; // s2
  float v9; // s2
  float v10; // s2
  float v11; // s2
  float v12; // s2
  float v13; // s2
  float v14; // s2
  int v15; // s4
  float v16; // s0
  ColliderListNode *result; // r0
  SolidOnTopColliderInfo info; // [sp+8h] [bp-90h] BYREF
  float v19; // [sp+20h] [bp-78h] BYREF
  float v20; // [sp+24h] [bp-74h]
  float v21; // [sp+28h] [bp-70h]
  float v22; // [sp+2Ch] [bp-6Ch]
  float v23; // [sp+30h] [bp-68h]
  float v24; // [sp+34h] [bp-64h]
  float v25; // [sp+38h] [bp-60h]
  float v26; // [sp+3Ch] [bp-5Ch]
  float v27; // [sp+40h] [bp-58h]
  float v28; // [sp+44h] [bp-54h]
  float v29; // [sp+48h] [bp-50h]
  float v30; // [sp+4Ch] [bp-4Ch]
  float v31; // [sp+50h] [bp-48h]
  float v32; // [sp+54h] [bp-44h]
  float v33; // [sp+58h] [bp-40h]
  float v34; // [sp+5Ch] [bp-3Ch]
  float v35; // [sp+60h] [bp-38h]
  float v36; // [sp+64h] [bp-34h]
  float v37; // [sp+68h] [bp-30h]
  float v38; // [sp+6Ch] [bp-2Ch]

  sub_606C5EC4();
  sub_60656814(a3, &v19, 0);
  v6 = v19 - FIELD_F32(a2, 0x6C);
  v19 = v6;
  v7 = v20 - FIELD_F32(a2, 0x70);
  v19 = v6 - 24.0;
  v20 = v7;
  v21 = v6;
  v22 = v7;
  sub_60656814(a3, &info, 1);
  info.field_0 = info.field_0 - FIELD_F32(a2, 0x6C);
  y = FIELD_F32(a2, 0x70);
  v23 = info.field_0;
  v24 = *(float *)&info.field_4 - y;
  sub_60656814(a3, &info, 2);
  info.field_0 = info.field_0 - FIELD_F32(a2, 0x6C);
  v9 = FIELD_F32(a2, 0x70);
  v25 = info.field_0;
  v26 = *(float *)&info.field_4 - v9;
  sub_60656814(a3, &info, 3);
  info.field_0 = info.field_0 - FIELD_F32(a2, 0x6C);
  v10 = FIELD_F32(a2, 0x70);
  v27 = info.field_0;
  v28 = *(float *)&info.field_4 - v10;
  sub_60656814(a3, &info, 4);
  info.field_0 = info.field_0 - FIELD_F32(a2, 0x6C);
  v11 = FIELD_F32(a2, 0x70);
  v29 = info.field_0;
  v30 = *(float *)&info.field_4 - v11;
  sub_60656814(a3, &info, 5);
  info.field_0 = info.field_0 - FIELD_F32(a2, 0x6C);
  v12 = FIELD_F32(a2, 0x70);
  v31 = info.field_0;
  v32 = *(float *)&info.field_4 - v12;
  sub_60656814(a3, &info, 6);
  info.field_0 = info.field_0 - FIELD_F32(a2, 0x6C);
  v13 = FIELD_F32(a2, 0x70);
  v33 = info.field_0;
  v34 = *(float *)&info.field_4 - v13;
  sub_60656814(a3, &info, 7);
  info.field_0 = info.field_0 - FIELD_F32(a2, 0x6C);
  v14 = FIELD_F32(a2, 0x70);
  v15 = info.field_4;
  v35 = info.field_0;
  v16 = info.field_0 + 24.0;
  info.field_0 = 0.0;
  info.field_4 = 1094713344;
  info.field_8 = 0;
  info.field_C = 0.0;
  info.points = (Vec2 *)&v19;
  info.rotation = 0;
  v36 = *(float *)&v15 - v14;
  v37 = v16;
  v38 = *(float *)&v15 - v14;
  SolidOnTopCollider_init2((SolidOnTopCollider *)(a1 + 1024), a2, &info, 10, 0);
  sub_60160630((ColliderBase *)(a1 + 1024), 2);
  result = ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1024));
  FIELD_U8(a1, 1392) = 0;
  a1 += 1392;
  FIELD_U8(a1, 3) = 0;
  FIELD_U8(a1, 2) = 0;
  FIELD_U8(a1, 1) = 0;
  return result;
}
