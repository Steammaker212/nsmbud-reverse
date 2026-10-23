/* sub_60849C9C
 * address: 0x60849C9C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60849C9C(int a1, int a2)
{
  unsigned int v3; // r0
  float v4; // s0
  int v5; // r2
  float v6; // s16
  float v7; // s2

  v3 = FIELD_U16(a2, 8);
  v4 = FIELD_F32(a1, 12);
  v5 = FIELD_S16(a2, 4);
  if ( FIELD_U8(a1, 48) )
  {
    v6 = FIELD_F32(a1, 32);
    v7 = (float)(v4 * (float)v5) + (float)((float)(v6 - (float)((float)v3 * v4)) * 0.5);
  }
  else
  {
    v6 = (float)v3 * v4;
    v7 = v4 * (float)v5;
  }
  ((void (__fastcall *)(int, float))loc_60849D30)(a1, v7 + FIELD_F32(a1, 20));
  FIELD_F32(a1, 20) = v6 + FIELD_F32(a1, 20);
  return v6;
}
