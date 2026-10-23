/* sub_60401ED4
 * address: 0x60401ED4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60401ED4(int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r5
  int result; // r0

  v1 = a1;
  v2 = 0;
  v3 = a1 + 89816;
  do
  {
    sub_60542D18(v1 + 16);
    result = sub_60543288(v3);
    if ( v2 >= 17 )
    {
      FIELD_U8(v1, 3603) = 1;
      if ( v2 <= 22 )
        FIELD_U8(v3, 3584) = 1;
      else
        FIELD_U8(v3, 3583) = 1;
    }
    ++v2;
    v3 += 3588;
    v1 += 3592;
  }
  while ( v2 != 25 );
  return result;
}
