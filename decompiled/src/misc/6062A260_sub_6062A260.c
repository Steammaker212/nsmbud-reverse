/* sub_6062A260
 * address: 0x6062A260   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6062A260()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB3D88 & ~(1617076852 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB3D88) )
  {
    dword_60CB3D84 = (int)&off_60BDE36C;
    _cxa_guard_release(dword_60CB3D88);
  }
  return &dword_60CB3D84;
}
