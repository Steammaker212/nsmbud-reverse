/* sub_607477B0
 * address: 0x607477B0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607477B0(int a1)
{
  int v1; // r2
  int v2; // r1
  bool v3; // zf
  int v4; // r1
  float result; // s0

  v1 = 357913941;
  FIELD_U32(a1, 776) = dword_60CBE6A4;
  FIELD_U32(a1, 784) = FIELD_U32(a1, 652);
  v2 = FIELD_U32(a1, 80);
  v3 = v2 == 1;
  v4 = byte_60B0A5B0[v2];
  if ( v3 )
    v1 = -357913941;
  FIELD_U32(a1, 160) = v1;
  result = (float)v4 + (float)v4;
  FIELD_F32(a1, 120) = result;
  return result;
}
