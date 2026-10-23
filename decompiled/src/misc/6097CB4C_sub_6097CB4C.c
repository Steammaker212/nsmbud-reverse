/* sub_6097CB4C
 * address: 0x6097CB4C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097CB4C(float32x4_t *a1, int a2, int a3, int a4, float32x2_t a5)
{
  bool v9; // zf

  if ( a1[11].n128_u8[1] )
  {
    v9 = (a1[4].n128_u8[0] & 1) == 0;
    if ( (a1[4].n128_u8[0] & 1) != 0 )
      v9 = a1[4].n128_u8[1] == 0;
    if ( !v9 )
    {
      ((void (__fastcall *)(float32x4_t *))loc_6097CBA8)(a1);
      a1[11].n128_u8[1] = 0;
    }
  }
  return sub_60858D50(a1, a2, a3, a4, a5);
}
