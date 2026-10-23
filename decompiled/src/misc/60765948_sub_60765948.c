/* sub_60765948
 * address: 0x60765948   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60765948(int result, int a2, int a3)
{
  FIELD_U32(result, 9620) = FIELD_U32(a2, 8);
  FIELD_U32(result, 9616) = a3;
  return result;
}
