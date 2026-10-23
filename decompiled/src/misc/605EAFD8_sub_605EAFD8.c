/* sub_605EAFD8
 * address: 0x605EAFD8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EAFD8(int result, float a2)
{
  int v2; // r4
  int v4; // r5

  v2 = result;
  if ( (float)(FIELD_F32(result, 24) * a2) <= 0.0 )
  {
    v4 = FIELD_U32(result, 20);
    sub_6041838C((ModelAnimation *)(result + 4));
    FIELD_U32(v2, 20) = v4;
    result = FIELD_U32(v2, 28) | 2;
    FIELD_U32(v2, 28) = result;
  }
  FIELD_F32(v2, 24) = a2;
  return result;
}
