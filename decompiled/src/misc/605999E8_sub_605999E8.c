/* sub_605999E8
 * address: 0x605999E8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605999E8(int a1)
{
  int v2; // r2
  _BOOL4 result; // r0

  v2 = FIELD_U32(a1, 6260);
  result = 0;
  if ( (v2 & 0x20000) != 0 )
    return (v2 & 0x400000) == 0 || FIELD_U32(a1, 13468) == 0;
  return result;
}
