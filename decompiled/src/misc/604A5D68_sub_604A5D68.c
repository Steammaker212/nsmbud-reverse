/* sub_604A5D68
 * address: 0x604A5D68   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A5D68(int a1, unsigned int a2)
{
  char v2; // r12
  unsigned int v5; // r0

  if ( ((unsigned int)&dword_60CA13D0 & ~(1615486344 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA13D0) )
  {
    dword_60CA1430[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA1434 = dword_60CA128C;
    dword_60CA1438 = (int)&sead__SafeStringBase__vtable;
    dword_60CA143C = dword_60CA1294;
    dword_60CA1440 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1444 = dword_60CA129C;
    dword_60CA1448 = (int)&sead__SafeStringBase__vtable;
    dword_60CA144C = dword_60CA12A4;
    dword_60CA1450 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1454 = dword_60CA127C;
    dword_60CA1458 = (int)&sead__SafeStringBase__vtable;
    dword_60CA145C = dword_60CA1284;
    dword_60CA1460 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1464 = dword_60CA12AC;
    sub_60000288();
    _cxa_guard_release(&dword_60CA13D0);
  }
  v5 = 0;
  if ( a2 < 7 )
    v5 = a2;
  return sub_6047467C((_DWORD *)(a1 + 48), 9u, &dword_60CA1430[2 * v5], (int)&dword_60CA1378, 1.0, 0);
}
