/* sub_606D0708
 * address: 0x606D0708   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D0708(int a1)
{
  float v2; // s6
  float v3; // s2
  _DWORD **v4; // r6
  int result; // r0
  int v6; // r3
  int v7; // r1
  unsigned int v8; // r5
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  int v12; // r6
  int v13; // r1
  int v14; // s4
  float *v15; // r6
  float *v16; // r3
  unsigned int v17; // r0
  float *v18; // r7
  _DWORD *v19; // r0
  float v20; // s0
  float v21; // s2
  float v22; // s4
  float v23; // s10
  float v24; // s3
  float v25; // s6
  float v26; // s14
  float v27; // s7
  float v28; // s11
  unsigned int v29; // r0
  int v30; // r6
  int v31; // [sp+8h] [bp-70h]
  int v32; // [sp+Ch] [bp-6Ch]
  int v33; // [sp+10h] [bp-68h]
  int v34; // [sp+14h] [bp-64h]
  float v35; // [sp+18h] [bp-60h] BYREF
  float v36; // [sp+1Ch] [bp-5Ch]
  float v37; // [sp+20h] [bp-58h]
  int v38; // [sp+24h] [bp-54h]
  float v39; // [sp+28h] [bp-50h]
  float v40; // [sp+2Ch] [bp-4Ch]
  float v41; // [sp+30h] [bp-48h]
  int v42; // [sp+34h] [bp-44h]
  float v43; // [sp+38h] [bp-40h]
  float v44; // [sp+3Ch] [bp-3Ch]
  float v45; // [sp+40h] [bp-38h]
  int v46; // [sp+44h] [bp-34h]

  v2 = (float)(-0.00030118 * 0.0) + 1.0;
  v3 = (float)(0.024541 * 0.0) + 0.0;
  v35 = (float)(v2 * v2) + (float)(v3 * (float)(v3 * v3));
  v39 = v3 * v2;
  v43 = (float)(v3 * v39) - v39;
  v36 = v43;
  v40 = v2 * v2;
  v44 = (float)(v3 * v3) + (float)(v3 * (float)(v2 * v2));
  v37 = v3 * v2;
  v41 = -v3;
  v45 = v2 * v2;
  v38 = FIELD_U32(a1, 108);
  v42 = FIELD_U32(a1, 112);
  v46 = FIELD_U32(a1, 116);
  v4 = (_DWORD **)(a1 + 6324);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6324) + 60))(**(_DWORD **)(a1 + 6324), &v35);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v4 + 56))(**v4);
  (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)(a1 + 6456) + 60))(FIELD_U32(a1, 6456), &v35);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6456) + 56))(FIELD_U32(a1, 6456));
  result = FIELD_U8(a1, 12565);
  if ( FIELD_U8(a1, 12565) )
  {
    v6 = 0;
    do
    {
      v7 = 0;
      if ( (unsigned int)v6 < 4 )
        v7 = v6;
      v34 = *(_DWORD *)(a1 + 220 * v7 + 13332);
      if ( v34 >= 1 )
      {
        v8 = 0;
        v31 = v6;
        v32 = a1 + 220 * v7;
        v33 = v34 * v6;
        do
        {
          v9 = FIELD_U32(a1, 156);
          v10 = FIELD_U32(a1, 160);
          v11 = FIELD_U32(a1, 164);
          v12 = (v10 >> 20) & 0xFF0;
          v13 = v10 & 0xFFFFFF;
          v14 = v9 & 0xFFFFFF;
          v15 = (float *)((char *)sinLutTable + v12);
          v16 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
          v17 = 0;
          v18 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
          if ( v8 < 0x10 )
            v17 = v8;
          v19 = (_DWORD *)(v32 + 12 * v17);
          v20 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
          v21 = (float)(unsigned int)v13 * 0.000000059605;
          v22 = (float)(unsigned int)v14 * 0.000000059605;
          v23 = v18[2] + (float)(v20 * v18[3]);
          v24 = v15[2] + (float)(v21 * v15[3]);
          v25 = *v18 + (float)(v20 * v18[1]);
          v26 = *v15 + (float)(v21 * v15[1]);
          v27 = *v16 + (float)(v22 * v16[1]);
          v28 = v16[2] + (float)(v22 * v16[3]);
          v35 = (float)(v24 * v23) + (float)(v27 * (float)(v26 * v25));
          v39 = v28 * v25;
          v43 = (float)(v27 * (float)(v24 * v25)) - (float)(v26 * v23);
          v36 = (float)(v27 * (float)(v26 * v23)) - (float)(v24 * v25);
          v40 = v28 * v23;
          v44 = (float)(v26 * v25) + (float)(v27 * (float)(v24 * v23));
          v37 = v28 * v26;
          v41 = -v27;
          v45 = v28 * v24;
          v38 = v19[3337];
          v42 = v19[3338];
          v46 = v19[3339];
          v29 = v33 + v8;
          if ( v33 + v8 >= 0x20 )
            v29 = 0;
          v30 = *(_DWORD *)(a1 + 4 * v29 + 6328);
          (*(void (__fastcall **)(int, float *))(*(_DWORD *)v30 + 60))(v30, &v35);
          (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 56))(v30);
          ++v8;
        }
        while ( v34 != v8 );
        v6 = v31;
        result = FIELD_U8(a1, 12565);
      }
      ++v6;
    }
    while ( v6 < (unsigned __int8)result );
  }
  return result;
}
