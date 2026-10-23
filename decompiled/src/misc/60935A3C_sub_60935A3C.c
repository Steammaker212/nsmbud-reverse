/* sub_60935A3C
 * address: 0x60935A3C   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60935A3C(_DWORD *a1, int a2, int *a3, float *a4, int a5, unsigned int a6, int a7, int a8, int a9)
{
  float v11; // s2
  int v12; // r6
  unsigned int v13; // r2
  _DWORD *v14; // r0
  _DWORD *v15; // r1
  _DWORD *v16; // r1
  _DWORD *v17; // r1
  _DWORD *v18; // r1
  _DWORD *v19; // r1
  int *result; // r0
  int v21; // r7
  int v22; // r5
  int v23; // r8
  int v24; // r6
  __int64 v25; // r0
  _DWORD v26[4]; // [sp+Ch] [bp-4Ch] BYREF
  float v27[4]; // [sp+1Ch] [bp-3Ch] BYREF
  float v28[4]; // [sp+2Ch] [bp-2Ch] BYREF
  _DWORD v29[7]; // [sp+3Ch] [bp-1Ch] BYREF

  v28[0] = 1.0 / *a4;
  v11 = 1.0 / a4[1];
  v27[0] = v28[0] * 0.5;
  v28[1] = v11;
  v28[2] = v28[0] * 0.5;
  v27[1] = v11 * 0.5;
  v27[2] = v28[0] * 0.15;
  v28[3] = v11 * 0.5;
  v27[3] = v11 * 0.15;
  v26[0] = a1[346];
  v26[1] = a1[347];
  v26[2] = a1[348];
  v26[3] = 0;
  v12 = a1[((a6 > 4) | a7) + 100];
  sub_6091DD8C(v12, a2);
  v13 = FIELD_U32(v12, 608);
  v14 = *(_DWORD **)(v12 + 612);
  v15 = v14;
  if ( v13 > 1 )
    v15 = v14 + 3;
  if ( *v15 != -1 )
  {
    sub_6091B890(v15, a2, 4, (int)v28);
    v13 = FIELD_U32(v12, 608);
    v14 = *(_DWORD **)(v12 + 612);
  }
  v16 = v14;
  if ( v13 > 2 )
    v16 = v14 + 6;
  if ( *v16 != -1 )
  {
    sub_6091B890(v16, a2, 4, (int)v27);
    v13 = FIELD_U32(v12, 608);
    v14 = *(_DWORD **)(v12 + 612);
  }
  v17 = v14;
  if ( v13 > 3 )
    v17 = v14 + 9;
  if ( *v17 != -1 )
  {
    sub_6091B890(v17, a2, 4, (int)v26);
    v13 = FIELD_U32(v12, 608);
    v14 = *(_DWORD **)(v12 + 612);
  }
  v18 = v14;
  if ( v13 > 4 )
    v18 = v14 + 12;
  if ( *v18 != -1 )
  {
    sub_6091B890(v18, a2, 4, a8);
    v13 = FIELD_U32(v12, 608);
    v14 = *(_DWORD **)(v12 + 612);
  }
  v19 = v14;
  if ( v13 > 5 )
    v19 = v14 + 15;
  if ( *v19 != -1 )
  {
    sub_6091B890(v19, a2, 4, a9);
    v13 = FIELD_U32(v12, 608);
    v14 = *(_DWORD **)(v12 + 612);
  }
  v29[0] = 0;
  if ( v13 > 0xB )
    v14 += 33;
  if ( *v14 != -1 )
    sub_6091B890(v14, a2, 1, (int)v29);
  sub_60920FDC(a3, a2, *(char **)(v12 + 636));
  sub_60922278(dword_60CD0A28 + 2712, a2);
  result = &dword_60CD0A0C;
  v21 = dword_60CD0A0C;
  v22 = FIELD_U32(dword_60CD0A0C, 920);
  if ( v22 )
  {
    v23 = FIELD_U32(a2, 192);
    v24 = FIELD_U32(dword_60CD0A0C, 904);
    v25 = dword_60CC746C(dword_60CD0A0C + 928);
    return (int *)dword_60CC7874(v23, v24, FIELD_U32(v21, 900), v22, v25, HIDWORD(v25));
  }
  return result;
}
