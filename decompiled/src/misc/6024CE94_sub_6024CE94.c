/* sub_6024CE94
 * address: 0x6024CE94   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024CE94(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C8DD4C & ~(1613024948 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8DD4C) )
    {
      dword_60C8DD48 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DD4C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C8DD48)(&dword_60C8DD48, a2);
}
