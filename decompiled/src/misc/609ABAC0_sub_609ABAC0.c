/* sub_609ABAC0
 * address: 0x609ABAC0   size: 1380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609ABAC0(int a1, int a2)
{
  unsigned int result; // r0
  _BYTE *v5; // r9
  int v6; // r6
  int TlsValue; // r0
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r1
  int v11; // r6
  unsigned int v12; // r0
  _DWORD *v13; // r0
  float v14; // s4
  float v15; // r1
  float v16; // r2
  _DWORD *v17; // r1
  unsigned int v18; // r2
  _DWORD *v19; // r1
  float v20; // s16
  float v21; // s1
  float v22; // s18
  float v23; // s2
  float v24; // s20
  float v25; // s0
  float v26; // s1
  float v27; // s2
  int v28; // s1
  int v29; // s2
  int v30; // s3
  unsigned int v31; // r2
  _DWORD *v32; // r0
  _DWORD *v33; // r1
  _DWORD *v34; // r1
  _DWORD *v35; // r1
  _DWORD *v36; // r1
  _DWORD *v37; // r1
  _DWORD *v38; // r1
  _DWORD *v39; // r1
  _DWORD *v40; // r1
  unsigned __int8 *v41; // r0
  int v42; // r0
  int v43; // r7
  int v44; // r6
  int v45; // r10
  int v46; // r8
  __int64 v47; // r0
  float v48[6]; // [sp+Ch] [bp-DCh] BYREF
  float v49; // [sp+24h] [bp-C4h] BYREF
  float v50; // [sp+28h] [bp-C0h]
  float v51; // [sp+2Ch] [bp-BCh]
  float v52; // [sp+30h] [bp-B8h]
  _DWORD v53[4]; // [sp+8Ch] [bp-5Ch] BYREF
  float v54[19]; // [sp+9Ch] [bp-4Ch] BYREF

  result = FIELD_U8(a1, 440);
  if ( result )
  {
    v5 = (_BYTE *)(a1 + 5040);
    result = FIELD_U32(a1, 5040);
    if ( (result & 0x10001) != 0 )
    {
      v6 = dword_60CD09F8;
      TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
      if ( TlsValue )
        v8 = TlsValue - 1;
      else
        *(float *)&v8 = COERCE_FLOAT(nn__os__GetCurrentCoreNumber(0));
      v49 = *(float *)&v8;
      result = *(_DWORD *)(v6 + 608 * v8 + 624);
      if ( (result & 1) == 0 )
      {
        if ( (*v5 & 2) != 0 )
          sub_609AC040(a1);
        v9 = FIELD_U32(a1, 4308);
        v10 = *(_DWORD **)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 32) + 4);
        if ( v9 <= 0 )
        {
          v11 = v10[3];
        }
        else
        {
          v11 = v10[5];
          v12 = v9 - 1;
          if ( v10[4] > v12 )
            v11 += 936 * v12;
        }
        sub_6091DD8C(v11, a2);
        v49 = 0.57143;
        v50 = 0.5002;
        v51 = 0.5001;
        v52 = 0.5001;
        v13 = *(_DWORD **)(v11 + 612);
        if ( *v13 != -1 )
        {
          sub_6091B890(v13, a2, 4, (int)&v49);
          v13 = *(_DWORD **)(v11 + 612);
        }
        v14 = FIELD_F32(a1, 504);
        v15 = FIELD_F32(a1, 488);
        v16 = FIELD_F32(a1, 472);
        v49 = FIELD_F32(a1, 456) / 60.0;
        v50 = v16;
        v51 = v15;
        v17 = v13;
        v52 = 1.0 / v14;
        v18 = FIELD_U32(v11, 608);
        if ( v18 > 1 )
          v17 = v13 + 3;
        if ( *v17 != -1 )
        {
          sub_6091B890(v17, a2, 4, (int)&v49);
          v18 = FIELD_U32(v11, 608);
          v13 = *(_DWORD **)(v11 + 612);
        }
        v19 = v13;
        if ( v18 > 2 )
          v19 = v13 + 6;
        if ( *v19 != -1 )
        {
          sub_6091B890(v19, a2, 32, a1 + 4312);
          v18 = FIELD_U32(v11, 608);
          v13 = *(_DWORD **)(v11 + 612);
        }
        if ( v18 > 3 )
          v13 += 9;
        if ( *v13 != -1 )
          sub_6091B890(v13, a2, 32, a1 + 4328);
        if ( (*v5 & 0x80) != 0 )
        {
          v20 = sub_6090B1D8((float *)(a1 + 608), FIELD_F32(a1, 620));
          v22 = v21;
          v24 = v23;
          v25 = sub_6090B1D8((float *)(a1 + 636), FIELD_F32(a1, 648));
          v49 = 1.0 / v20;
          v50 = 1.0 / v22;
          v48[0] = 1.0 / v25;
          v51 = 1.0 / v24;
          v52 = 1.0;
          v48[1] = 1.0 / v26;
          v48[2] = 1.0 / v27;
          v48[3] = 1.0;
          v53[0] = sub_6090B1D8((float *)(a1 + 728), FIELD_F32(a1, 740));
          v53[1] = v28;
          v53[2] = v29;
          v53[3] = v30;
          v31 = FIELD_U32(v11, 608);
          v32 = *(_DWORD **)(v11 + 612);
          v33 = v32;
          if ( v31 > 4 )
            v33 = v32 + 12;
          if ( *v33 != -1 )
          {
            sub_6091B890(v33, a2, 4, a1 + 552);
            v31 = FIELD_U32(v11, 608);
            v32 = *(_DWORD **)(v11 + 612);
          }
          v34 = v32;
          if ( v31 > 5 )
            v34 = v32 + 15;
          if ( *v34 != -1 )
          {
            sub_6091B890(v34, a2, 4, a1 + 580);
            v31 = FIELD_U32(v11, 608);
            v32 = *(_DWORD **)(v11 + 612);
          }
          v35 = v32;
          if ( v31 > 6 )
            v35 = v32 + 18;
          if ( *v35 != -1 )
          {
            sub_6091B890(v35, a2, 4, (int)&v49);
            v31 = FIELD_U32(v11, 608);
            v32 = *(_DWORD **)(v11 + 612);
          }
          v36 = v32;
          if ( v31 > 7 )
            v36 = v32 + 21;
          if ( *v36 != -1 )
          {
            sub_6091B890(v36, a2, 4, (int)v48);
            v31 = FIELD_U32(v11, 608);
            v32 = *(_DWORD **)(v11 + 612);
          }
          v54[0] = FIELD_F32(a1, 664);
          v37 = v32;
          if ( v31 > 8 )
            v37 = v32 + 24;
          if ( *v37 != -1 )
          {
            sub_6091B890(v37, a2, 1, (int)v54);
            v31 = FIELD_U32(v11, 608);
            v32 = *(_DWORD **)(v11 + 612);
          }
          v54[0] = FIELD_F32(a1, 680);
          v38 = v32;
          if ( v31 > 9 )
            v38 = v32 + 27;
          if ( *v38 != -1 )
          {
            sub_6091B890(v38, a2, 1, (int)v54);
            v31 = FIELD_U32(v11, 608);
            v32 = *(_DWORD **)(v11 + 612);
          }
          v39 = v32;
          if ( v31 > 0xA )
            v39 = v32 + 30;
          v54[0] = 0.5 - (float)((float)(1.0 - FIELD_F32(a1, 696)) * 0.5);
          if ( *v39 != -1 )
          {
            sub_6091B890(v39, a2, 1, (int)v54);
            v31 = FIELD_U32(v11, 608);
            v32 = *(_DWORD **)(v11 + 612);
          }
          v54[0] = FIELD_F32(a1, 712);
          v40 = v32;
          if ( v31 > 0xB )
            v40 = v32 + 33;
          if ( *v40 != -1 )
          {
            sub_6091B890(v40, a2, 1, (int)v54);
            v31 = FIELD_U32(v11, 608);
            v32 = *(_DWORD **)(v11 + 612);
          }
          if ( v31 > 0xC )
            v32 += 36;
          if ( *v32 != -1 )
            sub_6091B890(v32, a2, 4, (int)v53);
        }
        v41 = (unsigned __int8 *)sub_6090B350((int)&v49);
        v50 = 0.0;
        LOWORD(v49) = 0;
        sub_6090B4B0(v41, a2);
        v42 = ((int (__fastcall *)(float *, int))loc_6090E438)(v48, a1 + 856);
        sub_6090E560(v42, a2, (float *)(a1 + 856));
        sub_6090B260(a1 + 856);
        sub_60922278(dword_60CD0A28 + 2376, a2);
        v43 = dword_60CD0A0C;
        v44 = FIELD_U32(dword_60CD0A0C, 400);
        if ( v44 )
        {
          v45 = FIELD_U32(a2, 192);
          v46 = FIELD_U32(dword_60CD0A0C, 384);
          v47 = dword_60CC746C(dword_60CD0A0C + 408);
          dword_60CC7874(v45, v46, FIELD_U32(v43, 380), v44, v47, HIDWORD(v47));
        }
        sub_6091ADF4(a1 + 920, a2);
        result = *(_DWORD *)v5 & 0xFFFFFFFE;
        *(_DWORD *)v5 = result;
      }
    }
  }
  return result;
}
