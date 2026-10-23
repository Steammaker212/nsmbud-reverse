/* sub_6093FF24
 * address: 0x6093FF24   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6093FF24(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v9; // r5
  int v10; // r10
  int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r2
  int v14; // r7
  float v15; // s16
  float v16; // s18
  int v17; // r0
  unsigned int v18; // r1
  unsigned int v19; // r5
  float v20; // s16
  int v21; // r0
  signed int v22; // r1
  int v23; // r0
  _DWORD *v24; // r1
  int v25; // r7
  unsigned int v26; // r0
  _DWORD *v27; // r0
  unsigned int v28; // r2
  _DWORD *v29; // r1
  _DWORD *v30; // r1
  int *result; // r0
  int v32; // r7
  int v33; // r5
  int v34; // r8
  int v35; // r6
  __int64 v36; // r0
  float v37[4]; // [sp+Ch] [bp-4Ch] BYREF
  float v38[15]; // [sp+1Ch] [bp-3Ch] BYREF

  v9 = FIELD_U16(a2, 40);
  v10 = a2 + 16;
  v11 = sub_609200A0(a2 + 16);
  v12 = FIELD_U16(a2, 42);
  v13 = 1;
  v14 = -1;
  if ( v11 <= (int)(v12 >> a3) )
    v11 = v12 >> a3;
  if ( (int)(v9 >> a3) > 1 )
    v13 = v9 >> a3;
  v15 = (float)v13;
  v16 = (float)(unsigned int)v11;
  switch ( FIELD_U16(a2, 50) )
  {
    case 1:
      v14 = 0;
      break;
    case 2:
      v14 = 2;
      break;
    case 4:
      v14 = 1;
      break;
    case 8:
      v17 = sub_609200B8(v10);
      v18 = FIELD_U16(a2, 44);
      v14 = 3;
      if ( v17 > (int)v18 )
        v18 = v17;
      if ( v18 > 6 )
        v14 = 4;
      break;
    default:
      break;
  }
  v19 = 0;
  v37[0] = 1.0 / v15;
  v37[1] = 1.0 / v16;
  v37[2] = 0.0;
  v37[3] = 0.0;
  if ( (unsigned int)(v14 - 3) > 1 )
  {
    v20 = (float)a4;
    if ( v14 == 2 )
    {
      v21 = sub_609200B8(v10);
      v22 = FIELD_U16(a2, 44);
      if ( v21 > v22 )
        v22 = v21;
      v20 = v20 / (float)(unsigned int)v22;
    }
  }
  else
  {
    v19 = a4 % 6;
    v20 = (float)(a4 / 6);
  }
  v23 = v14 + 5 * a5;
  v24 = *(_DWORD **)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 456) + 4);
  if ( v23 <= 0 )
  {
    v25 = v24[3];
  }
  else
  {
    v25 = v24[5];
    v26 = v23 - 1;
    if ( v24[4] > v26 )
      v25 += 936 * v26;
  }
  sub_6091DD8C(v25, a1);
  v27 = *(_DWORD **)(v25 + 612);
  if ( *v27 != -1 )
  {
    sub_6091B890(v27, a1, 4, (int)v37);
    v27 = *(_DWORD **)(v25 + 612);
  }
  v28 = FIELD_U32(v25, 608);
  v29 = v27;
  if ( v28 > 1 )
    v29 = v27 + 3;
  v38[0] = (float)a3;
  if ( *v29 != -1 )
  {
    sub_6091B890(v29, a1, 1, (int)v38);
    v28 = FIELD_U32(v25, 608);
    v27 = *(_DWORD **)(v25 + 612);
  }
  v30 = v27;
  v38[0] = v20;
  if ( v28 > 2 )
    v30 = v27 + 6;
  if ( *v30 != -1 )
  {
    sub_6091B890(v30, a1, 1, (int)v38);
    v28 = FIELD_U32(v25, 608);
    v27 = *(_DWORD **)(v25 + 612);
  }
  LODWORD(v38[0]) = v19;
  if ( v28 > 3 )
    v27 += 9;
  if ( *v27 != -1 )
    sub_6091B890(v27, a1, 1, (int)v38);
  sub_60920FDC((int *)a2, a1, *(char **)(v25 + 636));
  sub_60922278(dword_60CD0A28 + 2712, a1);
  result = &dword_60CD0A0C;
  v32 = dword_60CD0A0C;
  v33 = FIELD_U32(dword_60CD0A0C, 920);
  if ( v33 )
  {
    v34 = FIELD_U32(a1, 192);
    v35 = FIELD_U32(dword_60CD0A0C, 904);
    v36 = dword_60CC746C(dword_60CD0A0C + 928);
    return (int *)dword_60CC7874(v34, v35, FIELD_U32(v32, 900), v33, v36, HIDWORD(v36));
  }
  return result;
}
