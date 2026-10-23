/* sub_6050CF24
 * address: 0x6050CF24   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050CF24(_DWORD *a1, int a2, _DWORD *a3)
{
  char v6; // r12
  int v8; // [sp+4h] [bp-14h] BYREF

  sub_604734E4(a1, 0);
  sub_60476388(a1, a2, a3);
  if ( ((unsigned int)&dword_60CA803C & ~(1615908708 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA803C) )
  {
    dword_60CA8040 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8044 = (int)off_60BFF6AC;
    sub_60000288();
    _cxa_guard_release(&dword_60CA803C);
  }
  v8 = 1;
  sub_60474848((int)a1, &dword_60CA8040, &v8);
  return sub_6050D0AC(a1);
}
