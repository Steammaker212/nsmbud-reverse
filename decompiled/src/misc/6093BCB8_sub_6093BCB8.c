/* sub_6093BCB8
 * address: 0x6093BCB8   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093BCB8(int a1, int a2, int a3, float *a4, float a5, float a6, int a7)
{
  int result; // r0
  int v14; // r0
  unsigned __int8 *v15; // r0
  float *v16; // r0
  int v17; // r0
  float *v18; // r7
  float *v19; // r6
  int v20; // r1
  int v21; // r3
  _DWORD *v22; // r1
  _DWORD *v23; // r3
  int v24; // r7
  int v25; // r6
  int v26; // r1
  int v27; // r6
  _DWORD *v28; // r0
  unsigned int v29; // r2
  _DWORD *v30; // r1
  _DWORD *v31; // r1
  _DWORD *v32; // r1
  int v33; // r5
  int v34; // r6
  int v35; // r9
  int v36; // r7
  __int64 v37; // r0
  _DWORD v38[128]; // [sp+10h] [bp-5F8h] BYREF
  float v39[124]; // [sp+210h] [bp-3F8h] BYREF
  __int16 v40; // [sp+410h] [bp-1F8h] BYREF
  int v41; // [sp+414h] [bp-1F4h]
  int v42[20]; // [sp+478h] [bp-190h] BYREF
  int v43; // [sp+4C8h] [bp-140h] BYREF
  _DWORD v44[13]; // [sp+5D4h] [bp-34h] BYREF

  result = FIELD_U32(a2, 60);
  if ( result )
  {
    nullsub_120();
    v14 = agl_TextureSampler_ref((int)v42);
    sub_60920EC8(v14, *(int **)(a2 + 60));
    v15 = (unsigned __int8 *)sub_6090B350((int)&v40);
    v40 = 0;
    v41 |= 1u;
    sub_6090B4B0(v15, a1);
    v16 = (float *)v38;
    do
    {
      *v16 = 0.0;
      v16[1] = 0.0;
      v16[2] = 0.0;
      v16[3] = 1.0;
      v16[4] = 0.0;
      v16[5] = 0.0;
      v16[6] = 0.0;
      v16[7] = 1.0;
      v16 += 8;
    }
    while ( v16 != v39 );
    if ( a3 )
    {
      v17 = 0;
      do
      {
        v18 = &a4[v17];
        v19 = a4;
        v20 = 0;
        v21 = 0;
        do
        {
          if ( v17 != v20 && *v19 < *v18 )
            ++v21;
          ++v20;
          ++v19;
        }
        while ( a3 != v20 );
        v39[4 * v21] = *v18;
        v22 = (_DWORD *)(a7 + 16 * v17++);
        v38[4 * v21] = *v22;
        v23 = &v38[4 * v21];
        v24 = v22[1];
        v25 = v22[2];
        v26 = v22[3];
        v23[1] = v24;
        v23[2] = v25;
        v23[3] = v26;
      }
      while ( v17 != a3 );
    }
    v27 = 0;
    if ( FIELD_U32(dword_60CD0B60, 20) >= 2u )
      v27 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 4);
    sub_6091DD8C(v27, a1);
    v28 = *(_DWORD **)(v27 + 612);
    *(float *)v44 = a5;
    if ( *v28 != -1 )
    {
      sub_6091B890(v28, a1, 1, (int)v44);
      v28 = *(_DWORD **)(v27 + 612);
    }
    v29 = FIELD_U32(v27, 608);
    v30 = v28;
    *(float *)v44 = a6;
    if ( v29 > 1 )
      v30 = v28 + 3;
    if ( *v30 != -1 )
    {
      sub_6091B890(v30, a1, 1, (int)v44);
      v29 = FIELD_U32(v27, 608);
      v28 = *(_DWORD **)(v27 + 612);
    }
    v31 = v28;
    v44[0] = a3;
    if ( v29 > 4 )
      v31 = v28 + 12;
    if ( *v31 != -1 )
    {
      sub_6091B890(v31, a1, 1, (int)v44);
      v29 = FIELD_U32(v27, 608);
      v28 = *(_DWORD **)(v27 + 612);
    }
    v32 = v28;
    if ( v29 > 2 )
      v32 = v28 + 6;
    if ( *v32 != -1 )
    {
      sub_6091B890(v32, a1, 4 * a3, (int)v39);
      v29 = FIELD_U32(v27, 608);
      v28 = *(_DWORD **)(v27 + 612);
    }
    if ( v29 > 3 )
      v28 += 9;
    if ( *v28 != -1 )
      sub_6091B890(v28, a1, 4 * a3, (int)v38);
    sub_60920FDC(v42, a1, *(char **)(v27 + 636));
    sub_60922278(dword_60CD0A28 + 2712, a1);
    v33 = dword_60CD0A0C;
    v34 = FIELD_U32(dword_60CD0A0C, 920);
    if ( v34 )
    {
      v35 = FIELD_U32(a1, 192);
      v36 = FIELD_U32(dword_60CD0A0C, 904);
      v37 = dword_60CC746C(dword_60CD0A0C + 928);
      dword_60CC7874(v35, v36, FIELD_U32(v33, 900), v34, v37, HIDWORD(v37));
    }
    sub_609175E4((int)&v43);
    return sub_60917AE4((int)v42);
  }
  return result;
}
