/* sub_6063D458
 * address: 0x6063D458   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063D458(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)dword_60CB5594 & ~(1617155192 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CB5594) )
    {
      dword_60CB5590 = (int)&off_60C12DF0;
      _cxa_guard_release(dword_60CB5594);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CB5590)(&dword_60CB5590, a2);
}
