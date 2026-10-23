/* sub_6026EA44
 * address: 0x6026EA44   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026EA44(_DWORD *a1)
{
  _DWORD *v2; // r11
  int v3; // r0
  _DWORD *v4; // r6
  float *v5; // r8
  float *v6; // r9
  int v7; // r7
  int v8; // r5
  int v9; // r0
  float v10; // s3
  float v11; // s4
  int v12; // r5
  float *v13; // r7
  int v14; // r0
  float v15; // s3
  float v16; // s4

  v2 = &unk_60AF5A5C;
  v3 = 4 * a1[2369];
  if ( v3 < -2147483644 )
    v2 = &unk_60AF2514;
  v4 = a1 + 2367;
  v5 = (float *)(a1 + 2359);
  v6 = (float *)(a1 + 2358);
  if ( v3 >= -2147483644 )
  {
    v12 = 0;
    v13 = &sinLutTable[2];
    do
    {
      v14 = 3;
      if ( *v4 )
        v14 = 1;
      if ( v12 != v14 )
      {
        v15 = *v6 + (float)((float)(*v13 + (float)((float)(v13[1] * 0.0) * 0.000000059605)) * 16.0);
        v16 = *v5 + (float)((float)(*(v13 - 2) + (float)((float)(*(v13 - 1) * 0.0) * 0.000000059605)) * 16.0);
        (*(void (__fastcall **)(_DWORD *, int, float, float, float, float, float, float))(*a1 + 208))(
          a1,
          16 * v2[v12],
          v15,
          v16,
          0.0,
          v15,
          v16,
          0.0);
      }
      ++v12;
      v13 += 256;
    }
    while ( v12 != 4 );
  }
  else
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = 3;
      if ( *v4 )
        v9 = 1;
      if ( (v8 | 1) != v9 )
      {
        v10 = *v6
            + (float)((float)(sinLutTable[v7 + 130] + (float)((float)(sinLutTable[v7 + 131] * 0.0) * 0.000000059605))
                    * 16.0);
        v11 = *v5
            + (float)((float)(sinLutTable[v7 + 128] + (float)((float)(sinLutTable[v7 + 129] * 0.0) * 0.000000059605))
                    * 16.0);
        (*(void (__fastcall **)(_DWORD *, int, float, float, float, float, float, float))(*a1 + 208))(
          a1,
          16 * v2[v8],
          v10,
          v11,
          0.0,
          v10,
          v11,
          0.0);
      }
      v7 += 256;
      ++v8;
    }
    while ( v7 != 1024 );
  }
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 220))(a1);
}
