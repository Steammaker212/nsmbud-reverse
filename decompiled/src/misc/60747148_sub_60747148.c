/* sub_60747148
 * address: 0x60747148   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60747148(int a1, float *a2, int a3)
{
  int v3; // r12
  int *v4; // r3
  float v5; // s0
  float v6; // s2
  float v7; // s4

  v3 = 0;
  if ( FIELD_U8(a1, 708) && !FIELD_U32(a1, 724) )
  {
    v4 = dword_607471D4;
    v5 = *a2;
    v6 = FIELD_F32(a1, 108);
    if ( !a3 )
      v4 = &dword_607471D4[1];
    v7 = FIELD_F32(a1, 112) - a2[1];
    if ( (float)((float)(v7 * v7) + (float)((float)(v6 - v5) * (float)(v6 - v5))) <= *(float *)v4 )
    {
      v3 = 1;
      FIELD_U32(a1, 80) = v6 < v5;
      FIELD_U32(a1, 720) = 286331153;
      FIELD_U32(a1, 724) = 45;
    }
  }
  return v3;
}
