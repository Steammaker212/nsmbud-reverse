/* sub_609A8C60
 * address: 0x609A8C60   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A8C60(int a1, _DWORD *a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r2
  int result; // r0
  int v6; // r2
  int v7; // r3

  v2 = FIELD_U32(a1, 176);
  v3 = a2[1];
  v4 = a2[3];
  if ( v4 >= v3 << v2 )
    v4 = v3 << v2;
  a2[1] = v4;
  result = FIELD_U32(a1, 176);
  v6 = a2[2];
  v7 = a2[4];
  if ( v7 >= v6 << result )
    v7 = v6 << result;
  a2[2] = v7;
  return result;
}
