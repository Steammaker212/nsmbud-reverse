/* sub_60112FA0
 * address: 0x60112FA0   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60112FA0(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // t1
  int *v3; // r1
  unsigned int v4; // r0
  int v5; // r0
  int v6; // r1
  int *v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  _DWORD v15[6]; // [sp+0h] [bp-18h] BYREF

  v2 = *(_DWORD **)(a1 + 7100);
  v1 = (_DWORD *)(a1 + 7100);
  v3 = (int *)v2[3];
  v4 = v2[17];
  if ( v2[2] > v4 )
    v3 += v4;
  v5 = *v3;
  v6 = *(v1 - 1);
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = "jcm_shot_st";
  SkeletalAnim_play(v5, v6, (int)v15);
  v7 = *(int **)(*v1 + 12);
  v8 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v8 )
    v7 += v8;
  v9 = *v7;
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  v10 = *(_DWORD *)(*v1 + 12);
  v11 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v11 )
    v10 += 4 * v11;
  *(_DWORD *)(*(_DWORD *)v10 + 24) = 1065353216;
  v12 = *(_DWORD *)(*v1 + 12);
  v13 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v13 )
    v12 += 4 * v13;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 0);
  sub_60813578(v1 - 192, "mVoiceLabel");
  sub_60813430(v1 - 192, "SE_VOC_JR_READY", 0);
  *(v1 - 2) = 16780501;
  *(v1 - 1735) = 0;
  v1[137] = 1;
  return 1;
}
