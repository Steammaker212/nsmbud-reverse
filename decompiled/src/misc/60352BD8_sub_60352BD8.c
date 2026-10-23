/* sub_60352BD8
 * address: 0x60352BD8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60352BD8(int a1)
{
  float v2; // s22
  int i; // r0
  float v4; // s0
  float v5; // s4
  float v6; // s2
  float v7; // s22
  int result; // r0
  float v9; // s0
  float v10; // s4
  float v11; // s2

  v2 = FIELD_F32(a1, 108);
  for ( i = sub_60351954(FIELD_U32(a1, 6308)); i; i = sub_60351954(FIELD_U32(i, 6308)) )
  {
    v4 = FIELD_F32(i, 108);
    v5 = (float)(v2 + 24.0) - v4;
    v6 = -3.0;
    if ( v5 >= -3.0 )
    {
      v6 = (float)(v2 + 24.0) - v4;
      if ( v5 > 3.0 )
        v6 = 3.0;
    }
    FIELD_F32(i, 120) = v6;
    v2 = v4 + v6;
  }
  v7 = FIELD_F32(a1, 108);
  for ( result = sub_60351954(FIELD_U32(a1, 6312)); result; result = sub_60351954(FIELD_U32(result, 6312)) )
  {
    v9 = FIELD_F32(result, 108);
    v10 = (float)(v7 + -24.0) - v9;
    v11 = -3.0;
    if ( v10 >= -3.0 )
    {
      v11 = (float)(v7 + -24.0) - v9;
      if ( v10 > 3.0 )
        v11 = 3.0;
    }
    FIELD_F32(result, 120) = v11;
    v7 = v9 + v11;
  }
  return result;
}
