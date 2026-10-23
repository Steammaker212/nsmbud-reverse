/* sub_609478D8
 * address: 0x609478D8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609478D8(_DWORD *a1, int a2, _DWORD *a3, float a4)
{
  int v5; // r2
  int v6; // r1

  v5 = a2;
  if ( a2 && a4 <= 0.0 )
  {
    a4 = 0.0;
    v6 = 0;
    a3 = 0;
  }
  else if ( a4 >= 1.0 && a3 )
  {
    a4 = 0.0;
    v5 = (int)a3;
    v6 = 0;
    a3 = 0;
  }
  else
  {
    v6 = 1;
  }
  return sub_609473AC(a1, (_DWORD *)v6, v5, a3, a4);
}
