/* sub_601DA4F4
 * address: 0x601DA4F4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601DA4F4(int a1)
{
  int v2; // r0

  v2 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  return sub_60183054(v2, FIELD_U32(a1, 8), 0x10000000) != 0;
}
