/* sub_607DE2AC
 * address: 0x607DE2AC   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DE2AC(_DWORD *a1, int a2, int a3, float *a4, float *a5)
{
  __int16 *v8; // r6
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r9
  int v12; // r4
  char *v13; // r5
  _DWORD *v14; // r0
  int v15; // r1
  char *v16; // r7
  _DWORD *v17; // r0
  int v18; // lr
  int v19; // r1
  unsigned int v20; // r0
  int v21; // r3
  unsigned int v22; // r5
  int v23; // r4
  __int16 *v24; // r2
  int v25; // r6
  int v26; // t1
  int v27; // r7
  unsigned int v28; // r1
  int v29; // r1
  int v30; // r0
  int v31; // r3
  _DWORD *v32; // r1
  unsigned int v33; // r2
  float v34; // s0
  int v35; // r1
  float *v36; // r0
  int v37; // r2
  float *v38; // r3
  int v39; // r3
  int v40; // r0
  int result; // r0
  _DWORD v42[249]; // [sp+Ch] [bp-3E4h] BYREF

  v8 = (__int16 *)(a1 + 398);
  v9 = a1[394];
  v10 = a1[396];
  v11 = &a1[192 * a3];
  v12 = v11[186];
  v13 = (char *)v11[185];
  v14 = (_DWORD *)((char *)v11 + (v12 >> 1) + 376);
  if ( (v12 & 1) != 0 )
    v13 = *(char **)&v13[*v14];
  ((void (__fastcall *)(_DWORD *, int, __int16 *, int, int))v13)(v14, a2, v8, v10, v9);
  if ( a1[395] != a3 )
  {
    v15 = v11[92];
    v16 = (char *)v11[91];
    v17 = (_DWORD *)((char *)v11 + (v15 >> 1));
    if ( (v15 & 1) != 0 )
      v16 = *(char **)&v16[*v17];
    ((void (__fastcall *)(_DWORD *, __int16 *, __int16 *, _DWORD, int))v16)(v17, v8, v8, a1[396], 1);
  }
  v18 = a1[397];
  if ( v18 )
    v19 = v11[189];
  else
    v19 = *v8;
  v20 = a1[396];
  if ( v20 )
  {
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = (__int16 *)(a1 + 398);
    do
    {
      v26 = *v24++;
      v25 = v26;
      v42[v21] = v22++;
      v27 = v26;
      v28 = v26 ^ v19;
      if ( v26 < 0 )
        v27 = -v25;
      v21 += v28 >> 31;
      v19 = v25;
      if ( v23 < v27 )
        v23 = v27;
    }
    while ( v22 < v20 );
    if ( v21 )
    {
      v29 = v42[v21 - 1];
      v30 = v18 + v29;
      if ( v21 == 1 )
      {
        v31 = 1;
        v32 = v11 + 188;
        v33 = v30 - v11[188];
      }
      else
      {
        v31 = v21 - 1;
        v33 = v29 - v42[0];
        v32 = v11 + 188;
      }
      *a4 = (float)v23 * 0.000030518;
      *a5 = (float)(unsigned int)((a1[393] >> 1) * v31) / (float)v33;
      *v32 = v30;
      v34 = *a5;
      goto LABEL_24;
    }
  }
  else
  {
    v25 = v19;
  }
  *a4 = *((float *)v11 + 190);
  v34 = *((float *)v11 + 191);
  *a5 = v34;
LABEL_24:
  v35 = 256;
  v36 = flt_60B0D3C0;
  while ( 1 )
  {
    v37 = v35;
    if ( !v35 )
      break;
    v35 /= 2;
    v38 = &v36[v37 / 2];
    if ( *v38 < v34 )
    {
      v35 = v37 - 1 - v35;
      v36 = v38 + 1;
    }
  }
  v39 = 255;
  v40 = (char *)v36 - (char *)flt_60B0D3C0;
  if ( (unsigned int)(v40 >> 2) < 0xFF )
    v39 = v40 >> 2;
  *a5 = flt_60B0D3C0[v39];
  v11[189] = v25;
  v11[190] = *(_DWORD *)a4;
  result = *(_DWORD *)a5;
  v11[191] = *(_DWORD *)a5;
  return result;
}
