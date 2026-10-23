/* attack1_ref
 * address: 0x6028BA7C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall attack1_ref(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // t1
  int *v3; // r1
  unsigned int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  _DWORD v14[4]; // [sp+0h] [bp-10h] BYREF

  v2 = *(_DWORD **)(a1 + 6300);
  v1 = (_DWORD *)(a1 + 6300);
  v3 = (int *)v2[3];
  v4 = v2[17];
  if ( v2[2] > v4 )
    v3 += v4;
  v5 = *v3;
  v6 = v1[1];
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "attack1";
  SkeletalAnim_play(v5, v6, (int)v14);
  v7 = *(_DWORD *)(*v1 + 12);
  v8 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  v9 = *(_DWORD *)(*v1 + 12);
  v10 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v10 )
    v9 += 4 * v10;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 1);
  v11 = *(_DWORD *)(*v1 + 12);
  v12 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v12 )
    v11 += 4 * v12;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v11 + 4));
  *(v1 - 1553) = dword_60AF1EC0[*(v1 - 1555)];
  v1[8] = 0;
  return 0;
}
