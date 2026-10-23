/* sub_60690A90
 * address: 0x60690A90   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60690A90(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CB8FCC & ~(1617496752 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB8FCC) )
    {
      dword_60CB8FC8 = (int)&off_60C1777C;
      _cxa_guard_release(&dword_60CB8FCC);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CB8FC8)(&dword_60CB8FC8, a2);
}
