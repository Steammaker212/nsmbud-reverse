/* jc_demo_W5_appear_ref
 * address: 0x6011A9E0   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W5_appear_ref(int a1)
{
  float v2; // s0
  float v3; // s2
  int v4; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // t1
  int *v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r1
  unsigned int v12; // r0
  int *v13; // r1
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  _DWORD v19[6]; // [sp+0h] [bp-18h] BYREF

  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
  sub_601209A4(a1);
  v2 = FIELD_F32(a1, 8940) + 112.0;
  v3 = FIELD_F32(a1, 8944) + 32.0;
  FIELD_F32(a1, 8952) = v2;
  FIELD_F32(a1, 8956) = v3;
  v4 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 8960) = v4;
  FIELD_F32(a1, 108) = v2;
  FIELD_F32(a1, 112) = v3;
  FIELD_F32(a1, 584) = v2;
  FIELD_F32(a1, 588) = v3;
  FIELD_U32(a1, 592) = v4;
  FIELD_U32(a1, 616) = v4;
  FIELD_F32(a1, 608) = v2;
  FIELD_F32(a1, 612) = v3;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  v6 = *(_DWORD **)(a1 + 7656);
  v5 = (_DWORD *)(a1 + 7656);
  v7 = (int *)v6[3];
  v8 = v6[17];
  if ( v6[2] > v8 )
    v7 += v8;
  v9 = *v7;
  v10 = v5[1];
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = "jc_demo_W5_appear";
  SkeletalAnim_play(v9, v10, (int)v19);
  v11 = *(_DWORD *)(*v5 + 12);
  v12 = *(_DWORD *)(*v5 + 68);
  if ( *(_DWORD *)(*v5 + 8) > v12 )
    v11 += 4 * v12;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 0);
  v13 = *(int **)(*v5 + 12);
  v14 = *(_DWORD *)(*v5 + 68);
  if ( *(_DWORD *)(*v5 + 8) > v14 )
    v13 += v14;
  v15 = *v13;
  FIELD_U32(v15, 20) = 0;
  FIELD_U32(v15, 28) |= 2u;
  v16 = *(_DWORD *)(*v5 + 12);
  v17 = *(_DWORD *)(*v5 + 68);
  if ( *(_DWORD *)(*v5 + 8) > v17 )
    v16 += 4 * v17;
  *(_DWORD *)(*(_DWORD *)v16 + 24) = 0;
  *((_BYTE *)v5 + 1675) = 0;
  *(v5 - 1878) = 1065353216;
  *(v5 - 1877) = 1065353216;
  *(v5 - 1876) = 1065353216;
  v5[408] = 0;
  *((_BYTE *)v5 - 7121) = 0;
  *((_BYTE *)v5 + 1677) = 0;
  return -7121;
}
