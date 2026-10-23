/* sub_6092166C
 * address: 0x6092166C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092166C(int result, _DWORD *a2)
{
  FIELD_U32(result, 4) = a2[1];
  FIELD_U32(result, 12) = a2[3];
  FIELD_U32(result, 16) = a2[4];
  FIELD_U8(result, 38) &= ~1u;
  return result;
}
