/* sub_60305A6C
 * address: 0x60305A6C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60305A6C(_DWORD *a1)
{
  int v2; // r5
  int Resource; // r0
  _DWORD v5[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v6[8]; // [sp+8h] [bp-20h] BYREF

  a1[29] = 1167867904;
  v2 = **(_DWORD **)(a1[1738] + 12);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "jugem";
  Resource = LoadResource(ResourceMgrRelated_instance, v6);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "dead";
  SkeletalAnim_play(v2, Resource, (int)v5);
  *(_DWORD *)(**(_DWORD **)(a1[1738] + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1738] + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[1738] + 12) + 4));
  a1[1750] = 4;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
  a1[30] = 0;
  a1[31] = 1065353216;
  a1[32] = 0;
  a1[33] = 0;
  a1[34] = -1065353216;
  a1[35] = 0;
  a1[25] = -1103101952;
  return -1103101952;
}
