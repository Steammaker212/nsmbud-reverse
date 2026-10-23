/* sub_6085E2A4
 * address: 0x6085E2A4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085E2A4(_DWORD *a1)
{
  int v2; // r0
  int result; // r0
  bool v4; // zf

  v2 = a1[43];
  if ( v2 )
  {
    if ( a1[65] )
    {
      sub_6084A144(a1[65]);
      nullsub_1451();
      sub_60855BF0(a1[65]);
      a1[65] = 0;
      v2 = a1[43];
    }
    sub_60855BF0(v2);
    a1[43] = 0;
    a1[53] = 0;
  }
  result = a1[66];
  v4 = result == 0;
  if ( result )
  {
    result = FIELD_U32(result, 8);
    v4 = result == 0;
  }
  if ( !v4 )
  {
    sub_60855BF0(result);
    result = a1[66];
    FIELD_U32(result, 8) = 0;
  }
  return result;
}
