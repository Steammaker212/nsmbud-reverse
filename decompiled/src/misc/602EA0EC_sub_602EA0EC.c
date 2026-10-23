/* sub_602EA0EC
 * address: 0x602EA0EC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EA0EC(int result)
{
  unsigned int v1; // r2

  FIELD_U32(result, 3196) &= 0xFFFFFFFC;
  v1 = FIELD_U32(result, 3188) & 0xFFFFFFFC;
  FIELD_U32(result, 3180) &= 0xFFFFFFFC;
  FIELD_U32(result, 3188) = v1;
  FIELD_U32(result, 3204) &= 0xFFFFFFFC;
  FIELD_U8(result, 7524) = 0;
  return result;
}
