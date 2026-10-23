/* sub_60421BCC
 * address: 0x60421BCC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60421BCC(int result, float a2)
{
  float v2; // s4
  float v3; // s0
  char v4; // r1
  float v5; // s2

  v2 = -a2;
  if ( a2 > 0.0 )
    v2 = a2;
  if ( v2 >= 0.001 )
  {
    v5 = 0.0;
    *(_DWORD *)result = 1065353216;
    v4 = 1;
    v3 = 1.0 / a2;
  }
  else
  {
    v3 = 0.0;
    v4 = 0;
    v5 = 1.0;
    *(_DWORD *)result = 0;
  }
  FIELD_F32(result, 4) = v5;
  FIELD_F32(result, 8) = v5;
  FIELD_F32(result, 12) = v3;
  FIELD_U8(result, 16) = v4;
  return result;
}
