/* sub_6023FEE4
 * address: 0x6023FEE4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023FEE4(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4
  int v4; // r5

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)dword_60C8DB00 & ~(1612971772 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8DB00) )
  {
    dword_60C8DAFC = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DB00);
  }
  v4 = 0;
  if ( v3 && (**v3)(v3, &dword_60C8DAFC) == 1 )
  {
    sub_6023FA9C((int)v3);
    return 1;
  }
  return v4;
}
