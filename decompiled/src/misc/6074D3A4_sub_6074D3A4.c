/* sub_6074D3A4
 * address: 0x6074D3A4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074D3A4(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)dword_60CBE950 & ~(1618269124 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CBE950) )
    {
      dword_60CBE94C = (int)&off_60BC00BC;
      _cxa_guard_release(dword_60CBE950);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CBE94C)(&dword_60CBE94C, a2);
}
