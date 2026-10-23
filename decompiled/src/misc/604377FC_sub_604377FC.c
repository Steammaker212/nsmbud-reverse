/* sub_604377FC
 * address: 0x604377FC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604377FC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9CA34 & ~(1615034388 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CA34) )
  {
    dword_60C9CA30 = (int)&off_60BFA90C;
    _cxa_guard_release(&dword_60C9CA34);
  }
  if ( a2 != &dword_60C9CA30 )
    JUMPOUT(0x60436864);
  return 1;
}
