/* sub_601E1158
 * address: 0x601E1158   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601E1158(int a1)
{
  int v2; // r0
  int v3; // r0

  v2 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v3 = sub_60178780(v2, FIELD_U32(a1, 8));
  return sub_60178798(v3, (_DWORD *)a1) == 0;
}
