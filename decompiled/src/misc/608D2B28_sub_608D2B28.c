/* sub_608D2B28
 * address: 0x608D2B28   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2B28(int result, _QWORD *a2, int *a3, _DWORD *a4)
{
  int v4; // r1
  int v5; // r2

  *(_QWORD *)result = *a2;
  v4 = a3[1];
  v5 = *a3;
  FIELD_U32(result, 12) = v4;
  FIELD_U32(result, 8) = v5;
  FIELD_U32(result, 16) = *a4;
  FIELD_U32(result, 20) = a4[1];
  FIELD_U32(result, 24) = a4[2];
  FIELD_U32(result, 28) = a4[3];
  return result;
}
