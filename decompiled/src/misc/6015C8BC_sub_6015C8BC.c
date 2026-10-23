/* sub_6015C8BC
 * address: 0x6015C8BC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6015C8BC(int a1, float *a2, float a3)
{
  float v5; // s18
  float *v6; // r0
  float v7; // s0
  float v8; // s2
  float v10; // [sp+0h] [bp-20h] BYREF
  float v11; // [sp+4h] [bp-1Ch]

  v5 = FIELD_F32(a1, 364);
  sub_6015C588(a1, &v10, a2);
  v6 = *(float **)(a1 + 152);
  v7 = v6[1] + FIELD_F32(a1, 176);
  v8 = v10 - (float)((float)(*v6 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 348));
  return (float)((float)((float)(v11 - (float)(v7 + FIELD_F32(a1, 352)))
                       * (float)(v11 - (float)(v7 + FIELD_F32(a1, 352))))
               + (float)(v8 * v8)) <= (float)((float)(v5 + a3) * (float)(v5 + a3));
}
