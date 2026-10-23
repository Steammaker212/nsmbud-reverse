/* sub_608D3D58
 * address: 0x608D3D58   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608D3D58()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC9858 & ~(1619869036 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC9858) )
  {
    dword_60CC985C = (int)&dword_60CC985C;
    dword_60CC9860 = (int)&dword_60CC985C;
    _cxa_guard_release(&dword_60CC9858);
  }
  return &dword_60CC985C;
}
