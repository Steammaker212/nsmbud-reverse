/* sub_609749E8
 * address: 0x609749E8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609749E8(_DWORD *a1)
{
  _DWORD *v2; // r7
  _DWORD *v3; // r6
  int v4; // r1
  int v5; // r5
  int v6; // r1
  int v7; // r1

  if ( (a1[588] & 4) != 0 )
  {
    v3 = a1 + 3;
    v4 = a1[3];
    v5 = dword_60CD09F8;
    if ( v4 )
    {
      sub_6093EA98(dword_60CD09F8, v4);
      *v3 = 0;
    }
    v2 = a1 + 4;
    v6 = a1[4];
    if ( v6 )
    {
      sub_6093EA98(v5, v6);
      *v2 = 0;
    }
    v7 = a1[416];
    if ( v7 )
    {
      sub_6093EA98(v5, v7);
      a1[416] = 0;
    }
    a1[588] &= ~4u;
  }
  else
  {
    v2 = a1 + 4;
    v3 = a1 + 3;
  }
  *v3 = 0;
  *v2 = 0;
  return 0;
}
