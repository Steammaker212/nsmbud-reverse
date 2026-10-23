/* sub_605943EC
 * address: 0x605943EC   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605943EC(int a1, int a2)
{
  char v2; // r12
  int v5; // r6
  int Resource; // r0
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)&unk_60CAF900 & ~(1616462860 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CAF900) )
  {
    dword_60CAF91C = (int)&sead__SafeStringBase__vtable;
    dword_60CAF920 = (int)"open";
    dword_60CAF924 = (int)&sead__SafeStringBase__vtable;
    dword_60CAF928 = (int)"close";
    dword_60CAF92C = (int)&sead__SafeStringBase__vtable;
    dword_60CAF930 = (int)"close_signal";
    dword_60CAF934 = (int)&sead__SafeStringBase__vtable;
    dword_60CAF938 = (int)"touch_open";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60CAF900);
  }
  v5 = **(_DWORD **)(FIELD_U32(a1, 6104) + 12);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "shell_fish";
  Resource = LoadResource(ResourceMgrRelated_instance, v7);
  SkeletalAnim_play(v5, Resource, (const char **)&unk_60CAF900 + 2 * a2 + 7);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 4), 0);
}
