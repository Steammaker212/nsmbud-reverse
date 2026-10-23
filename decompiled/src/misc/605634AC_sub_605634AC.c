/* sub_605634AC
 * address: 0x605634AC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605634AC(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CAE2F4 & ~(1616262348 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CAE2F4) )
    {
      dword_60CAE2F0 = (int)&off_60BD48F8;
      _cxa_guard_release(&dword_60CAE2F4);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CAE2F0)(&dword_60CAE2F0, a2);
}
