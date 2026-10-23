/* I_kinoko_ref_468830
 * address: 0x60468830   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall I_kinoko_ref_468830(int a1)
{
  int result; // r0
  _DWORD *v3; // r6
  int v4; // r4
  int v5; // t1
  int v6; // r5
  int Resource; // r0
  const char *v8[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v9[8]; // [sp+8h] [bp-20h] BYREF

  v3 = (_DWORD *)(a1 + 6176);
  result = FIELD_U32(a1, 6176);
  if ( result != 4 )
  {
    v5 = FIELD_U32(a1, 6160);
    v4 = a1 + 6160;
    v6 = **(_DWORD **)(v5 + 12);
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "I_kinoko";
    Resource = LoadResource(ResourceMgrRelated_instance, v9);
    v8[0] = (const char *)&sead__SafeStringBase__vtable;
    v8[1] = "wait";
    SkeletalAnim_play(v6, Resource, v8);
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v4 + 12) + 24) = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v4 + 12) + 4), 1);
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v4 + 12) + 4));
    *v3 = 4;
    return 4;
  }
  return result;
}
