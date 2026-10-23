/* sub_607DF9E4
 * address: 0x607DF9E4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607DF9E4()
{
  int result; // r0
  __int64 v1; // r2
  __int64 v2; // r4

  sub_608292BC(dword_60CC6E04);
  result = FIELD_U32(dword_60CC6E04, 24);
  if ( result == 1 )
  {
    v1 = qword_60CCFB50 % 100;
    v2 = qword_60CCFB50 / 100;
    do
    {
      sub_609085CC(v2, HIDWORD(v2), v1, HIDWORD(v1));
      result = FIELD_U32(dword_60CC6E04, 24);
    }
    while ( result == 1 );
  }
  return result;
}
