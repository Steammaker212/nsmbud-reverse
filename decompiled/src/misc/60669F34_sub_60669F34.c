/* sub_60669F34
 * address: 0x60669F34   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60669F34(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CB6CEC & ~(1617338188 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB6CEC) )
  {
    dword_60CB6CE8 = (int)&off_60BCFCD8;
    _cxa_guard_release(dword_60CB6CEC);
  }
  return a2 == &dword_60CB6CE8 || sub_60027FB0(a2);
}
