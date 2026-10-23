/* N_Pack_00_ref
 * address: 0x60508680   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall N_Pack_00_ref(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  char v9; // r12
  int v11; // [sp+0h] [bp-20h] BYREF
  int v12[7]; // [sp+4h] [bp-1Ch] BYREF

  a1[933] = a4;
  a1[932] = a5;
  a1[936] = a6;
  a1[931] = FIELD_U32(a2, 16);
  sub_604734E4(a1 + 10, 0);
  sub_60476388(a1 + 10, a2, a3);
  v11 = 14;
  sub_60474848((int)(a1 + 10), dword_60CA7C40, &v11);
  sub_605087C0(a1);
  if ( ((unsigned int)&dword_60CA7B4C & ~(1615890188 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7B4C) )
  {
    dword_60CA7B50 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7B54 = (int)"N_Pack_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7B4C);
  }
  v12[0] = 1;
  return sub_6047518C((int)(a1 + 10), (int)(a1 + 930), &dword_60CA7B50, v12);
}
