/* T_InvalidItem_00_ref
 * address: 0x604F0BDC   size: 940   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall T_InvalidItem_00_ref(int a1)
{
  char v2; // r12
  char v3; // r12
  int v5; // [sp+18h] [bp-20h] BYREF
  int v6; // [sp+1Ch] [bp-1Ch] BYREF

  Pa_Cancel_00_ref();
  sub_604F127C(a1);
  sub_604F145C(a1);
  (*(void (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 46040) + 12))(
    FIELD_U32(a1, 46040),
    sub_609909D8,
    0);
  sub_604F1774(a1);
  P_ItemIcon_00_ref(a1);
  if ( ((unsigned int)dword_60CA6594 & ~(1615793216 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA6594) )
  {
    dword_60CA65A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA65A4 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(dword_60CA6594);
  }
  v6 = 1;
  sub_604755C4(a1 + 42520, a1 + 74440, &dword_60CA6718, (int)&dword_60CA65A0, &v6);
  if ( ((unsigned int)&dword_60CA6594[1] & ~(1615793388 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6594[1]) )
  {
    dword_60CA65A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA65AC = (int)"T_InvalidItem_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6594[1]);
  }
  v5 = 1;
  sub_60475334(a1 + 42520, a1 + 74444, &dword_60CA65A8, &v5);
  sub_6045BF58(a1 + 48184, 0);
  sub_609094C4(a1 + 48184, 240, 40, 5);
  sub_60402714(a1 + 56124, 0, 0, 0, 1, -1);
  sub_60402714(a1 + 59112, 1, 1, 0, 1, -1);
  sub_60402714(a1 + 62100, 3, 2, 0, 1, -1);
  sub_60402714(a1 + 65088, 2, 3, 0, 1, -1);
  sub_60402714(a1 + 68076, 6, 4, 0, 1, -1);
  return sub_60402714(a1 + 71064, 5, 5, 0, 1, -1);
}
