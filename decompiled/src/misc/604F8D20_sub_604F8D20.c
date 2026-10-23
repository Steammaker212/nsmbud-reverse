/* sub_604F8D20
 * address: 0x604F8D20   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F8D20(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r0

  if ( ((unsigned int)&dword_60CA6C60[15] & ~(1615826240 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[15]) )
  {
    dword_60CA6D20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D24 = (int)"ItemStockConfirm.bflyt";
    dword_60CA6D28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D2C = (int)"ItemStockConfirmDL.bflyt";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6C60[15]);
  }
  v3 = FIELD_U8(dword_60CC6D8C, 17);
  sub_604734E4((_DWORD *)a1, 0);
  sub_60475C8C(a1);
  message_ref((_DWORD *)a1, &dword_60CA6CE0[2 * v3 + 16], a1 + 3760, 0, 0);
  (*(void (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3520) + 12))(
    FIELD_U32(a1, 3520),
    sub_609909D8,
    0);
  v4 = sub_60473B4C(a1);
  return sub_608589FC(FIELD_U32(a1, 5800), v4);
}
