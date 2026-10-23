/* sub_605F9BD8
 * address: 0x605F9BD8   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605F9BD8(int a1)
{
  int v1; // r4
  Vec3 *v2; // r8
  Vec3 *v3; // r10
  Vec3 *v4; // r9
  float v5; // s2
  float v6; // s4
  LightSource *v7; // r11
  LightSource *v8; // r6
  LightSource *v9; // r7
  int v11; // [sp+18h] [bp+0h]
  int v12; // [sp+1Ch] [bp+4h]
  int v13; // [sp+20h] [bp+8h]

  v1 = a1;
  v12 = FIELD_U32(a1, 112);
  v13 = FIELD_U32(a1, 116);
  v11 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6360) = v13;
  FIELD_U32(a1, 6356) = v12;
  FIELD_U32(a1, 6352) = v11;
  v2 = (Vec3 *)(a1 + 6352);
  FIELD_U32(a1, 6348) = v13;
  FIELD_U32(a1, 6344) = v12;
  FIELD_U32(a1, 6340) = v11;
  v3 = (Vec3 *)(a1 + 6340);
  FIELD_U32(a1, 6372) = v13;
  FIELD_U32(a1, 6368) = v12;
  FIELD_U32(a1, 6364) = v11;
  v4 = (Vec3 *)(a1 + 6364);
  v5 = unk_60CB24E0;
  FIELD_F32(a1, 6352) = unk_60CB24E0 + FIELD_F32(a1, 6352);
  v6 = unk_60CB24E4;
  FIELD_F32(a1, 6356) = unk_60CB24E4 + FIELD_F32(a1, 6356);
  FIELD_F32(a1, 6340) = FIELD_F32(a1, 6340) - v5;
  FIELD_F32(a1, 6344) = v6 + FIELD_F32(a1, 6344);
  FIELD_F32(a1, 6364) = unk_60CB24E8 + FIELD_F32(a1, 6364);
  v7 = (LightSource *)(a1 + 6376);
  FIELD_F32(a1, 6368) = *(float *)&dword_60CB24EC + FIELD_F32(a1, 6368);
  LightSource_update1((LightSource *)(a1 + 6376), 55, 0, 0, 0, 0, 0, 0, 0);
  v8 = (LightSource *)(v1 + 6448);
  LightSource_update1((LightSource *)(v1 + 6448), 55, 0, 0, 0, 0, 0, 0, 0);
  v9 = (LightSource *)(v1 + 6520);
  LightSource_update1((LightSource *)(v1 + 6520), 56, 0, 0, 0, 0, 0, 0, 0);
  v1 += 144;
  LightSource_update2(v7, v3, 0, (float *)v1, 0, 0, 0, 0);
  LightSource_update2(v8, v2, 0, (float *)v1, 0, 0, 0, 0);
  return LightSource_update2(v9, v4, 0, (float *)v1, 0, 0, 0, 0);
}
