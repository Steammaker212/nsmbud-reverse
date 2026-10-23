/* sub_6060E358
 * address: 0x6060E358   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060E358(int a1, int a2)
{
  int v2; // r4
  int v3; // r1

  v2 = FIELD_U32(a1, 144);
  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  return sub_6060E48C(v2, v3);
}
