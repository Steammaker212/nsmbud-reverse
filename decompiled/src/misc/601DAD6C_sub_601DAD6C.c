/* sub_601DAD6C
 * address: 0x601DAD6C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601DAD6C(int a1)
{
  int v2; // r0

  v2 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  return sub_6018301C(v2, FIELD_U32(a1, 8), 0x20000) != 0;
}
