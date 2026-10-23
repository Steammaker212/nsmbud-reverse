/* sub_6053A91C
 * address: 0x6053A91C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053A91C(int a1)
{
  int result; // r0
  int v2; // r4

  result = FIELD_U32(a1, 16708);
  if ( (unsigned int)(result - 1) <= 2 )
  {
    v2 = 5;
    if ( result == 2 )
      v2 = 4;
    if ( result == 1 )
      v2 = 3;
    FIELD_U32(dword_60C99DEC, 508) = 0;
    FIELD_U8(dword_60CC6D8C, 17) = 1;
    sub_60826C38(dword_60CC6E04, v2);
    return sub_60828180(dword_60CC6E04, v2);
  }
  return result;
}
