/* sub_608908F8
 * address: 0x608908F8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608908F8(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r6

  result = FIELD_U32(a1, 4);
  if ( result >= 1 )
  {
    v3 = 0;
    v4 = 272;
    do
    {
      sub_60895C80(FIELD_U32(a1, 8) + v4);
      result = FIELD_U32(a1, 4);
      ++v3;
      v4 += 2416;
    }
    while ( v3 < result );
  }
  return result;
}
