/* sub_6041024C
 * address: 0x6041024C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041024C(int a1, _DWORD *a2)
{
  int v4; // r4

  v4 = a1 + 13300;
  sead__CriticalSection__lock(a1 + 13300);
  if ( !*a2 )
  {
    sub_604108F8(a1);
    sub_60410A24(a1);
    sub_60410B64(a1);
    sub_60410D1C(a1);
  }
  return sead__CriticalSection__unlock(v4);
}
