/* cs_item_ref
 * address: 0x6045D408   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall cs_item_ref(int *a1, int a2, int a3, float a4)
{
  char v4; // r12
  int v9; // r1
  int v10; // r5

  if ( ((unsigned int)&unk_60C9D100 & ~(1615189040 << v4) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C9D100) )
  {
    dword_60C9D104 = (int)&sead__SafeStringBase__vtable;
    dword_60C9D108 = (int)"out";
    dword_60C9D10C = (int)&sead__SafeStringBase__vtable;
    dword_60C9D110 = (int)"out2";
    dword_60C9D114 = (int)&sead__SafeStringBase__vtable;
    dword_60C9D118 = (int)"wait";
    dword_60C9D11C = (int)&sead__SafeStringBase__vtable;
    dword_60C9D120 = (int)"cs_item";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60C9D100);
  }
  if ( a1[7] != a2 )
  {
    a1[7] = a2;
    v9 = *a1;
    v10 = **(_DWORD **)(a1[1] + 12);
    SkeletalAnim_play(v10, v9, (const char **)&unk_60C9D100 + 2 * a2 + 1);
    AnimationCtrl_setRepeat((ModelAnimation *)(v10 + 4), a3);
    FIELD_F32(v10, 24) = a4;
  }
}
