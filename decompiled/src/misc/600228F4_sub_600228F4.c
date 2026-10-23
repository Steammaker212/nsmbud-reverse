/* sub_600228F4
 * address: 0x600228F4   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600228F4(int a1, int a2, int a3)
{
  int v5; // r0

  if ( a3 == 8 )
  {
    v5 = sub_60407E74(dword_60C9A1E8, a2, 25, -1, 0, 0);
    return sub_60021C70(v5, 1);
  }
  else
  {
    sub_603FBA2C(dword_60C99DD4, dword_60AF5088[a3], -1);
    return sub_60407E74(dword_60C9A1E8, a2, dword_60AF5060[a3], -1, 0, 0);
  }
}
