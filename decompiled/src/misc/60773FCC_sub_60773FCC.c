/* sub_60773FCC
 * address: 0x60773FCC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__guard __fastcall sub_60773FCC(int a1, int a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CBFA80 & ~(1618427876 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBFA80) )
  {
    dword_60CBFA80[1] = 1085672288;
    dword_60CBFA80[2] = -1085672288;
    _cxa_guard_release(dword_60CBFA80);
  }
  return dword_60CBFA80[a2 + 1];
}
