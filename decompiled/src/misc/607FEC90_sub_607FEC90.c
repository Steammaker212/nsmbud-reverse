/* sub_607FEC90
 * address: 0x607FEC90   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607FEC90(int a1, float *a2, float *a3, int a4, float a5, float a6)
{
  int v12; // r0
  float v13; // s4
  float v14; // s16
  float v15; // s0
  float v16; // s0

  v12 = sub_60804418(a4);
  sub_60804D64(v12, 0);
  v13 = (float)((float)(a6 - ((float (__fastcall *)(int))loc_608039A4)(a4)) * 0.5) + 1.0;
  *a2 = a5 - (float)(FIELD_F32(a1, 20) * v13);
  v14 = (float)(a5 + (float)(a6 * -224.0)) + (float)(FIELD_F32(a1, 24) * v13);
  *a3 = v14;
  v15 = (float)(*a2 + v14) * 0.5;
  if ( *a2 < (float)(v15 + 16.0) )
  {
    *a2 = v15 + 16.0;
    v14 = *a3;
  }
  v16 = v15 + -16.0;
  if ( v14 > v16 )
    *a3 = v16;
}
