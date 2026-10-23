/* sub_6068A7EC
 * address: 0x6068A7EC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068A7EC(int a1, _DWORD *a2, float a3, float a4)
{
  *(_DWORD *)a1 = &off_60C1742C;
  FIELD_U32(a1, 8) = *a2;
  FIELD_U32(a1, 12) = a2[1];
  FIELD_U32(a1, 16) = a2[2];
  FIELD_F32(a1, 100) = a3;
  FIELD_F32(a1, 104) = a4;
  memset((void *)(a1 + 20), 0, 80);
  return a1;
}
