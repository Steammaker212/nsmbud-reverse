/* sub_609159DC
 * address: 0x609159DC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609159DC(int a1, int a2)
{
  signed __int64 v2; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 8) - (unsigned __int64)FIELD_U32(a2, 8);
  result = v2 != 0;
  if ( v2 < 0 )
    return -1;
  return result;
}
