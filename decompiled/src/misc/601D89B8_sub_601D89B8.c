/* sub_601D89B8
 * address: 0x601D89B8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float sub_601D89B8()
{
  unsigned int v0; // r10
  float *v1; // r0
  float v2; // s16
  float v3; // r11
  float v4; // r8
  float i; // r4
  int v6; // r6
  int v7; // r0
  float v8; // r7
  float v9; // r5
  float v10; // r9
  _DWORD v12[3]; // [sp+0h] [bp-48h] BYREF
  _DWORD v13[15]; // [sp+Ch] [bp-3Ch] BYREF

  v0 = FIELD_U32(dword_60CC6D78, 492);
  v13[0] = FIELD_U32(dword_60CC6D78, 480);
  v13[1] = FIELD_U32(dword_60CC6D78, 484);
  v13[2] = FIELD_U32(dword_60CC6D78, 488);
  memset(v12, 255, sizeof(v12));
  v1 = (float *)sub_601E0040(v13);
  v2 = 0.0;
  v3 = *v1;
  v4 = v1[1];
  for ( i = v1[2]; ; i = v10 )
  {
    v6 = sub_601D84D4((int)v1, (int)v13, v0, v12);
    v7 = sub_601E0040(v12);
    v8 = *(float *)v7;
    v9 = FIELD_F32(v7, 4);
    v10 = FIELD_F32(v7, 8);
    v2 = v2
       + sqrtf(
           (float)((float)((float)(v4 - v9) * (float)(v4 - v9))
                 + (float)((float)(v3 - *(float *)v7) * (float)(v3 - *(float *)v7)))
         + (float)((float)(i - v10) * (float)(i - v10)));
    v0 = v6;
    if ( v6 == 6 )
      break;
    v1 = (float *)sub_6019EC34(v13, v12);
    v3 = v8;
    v4 = v9;
  }
  return v2;
}
