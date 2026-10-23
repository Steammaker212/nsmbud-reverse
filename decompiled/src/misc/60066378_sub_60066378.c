/* sub_60066378
 * address: 0x60066378   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60066378(int a1)
{
  int v2; // r1
  _DWORD *v3; // r4
  _DWORD *v4; // t1
  int *v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int (**v11)(); // [sp+0h] [bp-18h] BYREF
  const char *v12; // [sp+4h] [bp-14h]

  v11 = &sead__SafeStringBase__vtable;
  v12 = "boss_shutter_peach";
  v2 = LoadResource(ResourceMgrRelated_instance, &v11);
  v4 = *(_DWORD **)(a1 + 6100);
  v3 = (_DWORD *)(a1 + 6100);
  v5 = (int *)v4[3];
  v6 = v4[17];
  if ( v4[2] > v6 )
    v5 += v6;
  v7 = *v5;
  v11 = &sead__SafeStringBase__vtable;
  v12 = "shutout2";
  SkeletalAnim_play(v7, v2, (int)&v11);
  v8 = *(_DWORD *)(*v3 + 12);
  v9 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v9 )
    v8 += 4 * v9;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), 0);
  v3[2] = 1;
  return 1;
}
