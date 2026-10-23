/* sub_605E3EFC
 * address: 0x605E3EFC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E3EFC(int result)
{
  int v1; // r2
  int v2; // r2

  v1 = FIELD_U32(result, 6660);
  if ( !v1 || (v2 = v1 - 1, (FIELD_U32(result, 6660) = v2) == 0) )
    FIELD_U32(result, 6664) = 0;
  return result;
}
