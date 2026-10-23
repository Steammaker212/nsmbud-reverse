/* sub_605AD148
 * address: 0x605AD148   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605AD148(float *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r2
  int *v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // t1
  int *v9; // r3
  float **v10; // r3
  int v11; // t1
  int *v12; // r3
  int v13; // t1
  int *v14; // r3
  int v15; // t1
  int *v16; // r3
  int v17; // t1
  int *v18; // r3
  int v19; // t1
  int *v20; // r3
  int v21; // t1
  int *v22; // r3
  int v23; // t1
  int *v24; // r3
  int v25; // t1
  int *v26; // r3
  int v27; // t1
  int *v28; // r3
  int v29; // t1
  int *v30; // r3
  int v31; // t1
  int *v32; // r3
  int v33; // t1
  unsigned int v34; // r0
  int v35; // r12
  int v36; // r2
  int v37; // r6
  int v38; // r3
  int (*v39)(); // r1

  v2 = 2;
  v3 = (*((_DWORD *)a1 + 5) >> 28) & 3;
  *((_DWORD *)a1 + 1696) = v3;
  v4 = 15 * v3;
  v5 = &dword_60CB01F4[15 * v3];
  v8 = v5[1];
  v6 = v5 + 1;
  v7 = v8;
  if ( v8 <= 12 )
  {
    if ( !v7 )
      dword_60CB01F4[v4 + 2] = FIELD_U32(dword_60C99DD4, 1052);
    v9 = &dword_60CB01F4[v4];
    v11 = v9[3];
    v10 = (float **)(v9 + 3);
    if ( !v11 )
      goto LABEL_29;
    v12 = &dword_60CB01F4[v4];
    v13 = v12[4];
    v10 = (float **)(v12 + 4);
    if ( !v13 )
      goto LABEL_29;
    v14 = &dword_60CB01F4[v4];
    v15 = v14[5];
    v10 = (float **)(v14 + 5);
    if ( !v15 )
      goto LABEL_29;
    v16 = &dword_60CB01F4[v4];
    v17 = v16[6];
    v10 = (float **)(v16 + 6);
    if ( !v17 )
      goto LABEL_29;
    v18 = &dword_60CB01F4[v4];
    v19 = v18[7];
    v10 = (float **)(v18 + 7);
    if ( !v19 )
      goto LABEL_29;
    v20 = &dword_60CB01F4[v4];
    v21 = v20[8];
    v10 = (float **)(v20 + 8);
    if ( !v21 )
      goto LABEL_29;
    v22 = &dword_60CB01F4[v4];
    v23 = v22[9];
    v10 = (float **)(v22 + 9);
    if ( !v23 )
      goto LABEL_29;
    v24 = &dword_60CB01F4[v4];
    v25 = v24[10];
    v10 = (float **)(v24 + 10);
    if ( !v25 )
      goto LABEL_29;
    v26 = &dword_60CB01F4[v4];
    v27 = v26[11];
    v10 = (float **)(v26 + 11);
    if ( !v27 )
      goto LABEL_29;
    v28 = &dword_60CB01F4[v4];
    v29 = v28[12];
    v10 = (float **)(v28 + 12);
    if ( !v29
      || (v30 = &dword_60CB01F4[v4], v31 = v30[13], v10 = (float **)(v30 + 13), !v31)
      || (v32 = &dword_60CB01F4[v4], v33 = v32[14], v10 = (float **)(v32 + 14), !v33) )
    {
LABEL_29:
      *v10 = a1;
      *v6 = v7 + 1;
      if ( sub_605ADFF0((int)a1) == 1 )
      {
        v34 = *((_DWORD *)a1 + 5);
        v35 = HIBYTE(v34) & 3;
        *((_DWORD *)a1 + 1697) = v35;
        a1[29] = -2500.0;
        a1[29] = (float)(dword_60CB0234 + dword_60CB01F8 + dword_60CB0270) + -2500.0;
        *((_DWORD *)a1 + 1698) = (unsigned __int8)v34;
        v36 = BYTE1(v34);
        *((_DWORD *)a1 + 1699) = BYTE1(v34);
        v37 = *((_DWORD *)a1 + 1696);
        v38 = dword_60B05010[v37];
        *((_DWORD *)a1 + 1700) = v38;
        a1[1701] = *(float *)&dword_60B0501C[v37];
        *((_DWORD *)a1 + 1704) = off_60C08A94[2 * v37];
        *((_DWORD *)a1 + 1705) = off_60C08A94[2 * v37 + 1];
        v39 = off_60C08AAC[2 * v37 + 1];
        *((_DWORD *)a1 + 1706) = off_60C08AAC[2 * v37];
        *((_DWORD *)a1 + 1707) = v39;
        if ( v35 == 2 )
        {
          *((_DWORD *)a1 + 1702) = v38 + BYTE1(v34);
        }
        else
        {
          if ( (v34 & 0x8000000) != 0 )
            v36 = 0;
          *((_DWORD *)a1 + 1702) = v36;
          *((_DWORD *)a1 + 1703) = v36;
        }
        (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 252))(a1);
        (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 260))(a1);
        (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 272))(a1);
        *((_BYTE *)a1 + 6532) = 3;
        *((_BYTE *)a1 + 6228) = 3;
        if ( FIELD_U8(dword_60CC6D8C, 17) && *((_DWORD *)a1 + 1697) == 2 )
          SE_OBJ_DAIKONBOU_LAND_ref(a1);
        (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 224))(a1);
        return 1;
      }
    }
  }
  return v2;
}
