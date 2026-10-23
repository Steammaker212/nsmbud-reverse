/* sub_600B2DF0
 * address: 0x600B2DF0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600B2DF0(int a1, float a2)
{
  int v2; // r3
  unsigned int v3; // r2
  float v4; // s2
  float v5; // s0

  v2 = 0;
  v3 = FIELD_U32(a1, 80);
  if ( v3 < 2 )
    v2 = FIELD_U32(a1, 80);
  v4 = FIELD_F32(a1, 108) + (float)((float)byte_60AFE3F4[v3] * a2);
  v5 = FIELD_F32(dword_60CC6484, 116) + *(float *)(a1 + 4 * v2 + 7488);
  if ( v3 )
    return v4 <= v5;
  else
    return v4 >= v5;
}
