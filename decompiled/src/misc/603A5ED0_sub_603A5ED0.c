/* sub_603A5ED0
 * address: 0x603A5ED0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_603A5ED0(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r6
  ModelAnimation *result; // r0

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 728);
  if ( ((unsigned int)&dword_60C9797C & ~(1614438124 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9797C) )
  {
    dword_60C97978 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9797C);
  }
  if ( v3 )
  {
    v4 = (**v3)(v3, &dword_60C97978);
    if ( v4 )
      v4 = (int)v3;
  }
  else
  {
    v4 = 0;
  }
  sub_602A3EFC(a1 + 748, 16, *(float *)((char *)&unk_60AF27A4 + (FIELD_U8(v4, 23) & 0xC)) * 0.0625);
  result = *(ModelAnimation **)(v4 + 23596);
  if ( !result )
  {
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 672) + 20) + 4), 0);
    return sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 672) + 20) + 4));
  }
  return result;
}
