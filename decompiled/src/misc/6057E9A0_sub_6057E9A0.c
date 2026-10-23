/* sub_6057E9A0
 * address: 0x6057E9A0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6057E9A0()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CAEF24 & ~(1616374196 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CAEF24) )
  {
    dword_60CAEF20 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60CAEF24);
  }
  return &dword_60CAEF20;
}
