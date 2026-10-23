/* sub_604BDF00
 * address: 0x604BDF00   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BDF00(int a1)
{
  int result; // r0
  int v2; // r12
  int v3; // t1
  int v4; // r1
  int v5; // r3

  v3 = FIELD_U32(a1, 9912);
  result = a1 + 9912;
  v2 = v3;
  v4 = 1;
  v5 = *(_DWORD *)(result - 4);
  if ( FIELD_U8(result, 25664) )
    v4 = v5 - 1;
  *(_DWORD *)result = (v4 + v2) % v5;
  return result;
}
