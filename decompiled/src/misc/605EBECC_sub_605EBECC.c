/* sub_605EBECC
 * address: 0x605EBECC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EBECC(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CB1D4C & ~(1616821996 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB1D4C) )
    {
      dword_60CB1D48 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB1D4C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CB1D48)(&dword_60CB1D48, a2);
}
