/* sub_604201A4
 * address: 0x604201A4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604201A4(int a1)
{
  __int64 v2; // r2
  __int64 v3; // kr00_8
  int v4; // r0

  if ( FIELD_U8(a1, 188) )
  {
    v2 = qword_60CCFB50 % 1000;
    v3 = qword_60CCFB50 / 1000;
    do
      sub_609085CC(v3, HIDWORD(v3), v2, HIDWORD(v2));
    while ( FIELD_U8(a1, 188) );
  }
  v4 = FIELD_U32(a1, 4);
  if ( v4 )
  {
    sub_6041B220(v4);
    FIELD_U32(a1, 4) = 0;
  }
  return a1;
}
