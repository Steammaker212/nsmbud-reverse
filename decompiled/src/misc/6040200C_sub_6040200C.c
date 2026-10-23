/* sub_6040200C
 * address: 0x6040200C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040200C(int result, int a2, unsigned int a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r5

  v3 = a3;
  if ( a2 )
  {
    if ( a3 - 19 < 4 )
      return sub_60543658(result + 3588 * a3 + 89816);
    if ( a3 == 25 )
      return result;
    if ( a3 == 10 )
    {
      return sub_60543658(result + 3588 * a3 + 89816);
    }
    else
    {
      if ( a3 >= 0x19 )
        a3 = 0;
      v4 = result + 3592 * a3;
      result = sub_605430CC(v4 + 16);
      if ( v3 == 6 )
      {
        FIELD_U8(v4, 3605) = 1;
        return 1;
      }
    }
  }
  return result;
}
