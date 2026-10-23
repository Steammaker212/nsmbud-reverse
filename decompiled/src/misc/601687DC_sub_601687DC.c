/* sub_601687DC
 * address: 0x601687DC   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601687DC(int result, int a2, int a3)
{
  int v3; // r1

  v3 = FIELD_U32(result, 176) + a2;
  FIELD_U32(result, 176) = v3;
  if ( a3 == 1 )
    FIELD_U32(result, 188) = v3;
  return result;
}
