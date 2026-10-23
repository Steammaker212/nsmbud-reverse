/* sub_604ED694
 * address: 0x604ED694   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ED694(int a1, unsigned int a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CA6160[2] & ~(1615779508 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6160[2]) )
  {
    dword_60CA6174 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6178 = (int)off_60BFECB0;
    dword_60CA617C = (int)&sead__SafeStringBase__vtable;
    dword_60CA6180 = (int)off_60BFECB8;
    sub_60000288();
    _cxa_guard_release(&dword_60CA6160[2]);
  }
  if ( a2 >= 2 )
    a2 = 0;
  sub_60473DE4((_DWORD *)a1, 0, &dword_60CA6160[2 * a2 + 5], 0);
  FIELD_U8(a1, 3584) = 1;
  return 1;
}
