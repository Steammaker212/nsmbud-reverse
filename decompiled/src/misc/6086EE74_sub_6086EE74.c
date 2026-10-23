/* sub_6086EE74
 * address: 0x6086EE74   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086EE74(int result)
{
  int v1; // r4
  int v2; // r5
  int v3; // r6
  int v4; // r5
  int v5; // r6

  v1 = result;
  v2 = FIELD_U16(result, 188);
  if ( FIELD_U16(result, 188) )
  {
    v3 = 0;
    do
    {
      result = sub_608709D8(FIELD_U32(v1, 40) + v3);
      v3 += 120;
      --v2;
    }
    while ( v2 );
  }
  v4 = FIELD_U16(v1, 192);
  if ( FIELD_U16(v1, 192) )
  {
    v5 = 0;
    do
    {
      result = sub_60870758(FIELD_U32(v1, 72) + v5);
      v5 += 120;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
