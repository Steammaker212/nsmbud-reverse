/* sub_6057E910
 * address: 0x6057E910   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6057E910(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CAEF24 & ~(1616374056 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CAEF24) )
  {
    dword_60CAEF20 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60CAEF24);
  }
  return a2 == &dword_60CAEF20 || sub_60026DC8(a2);
}
