/* sub_60648188
 * address: 0x60648188   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60648188()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB5F9C & ~(1617199516 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5F9C) )
  {
    dword_60CB5F98 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB5F9C);
  }
  return &dword_60CB5F98;
}
