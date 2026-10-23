/* W7_cs_appear00_ref
 * address: 0x601F4EB0   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall W7_cs_appear00_ref(int a1)
{
  int v2; // r5
  _DWORD *v3; // r0
  float *v4; // r0
  float v5; // s4
  float v6; // s6
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int result; // r0
  _DWORD v11[2]; // [sp+4h] [bp-34h] BYREF
  _DWORD v12[2]; // [sp+Ch] [bp-2Ch] BYREF
  int v13; // [sp+14h] [bp-24h]

  v2 = FIELD_U32(dword_60CC6D78, 412);
  sub_601F2688(a1, 0, 1, 0, 5.0, 1.0);
  v12[0] = -1;
  v12[1] = -1;
  v13 = -1;
  sub_601FA238(dword_60C8BF58, v12, 0x200000, v2);
  FIELD_U32(a1, 248) = v13;
  FIELD_U32(a1, 240) = v2;
  FIELD_U32(a1, 592) = 12;
  sub_6019EC34((_DWORD *)(dword_60CC6D78 + 456), v12);
  v3 = (_DWORD *)sub_601E0040((int)v12);
  FIELD_U32(a1, 568) = *v3;
  FIELD_U32(a1, 572) = v3[1];
  FIELD_U32(a1, 576) = v3[2];
  v4 = (float *)sub_601FEE28(dword_60C8C188);
  v5 = v4[179];
  v6 = v4[180];
  FIELD_F32(a1, 80) = v4[178] + 300.0;
  FIELD_F32(a1, 84) = v5 + 1000.0;
  FIELD_F32(a1, 88) = v6 + 900.0;
  FIELD_F32(a1, 840) = FIELD_F32(a1, 568) + 0.0;
  FIELD_F32(a1, 844) = FIELD_F32(a1, 572) + 300.0;
  FIELD_F32(a1, 848) = FIELD_F32(a1, 576) + -500.0;
  v7 = sub_608332B0(a1 + 80, a1 + 840);
  FIELD_U32(a1, 880) = v7;
  FIELD_U32(a1, 192) = v7;
  FIELD_U32(a1, 180) = v7;
  FIELD_U32(a1, 200) = 1091043328;
  FIELD_U8(a1, 932) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
  sub_601E4C88((_DWORD *)dword_60C8B13C, 90, (_DWORD *)(a1 + 80));
  v8 = FIELD_U32(a1, 772);
  v9 = **(_DWORD **)(FIELD_U32(a1, 768) + 12);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "W7_cs_appear00";
  SkeletalAnim_play(v9, v8, (int)v11);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 768) + 12) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 768) + 12) + 24) = 0;
  result = 929 - (int)*(float *)(**(_DWORD **)(FIELD_U32(a1, 768) + 12) + 8);
  FIELD_U32(a1, 916) = result;
  FIELD_U32(a1, 920) = 150;
  FIELD_U32(a1, 596) = 0;
  return result;
}
