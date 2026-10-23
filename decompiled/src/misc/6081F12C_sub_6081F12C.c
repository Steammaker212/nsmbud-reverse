/* sub_6081F12C
 * address: 0x6081F12C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F12C(int result)
{
  int v1; // r1
  bool v2; // cc
  int v3; // r1

  v1 = FIELD_U32(result, 516);
  v2 = v1 < 1;
  v3 = v1 - 1;
  if ( v2 )
    v3 = 0;
  FIELD_U32(result, 516) = v3;
  return result;
}
