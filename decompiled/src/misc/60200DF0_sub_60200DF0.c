/* sub_60200DF0
 * address: 0x60200DF0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60200DF0(int a1)
{
  int v1; // r1

  v1 = FIELD_U32(a1, 180);
  if ( v1 == FIELD_U32(a1, 192) )
  {
    v1 += FIELD_U32(a1, 348);
    FIELD_U32(a1, 180) = v1;
  }
  FIELD_U32(a1, 192) = v1;
  return sub_60168EA0(a1);
}
