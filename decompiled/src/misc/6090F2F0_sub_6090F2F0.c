/* sub_6090F2F0
 * address: 0x6090F2F0   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6090F2F0(float *a1, float *a2, __int64 a3)
{
  float v3; // s2
  float v4; // s0
  float v5; // s16
  float v6; // s0
  int v7; // r5
  float v8; // s2
  float v9; // s0

  v3 = a1[1] - a2[1];
  v4 = *a1 - *a2;
  v5 = (float)((float)(v3 * a1[3]) + (float)(v4 * a1[2])) + (float)((float)(v3 * a1[3]) + (float)(v4 * a1[2]));
  v6 = (float)(v5 * v5) + (float)((float)((float)((float)(v3 * v3) + (float)(v4 * v4)) - (float)(a2[2] * a2[2])) * -4.0);
  if ( v6 <= 0.0 )
  {
    v7 = 0;
    if ( v5 > 0.0 )
      return v7;
    if ( v6 < -0.00000011921 )
      return v7;
    if ( v6 > 0.00000011921 )
      return v7;
    v7 = 1;
    if ( !(_DWORD)a3 )
      return v7;
    v9 = v5 * -0.5;
LABEL_17:
    *(float *)a3 = v9;
    return v7;
  }
  if ( v5 > 0.0 )
    return 0;
  if ( (float)(v5 * v5) < v6 )
  {
    v7 = 1;
    if ( !(_DWORD)a3 )
      return v7;
    v9 = (float)(sqrtf(v6) - v5) * 0.5;
    goto LABEL_17;
  }
  v7 = 2;
  if ( a3 )
  {
    v8 = sqrtf(v6);
    if ( (_DWORD)a3 )
      *(float *)a3 = (float)((float)-v5 - v8) * 0.5;
    if ( HIDWORD(a3) )
      *(float *)HIDWORD(a3) = (float)(v8 - v5) * 0.5;
  }
  return v7;
}
