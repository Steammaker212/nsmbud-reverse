/* sub_6050C0D0
 * address: 0x6050C0D0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6050C0D0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CA7FB0 & ~(1615905000 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA7FB0) )
  {
    dword_60CA7FAC = (int)&off_60BFF278;
    _cxa_guard_release(dword_60CA7FB0);
  }
  if ( a2 == &dword_60CA7FAC )
    return 1;
  if ( ((unsigned int)&dword_60CA7A7C & ~(1615905092 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CA7A7C) )
    {
      dword_60CA7A78 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CA7A7C);
    }
  }
  return a2 == &dword_60CA7A78;
}
