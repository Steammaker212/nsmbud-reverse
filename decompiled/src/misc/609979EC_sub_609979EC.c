/* sub_609979EC
 * address: 0x609979EC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609979EC(int a1)
{
  *(_DWORD *)a1 = off_60C608A4;
  FIELD_U32(a1, 4) = 0;
  sub_60919E88((_DWORD *)(a1 + 8));
  sub_6091ABEC((_DWORD *)(a1 + 72));
  FIELD_U16(a1, 416) = 0;
  FIELD_U16(a1, 418) = 0;
  FIELD_U16(a1, 420) = 5;
  FIELD_U8(a1, 422) = -1;
  return a1;
}
