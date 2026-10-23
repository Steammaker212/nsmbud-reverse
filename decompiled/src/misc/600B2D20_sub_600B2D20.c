/* sub_600B2D20
 * address: 0x600B2D20   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600B2D20(int a1)
{
  float v2; // s0
  unsigned int v3; // r1
  float v4; // s2
  unsigned int v5; // r2
  float v6; // s6
  float v7; // s4
  float v9; // s2

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1148))(a1);
  v3 = FIELD_U32(a1, 80);
  v4 = FIELD_F32(a1, 108);
  v5 = v3;
  if ( v3 >= 2 )
    v5 = 0;
  v6 = v4 + (float)((float)(v2 + 4.0) * (float)byte_60AFE3F4[v3]);
  v7 = FIELD_F32(dword_60CC6484, 116) + *(float *)(a1 + 4 * v5 + 7488);
  if ( v3 )
  {
    if ( v6 > v7 )
      return 1.0;
  }
  else if ( v6 < v7 )
  {
    return 1.0;
  }
  v9 = fabsf(v7 - v4);
  if ( v9 >= 16.0 )
    return v9 / v2;
  else
    return -1.0;
}
