/* sub_606DF470
 * address: 0x606DF470   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DF470(int a1, int a2, float a3, float a4, float a5)
{
  FIELD_F32(a1, 28) = a3;
  FIELD_F32(a1, 32) = a4;
  *(_DWORD *)a1 = a2;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 4) = 0;
  return sub_606DF4A4(a1, a2, a5);
}
