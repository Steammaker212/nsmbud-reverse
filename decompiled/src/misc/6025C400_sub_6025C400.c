/* sub_6025C400
 * address: 0x6025C400   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025C400(int result)
{
  int v1; // r1

  v1 = **(_DWORD **)(FIELD_U32(result, 6352) + 28);
  FIELD_U32(v1, 20) = 0;
  FIELD_U32(v1, 28) |= 2u;
  FIELD_U8(result, 84) = -1;
  FIELD_U32(result, 6464) = 0;
  return result;
}
