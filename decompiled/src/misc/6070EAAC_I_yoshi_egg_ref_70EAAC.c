/* I_yoshi_egg_ref_70EAAC
 * address: 0x6070EAAC   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall I_yoshi_egg_ref_70EAAC(int a1)
{
  int result; // r0
  int v3; // r6
  int *v4; // r2
  int v5; // r5
  int Resource; // r0
  const char *v7[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v8[8]; // [sp+8h] [bp-20h] BYREF

  v3 = a1 + 6104;
  result = FIELD_U32(a1, 6104);
  if ( (*(_BYTE *)(**(_DWORD **)(result + 12) + 28) & 0x20) != 0 )
  {
    v4 = dword_6070EBB4;
    if ( FIELD_U8(a1, 86) == 1 )
      v4 = &dword_6070EBB4[1];
    FIELD_U32(a1, 116) = *v4;
    v5 = **(_DWORD **)(result + 12);
    v8[0] = &sead__SafeStringBase__vtable;
    v8[1] = "I_yoshi_egg";
    Resource = LoadResource(ResourceMgrRelated_instance, v8);
    v7[0] = (const char *)&sead__SafeStringBase__vtable;
    v7[1] = "wait";
    SkeletalAnim_play(v5, Resource, v7);
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 24) = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4), 0);
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4));
    FIELD_U32(a1, 6148) = 2;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBD188);
  }
  return result;
}
