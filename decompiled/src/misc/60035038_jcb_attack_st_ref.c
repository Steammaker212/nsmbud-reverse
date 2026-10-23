/* jcb_attack_st_ref
 * address: 0x60035038   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcb_attack_st_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  int *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  int *v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  _DWORD v17[6]; // [sp+0h] [bp-18h] BYREF

  v3 = a1 + 7100;
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (int *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  v7 = *v4;
  v8 = FIELD_U32(a1, 7096);
  v17[0] = &sead__SafeStringBase__vtable;
  v17[1] = "jcb_attack_st";
  SkeletalAnim_play(v7, v8, (int)v17);
  v9 = *(int **)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += v10;
  v11 = *v9;
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  v12 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v13 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v13 )
    v12 += 4 * v13;
  *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
  v14 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v15 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v15 )
    v14 += 4 * v15;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v14 + 4), 0);
  sub_600CEBC0(a1);
  FIELD_U8(a1, 7787) = 0;
  return 7787;
}
