/* sub_602931A8
 * address: 0x602931A8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602931A8(int a1)
{
  int v1; // r0

  v1 = **(_DWORD **)(FIELD_U32(a1, 7500) + 12);
  return (float)(FIELD_F32(v1, 8) + -10.0) < FIELD_F32(v1, 20);
}
