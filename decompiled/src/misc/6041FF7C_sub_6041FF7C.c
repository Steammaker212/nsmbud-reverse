/* sub_6041FF7C
 * address: 0x6041FF7C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041FF7C(_DWORD *a1)
{
  int v1; // r1
  int result; // r0

  v1 = a1[8];
  *a1 = FIELD_U32(v1, 4);
  FIELD_U32(v1, 4) = a1;
  result = FIELD_U32(v1, 12) - 1;
  FIELD_U32(v1, 12) = result;
  return result;
}
