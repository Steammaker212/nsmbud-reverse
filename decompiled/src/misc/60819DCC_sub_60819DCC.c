/* sub_60819DCC
 * address: 0x60819DCC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60819DCC(int a1)
{
  int result; // r0
  __int64 v3; // r2
  __int64 v4; // kr00_8

  ++FIELD_U32(a1, 28);
  FIELD_U8(a1, 32) = 0;
  result = FIELD_U32(a1, 20);
  if ( result == 1 )
  {
    FIELD_U32(a1, 24) = 2;
    v3 = qword_60CCFB50 % 1000;
    v4 = qword_60CCFB50 / 1000;
    do
    {
      sub_609085CC(v4, HIDWORD(v4), v3, HIDWORD(v3));
      result = FIELD_U32(a1, 20);
    }
    while ( result == 1 );
  }
  return result;
}
