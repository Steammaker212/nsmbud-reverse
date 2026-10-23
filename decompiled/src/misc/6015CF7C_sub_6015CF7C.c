/* sub_6015CF7C
 * address: 0x6015CF7C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015CF7C(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1612042140 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C88A68) )
    {
      dword_60C88A64 = (int)&off_60BD4904;
      _cxa_guard_release(&dword_60C88A68);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C88A64)(&dword_60C88A64, a2);
}
