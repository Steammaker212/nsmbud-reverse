/* sub_601B86B0
 * address: 0x601B86B0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601B86B0(_DWORD *a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r5
  unsigned int result; // r0
  float *v5; // r0
  float v6; // s16
  float v7; // s18
  float v8; // s20
  float *v9; // r0
  float v10; // s2
  float v11; // s4
  float v12[13]; // [sp+4h] [bp-34h] BYREF

  v2 = a1 + 271;
  v3 = a1 + 290;
  if ( (sub_601E0070(a1 + 271, a1 + 290) | 1) == 1 )
  {
    result = sub_601C5338((int)a1, a1[264]);
  }
  else
  {
    v5 = (float *)sub_601E0040(v2);
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v9 = (float *)sub_601E0040(v3);
    v10 = v9[1];
    v11 = v9[2];
    v12[0] = *v9 - v6;
    v12[1] = v10 - v7;
    v12[2] = v11 - v8;
    result = sub_60186214((int)a1, v12);
  }
  a1[256] = result;
  a1[48] = result;
  return result;
}
