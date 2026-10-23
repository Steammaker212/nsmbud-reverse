/* jcb_attack_ed_ref
 * address: 0x60035260   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcb_attack_ed_ref(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  int *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  const char *v9; // r2
  int *v10; // r1
  unsigned int v11; // r0
  int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  _DWORD v18[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 7100);
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (int *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  v7 = *v4;
  v8 = *(v3 - 1);
  if ( *(_DWORD *)(v3[131] + 11468) == 1 )
  {
    v18[0] = &sead__SafeStringBase__vtable;
    v9 = "jcb_attack_ed_l";
  }
  else
  {
    v18[0] = &sead__SafeStringBase__vtable;
    v9 = "jcb_attack_ed_r";
  }
  v18[1] = v9;
  SkeletalAnim_play(v7, v8, (int)v18);
  v10 = *(int **)(*v3 + 12);
  v11 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v11 )
    v10 += v11;
  v12 = *v10;
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  v13 = *(_DWORD *)(*v3 + 12);
  v14 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v14 )
    v13 += 4 * v14;
  *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
  v15 = *(_DWORD *)(*v3 + 12);
  v16 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v16 )
    v15 += 4 * v16;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v15 + 4), 0);
  sub_600CEBC0(a1);
  FIELD_U8(a1, 7787) = 0;
  return 7787;
}
