/* sub_607C8CA0
 * address: 0x607C8CA0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C8CA0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9D3D4 & ~(1618775224 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
  {
    dword_60C9D3D0 = (int)&off_60BFB878;
    _cxa_guard_release(&dword_60C9D3D4);
  }
  if ( a2 != &dword_60C9D3D0 )
    JUMPOUT(0x60797DDC);
  return 1;
}
