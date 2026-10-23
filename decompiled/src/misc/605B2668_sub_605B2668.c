/* sub_605B2668
 * address: 0x605B2668   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605B2668()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB0464 & ~(1616586364 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB0464) )
  {
    dword_60CB0460 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60CB0464);
  }
  return &dword_60CB0460;
}
