/* I_kinoko_ref_4689DC
 * address: 0x604689DC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall I_kinoko_ref_4689DC(int a1)
{
  _DWORD *v1; // r4
  int v2; // r5
  int Resource; // r0
  const char *v5[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 6160);
  v2 = **(_DWORD **)(FIELD_U32(a1, 6160) + 12);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "I_kinoko";
  Resource = LoadResource(ResourceMgrRelated_instance, v6);
  v5[0] = (const char *)&sead__SafeStringBase__vtable;
  v5[1] = "out2";
  SkeletalAnim_play(v2, Resource, v5);
  *(_DWORD *)(**(_DWORD **)(*v1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4));
  v1[4] = 2;
  return 2;
}
