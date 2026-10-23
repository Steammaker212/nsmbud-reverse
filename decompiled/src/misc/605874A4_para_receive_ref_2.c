/* para_receive_ref_2
 * address: 0x605874A4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall para_receive_ref_2(int a1)
{
  _DWORD *v1; // r4
  int v2; // r5
  int Resource; // r0
  const char *v5[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 6300);
  v2 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "bombhei";
  Resource = LoadResource(ResourceMgrRelated_instance, v6);
  v5[0] = (const char *)&sead__SafeStringBase__vtable;
  v5[1] = "para_receive";
  SkeletalAnim_play(v2, Resource, v5);
  *(_DWORD *)(**(_DWORD **)(*v1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4));
  *(v1 - 1545) = 0;
  *(v1 - 1544) = 0;
  *(v1 - 1543) = 0;
  v1[2] = 0;
  v1[3] = 0;
  return -6172;
}
