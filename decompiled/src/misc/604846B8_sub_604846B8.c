/* sub_604846B8
 * address: 0x604846B8   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604846B8(int a1)
{
  char v1; // r12
  int v3; // r0
  _DWORD *v4; // r4
  unsigned int result; // r0

  if ( ((unsigned int)&dword_60C9F100[3] & ~(1615349464 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9F100[3]) )
  {
    dword_60C9F190 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F194 = (int)"G_AllComplete_00";
    dword_60C9F198 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F19C = (int)"G_GoldComplete_00";
    dword_60C9F1A0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1A4 = (int)"G_SilverComplete_00";
    dword_60C9F1A8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1AC = (int)"G_BronzeComplete_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9F100[3]);
  }
  v3 = FIELD_U32(a1, 3648);
  v4 = (_DWORD *)(a1 + 40);
  result = sub_604746E4((int)v4, &dword_60C9F008, &dword_60C9F170[2 * v3 + 8]);
  if ( result != -1 )
    return sub_604742D0(v4, 0, &dword_60C9F010, result, 1.0, 0);
  return result;
}
