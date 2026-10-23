/* sub_604FF638
 * address: 0x604FF638   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FF638(int a1)
{
  char v1; // r12
  _DWORD v4[8]; // [sp+0h] [bp-20h] BYREF

  if ( ((unsigned int)&dword_60CA73F0 & ~(1615853140 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA73F0) )
  {
    dword_60CA7430 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7434 = (int)"Pa_Close_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA73F0);
  }
  FIELD_U32(a1, 2136) = sub_60502E60(a1 + 56, &dword_60CA7430);
  FIELD_U8(a1, 1110) = 1;
  sub_60502210(a1 + 56, a1 + 2136, 17);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "ChangePlayerNum";
  sead__SafeStringBase__operator_assign(a1 + 1068, (int)v4);
  sub_6050292C(a1 + 56, 15);
  sub_60502960(a1 + 56, 15);
  sub_60502994(a1 + 56, 15);
  sub_605029C8(a1 + 56, 15);
  sub_605029FC(a1 + 56, a1 + 2136, "SE_SYS_BACK");
  *(_DWORD *)(sub_608DE61C(a1 + 108, FIELD_U32(a1, 2136)) - FIELD_U32(a1, 120) + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(a1 + 108, FIELD_U32(a1, 2136)) - FIELD_U32(a1, 120) + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  return sub_605028F0(a1 + 56, a1 + 2136, 1);
}
