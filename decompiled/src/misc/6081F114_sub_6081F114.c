/* sub_6081F114
 * address: 0x6081F114   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F114(int result)
{
  int v1; // r1
  int v2; // r2

  v1 = FIELD_U32(result, 516);
  v2 = v1 + 1;
  if ( v1 > 1 )
    v2 = 2;
  FIELD_U32(result, 516) = v2;
  return result;
}
