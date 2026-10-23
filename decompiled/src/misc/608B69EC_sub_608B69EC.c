/* sub_608B69EC
 * address: 0x608B69EC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608B69EC(int a1)
{
  float v1; // s0
  int v2; // r1
  int v3; // r2
  float v4; // s2
  int v5; // r1
  int v6; // r2

  v1 = FIELD_F32(a1, 144);
  v2 = FIELD_U32(a1, 148);
  v3 = FIELD_U32(a1, 152);
  if ( v3 < v2 )
    v1 = FIELD_F32(a1, 140) + (float)((float)((float)v3 * (float)(v1 - FIELD_F32(a1, 140))) / (float)v2);
  v4 = FIELD_F32(a1, 160);
  v5 = FIELD_U32(a1, 164);
  v6 = FIELD_U32(a1, 168);
  if ( v6 < v5 )
    v4 = FIELD_F32(a1, 156) + (float)((float)((float)v6 * (float)(v4 - FIELD_F32(a1, 156))) / (float)v5);
  return v1 * v4;
}
