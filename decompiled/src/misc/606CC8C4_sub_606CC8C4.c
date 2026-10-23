/* sub_606CC8C4
 * address: 0x606CC8C4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CC8C4(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CBB290 & ~(1617742052 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CBB290) )
    {
      dword_60CBB28C = (int)&off_60C15488;
      _cxa_guard_release(&dword_60CBB290);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CBB28C)(&dword_60CBB28C, a2);
}
