/* sub_601E039C
 * address: 0x601E039C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E039C(int a1, unsigned int a2)
{
  int v4; // r0
  int v5; // r0

  v4 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v5 = sub_60178780(v4, FIELD_U32(a1, 8));
  return sub_60178694(v5, a2);
}
