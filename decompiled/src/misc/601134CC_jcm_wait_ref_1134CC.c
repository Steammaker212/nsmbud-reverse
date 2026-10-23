/* jcm_wait_ref_1134CC
 * address: 0x601134CC   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall jcm_wait_ref_1134CC(int a1)
{
  int v1; // r4
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
  _DWORD v14[4]; // [sp+0h] [bp-10h] BYREF

  v2 = *(_DWORD **)(a1 + 7100);
  v1 = a1 + 7100;
  v3 = (int *)v2[3];
  v4 = v2[17];
  if ( v2[2] > v4 )
    v3 += v4;
  v5 = *v3;
  v6 = *(_DWORD *)(v1 - 4);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "jcm_wait";
  SkeletalAnim_play(v5, v6, (int)v14);
  v7 = *(int **)(*(_DWORD *)v1 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v8 )
    v7 += v8;
  v9 = *v7;
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  v10 = *(_DWORD *)(*(_DWORD *)v1 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v11 )
    v10 += 4 * v11;
  *(_DWORD *)(*(_DWORD *)v10 + 24) = 1065353216;
  v12 = *(_DWORD *)(*(_DWORD *)v1 + 12);
  v13 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v13 )
    v12 += 4 * v13;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 1);
}
