/* sub_600D0BB4
 * address: 0x600D0BB4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D0BB4(int a1, float a2)
{
  int v2; // r1
  int v3; // r1
  float *v4; // r0
  float v5; // s2
  float v6; // s0

  v2 = 0;
  if ( !FIELD_U32(a1, 6792) )
  {
    FIELD_F32(a1, 100) = a2;
    v3 = byte_60AFE3F4[FIELD_U32(a1, 80)];
    v4 = (float *)(a1 + 6780);
    v5 = *v4 + (float)((float)((float)v3 * fabsf(a2)) * 200.0);
    v6 = -30.0;
    *v4 = v5;
    if ( v5 >= -30.0 )
    {
      v6 = v5;
      if ( v5 > 30.0 )
        v6 = 30.0;
    }
    v2 = 1;
    *v4 = v6;
  }
  return v2;
}
