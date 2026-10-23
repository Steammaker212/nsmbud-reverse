/* sub_60547D74
 * address: 0x60547D74   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60547D74(int a1)
{
  char v1; // r12
  int v3; // r6
  char v4; // r12
  int v6[9]; // [sp+4h] [bp-24h] BYREF

  if ( ((unsigned int)&unk_60CAC6A0 & ~(1616149904 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CAC6A0) )
  {
    dword_60CAC6B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC6BC = (int)"SetUpBtn.bflyt";
    dword_60CAC6C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC6C4 = (int)"SetUpBtnDL.bflyt";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60CAC6A0);
  }
  v3 = FIELD_U8(dword_60CC6D8C, 17);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  v6[1] = (int)&sead__SafeStringBase__vtable;
  v6[2] = (int)"Common";
  sub_60475C8C(a1 + 40);
  message_ref((_DWORD *)(a1 + 40), (_DWORD *)&unk_60CAC6A0 + 2 * v3 + 6, a1 + 3740, 0, 0);
  if ( ((unsigned int)&dword_60CAC6A4 & ~(1616150144 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CAC6A4) )
  {
    dword_60CAC740 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC744 = dword_60CAC3F4;
    dword_60CAC748 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC74C = dword_60CAC3FC;
    dword_60CAC750 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC754 = dword_60CAC404;
    dword_60CAC758 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC75C = dword_60CAC40C;
    dword_60CAC760 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC764 = dword_60CAC414;
    dword_60CAC768 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC76C = dword_60CAC41C;
    sub_60000288();
    _cxa_guard_release(&dword_60CAC6A4);
  }
  v6[0] = 6;
  return sub_60476030(a1 + 40, &dword_60CAC740, v6);
}
