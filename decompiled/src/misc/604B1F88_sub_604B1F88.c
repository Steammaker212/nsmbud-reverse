/* sub_604B1F88
 * address: 0x604B1F88   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B1F88(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // r12
  int v4; // r3
  float v5; // s2
  int v6; // r0
  int v7; // r1
  int result; // r0

  v3 = a1[1537];
  v4 = a1[1532];
  v5 = FIELD_F32(v3, 28) + FIELD_F32(v4, 28);
  *a2 = FIELD_F32(v3, 24) + FIELD_F32(v4, 24);
  a2[1] = v5;
  v6 = a1[1546];
  v7 = FIELD_U32(v6, 56);
  result = FIELD_U32(v6, 60);
  *a3 = v7;
  a3[1] = result;
  return result;
}
