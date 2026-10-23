/* sub_604B607C
 * address: 0x604B607C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B607C(int a1)
{
  int result; // r0

  if ( FIELD_U32(a1, 3724) == 4 )
    sub_604B8C70(a1);
  else
    sub_604B8D34(a1);
  result = FIELD_U8(a1, 3776);
  if ( FIELD_U8(a1, 3776) )
    return sub_608169AC(dword_60CC6B68);
  return result;
}
