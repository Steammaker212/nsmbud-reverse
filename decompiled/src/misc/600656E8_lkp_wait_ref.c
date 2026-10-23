/* lkp_wait_ref
 * address: 0x600656E8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall lkp_wait_ref(int a1)
{
  int Resource; // r5
  int v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  _DWORD v7[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v8[6]; // [sp+8h] [bp-18h] BYREF

  v7[0] = &sead__SafeStringBase__vtable;
  v8[0] = &sead__SafeStringBase__vtable;
  v7[1] = "lkp_wait";
  v8[1] = "peach";
  Resource = LoadResource(ResourceMgrRelated_instance, v8);
  v4 = *(_DWORD **)(a1 + 6100);
  v3 = a1 + 6100;
  sub_60421938(v4, Resource, (int)v7);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v3 + 20), Resource, v7);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 4), 1);
}
