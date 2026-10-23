/* sub_604AC9C8
 * address: 0x604AC9C8   size: 2328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AC9C8(int *a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  int v5; // r5
  int result; // r0
  int v10; // r4
  int v11; // r3
  _DWORD *i; // r2
  char v13; // r4
  _DWORD *v14; // r2
  unsigned int v15; // r10
  _DWORD *v16; // r6
  int *v17; // r3
  int *v18; // r2
  int v19; // r0
  unsigned int *v20; // r4
  int v21; // r9
  unsigned int v22; // r0
  int *v23; // r9
  unsigned int v24; // r0
  int *v25; // r9
  unsigned int v26; // r0
  int *v27; // r9
  unsigned int v28; // r0
  int *v29; // r9
  unsigned int v30; // r0
  int *v31; // r4
  unsigned int v32; // r0
  unsigned int v33; // r0
  unsigned int v34; // r0
  unsigned int v35; // r0
  unsigned int v36; // r0
  unsigned int v37; // r0
  _DWORD *v38; // r7
  int *v39; // r4
  unsigned int *v40; // r4
  _DWORD *v41; // r6
  int v42; // r1
  float *v43; // r6
  float v44; // r0
  float v45; // r1
  float v46; // s8
  int *v47; // r1
  int v48; // r0
  _DWORD *v49; // [sp+4h] [bp-34h]
  float v50; // [sp+8h] [bp-30h] BYREF
  float v51; // [sp+Ch] [bp-2Ch]
  float v52; // [sp+10h] [bp-28h]

  result = 0;
  v10 = 0;
  if ( a2 <= 6 )
    v10 = dword_60B02E30[a2];
  if ( a4 >= 0 )
    result = sub_60834674(a4);
  if ( v10 == 8 )
  {
    v11 = 0;
    for ( i = a1 + 24451; ; i += 747 )
    {
      if ( *(i - 543) == 8 )
      {
        v13 = 4;
        if ( *i == result )
        {
          v5 = v11;
          v13 = 1;
        }
      }
      else
      {
        v13 = 0;
      }
      if ( (v13 & 3 | 4) != 4 )
        break;
      if ( ++v11 >= 61 )
        return result;
    }
  }
  else
  {
    v14 = a1 + 24655;
    result = 0;
    while ( *(v14 - 747) != v10 )
    {
      v5 = result + 1;
      if ( result + 1 >= 61 )
        return result;
      if ( *v14 == v10 )
        goto LABEL_22;
      v14 += 1494;
      result += 2;
    }
    v5 = result;
  }
LABEL_22:
  if ( v5 >= 0 )
  {
    v15 = 0;
    if ( (unsigned int)v5 >= 0x3D )
      v5 = 0;
    result = sub_60834644(result);
    v16 = (_DWORD *)result;
    if ( result )
    {
      v17 = &a1[747 * v5];
      if ( a3 < 4 )
        v15 = a3;
      v49 = v17 + 23818;
      v18 = a1 + 23813;
      v19 = FIELD_U32(result, 32);
      if ( a2 == 6 )
      {
        v20 = (unsigned int *)(v17 + 24450);
        if ( v19 == 6 && *v18 )
        {
          *v20 = a3;
          (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(*v49 + 12) + 180))(*(_DWORD *)(*v49 + 12), a5);
          v17 = &a1[747 * v5];
          v21 = 0;
          v18 = a1 + 23813;
          v22 = dword_60B02D5C[v15];
          if ( v22 >= 4 )
            v22 = 0;
          if ( a1[v22 + 69927] )
            goto LABEL_87;
        }
        if ( v16[26] == 6 && *v18 )
        {
          *v20 = a3;
          v23 = v17;
          (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(*v49 + 12) + 180))(*(_DWORD *)(*v49 + 12), a5);
          v18 = a1 + 23813;
          v17 = v23;
          v21 = 1;
          v24 = dword_60B02D5C[v15];
          if ( v24 >= 4 )
            v24 = 0;
          if ( a1[v24 + 69927] )
            goto LABEL_87;
        }
        if ( v16[44] == 6 && *v18 )
        {
          *v20 = a3;
          v25 = v17;
          (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(*v49 + 12) + 180))(*(_DWORD *)(*v49 + 12), a5);
          v18 = a1 + 23813;
          v17 = v25;
          v21 = 2;
          v26 = dword_60B02D5C[v15];
          if ( v26 >= 4 )
            v26 = 0;
          if ( a1[v26 + 69927] )
            goto LABEL_87;
        }
        if ( v16[62] == 6 && *v18 )
        {
          *v20 = a3;
          v27 = v17;
          (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(*v49 + 12) + 180))(*(_DWORD *)(*v49 + 12), a5);
          v18 = a1 + 23813;
          v17 = v27;
          v21 = 3;
          v28 = dword_60B02D5C[v15];
          if ( v28 >= 4 )
            v28 = 0;
          if ( a1[v28 + 69927] )
            goto LABEL_87;
        }
        if ( v16[80] == 6 && *v18 )
        {
          *v20 = a3;
          v29 = v17;
          (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(*v49 + 12) + 180))(*(_DWORD *)(*v49 + 12), a5);
          v18 = a1 + 23813;
          v17 = v29;
          v21 = 4;
          v30 = dword_60B02D5C[v15];
          if ( v30 >= 4 )
            v30 = 0;
          if ( a1[v30 + 69927] )
            goto LABEL_87;
        }
        result = v16[98];
        if ( result != 6 )
          return result;
        result = *v18;
        if ( !*v18 )
          return result;
        *v20 = a3;
        v31 = v17;
        (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(*v49 + 12) + 180))(*(_DWORD *)(*v49 + 12), a5);
        v17 = v31;
      }
      else
      {
        if ( v19 == a2 && *v18 )
        {
          v21 = 0;
          v32 = dword_60B02D5C[v15];
          if ( v32 >= 4 )
            v32 = 0;
          if ( a1[v32 + 69927] )
            goto LABEL_87;
        }
        if ( v16[26] == a2 && *v18 )
        {
          v21 = 1;
          v33 = dword_60B02D5C[v15];
          if ( v33 >= 4 )
            v33 = 0;
          if ( a1[v33 + 69927] )
            goto LABEL_87;
        }
        if ( v16[44] == a2 && *v18 )
        {
          v21 = 2;
          v34 = dword_60B02D5C[v15];
          if ( v34 >= 4 )
            v34 = 0;
          if ( a1[v34 + 69927] )
            goto LABEL_87;
        }
        if ( v16[62] == a2 && *v18 )
        {
          v21 = 3;
          v35 = dword_60B02D5C[v15];
          if ( v35 >= 4 )
            v35 = 0;
          if ( a1[v35 + 69927] )
            goto LABEL_87;
        }
        if ( v16[80] == a2 && *v18 )
        {
          v21 = 4;
          v36 = dword_60B02D5C[v15];
          if ( v36 >= 4 )
            v36 = 0;
          if ( a1[v36 + 69927] )
            goto LABEL_87;
        }
        result = v16[98];
        if ( result != a2 )
          return result;
        result = *v18;
        if ( !*v18 )
          return result;
      }
      v37 = dword_60B02D5C[v15];
      v21 = 5;
      if ( v37 >= 4 )
        v37 = 0;
      result = (int)&a1[v37];
      if ( FIELD_U32(result, 279708) )
      {
LABEL_87:
        v38 = v17 + 23814;
        sub_60834F34(6);
        v39 = &a1[747 * v5];
        v39[24449] = a3;
        v40 = (unsigned int *)(v39 + 24449);
        *((_BYTE *)v40 + 149) = 1;
        v41 = &v16[18 * v21];
        sub_604056C4(v38, v41[7]);
        if ( *(v40 - 509) == 8 )
          sub_604058BC((int)v38);
        v42 = **(_DWORD **)(*v49 + 4);
        if ( *((_BYTE *)v41 + 50) )
        {
          (*(void (**)(void))(v42 + 156))();
          sub_604056E8((int)v38, 10);
        }
        else
        {
          (*(void (**)(void))(v42 + 160))();
          sub_60405888((int)v38);
        }
        v43 = (float *)&a1[747 * v5];
        v44 = v50;
        v43[23918] = v50;
        v45 = v51;
        v43[23919] = v51;
        v46 = v52;
        v43[23920] = v52;
        *v40 = a3;
        *((_DWORD *)v43 + 23859) = a3;
        v50 = v44 + 0.0;
        v51 = v45 + 400.0;
        v52 = v46 + 0.0;
        v43[23909] = v44 + 0.0;
        v43[23910] = v45 + 400.0;
        v43[23911] = v46 + 0.0;
        if ( !*((_BYTE *)v43 + 97946) && !*((_BYTE *)v43 + 97947) )
        {
          v47 = &a1[747 * v5];
          *((_BYTE *)v47 + 97955) = 1;
          *((_BYTE *)v43 + 97947) = 1;
          v47[23939] = 5;
          v47[24447] = 0;
          v47[24454] = 1065353216;
          *((_BYTE *)v47 + 97949) = 1;
        }
        v48 = sub_608332B0(&v50, a1[23813] + 52);
        v43[23936] = 0.0;
        *((_DWORD *)v43 + 23937) = v48;
        v43[23938] = 0.0;
        v43[24461] = 6.0;
        v43[24462] = 16.0;
        v43[24463] = 16.0;
        v43[24469] = 0.0;
        v43[24468] = 0.0;
        v43[24467] = 0.0;
        v43[24466] = 0.0;
        v43[24465] = 0.0;
        v43[24464] = 0.0;
        v43[24470] = 1.0;
        v43[23913] = -40.0;
        v43[24472] = 3.0;
        v43[24473] = 3.0;
        v43[24474] = 25.0;
        v43[24475] = -1.5;
        v43[24477] = -30.0;
        v43[24478] = 25.0;
        v43[24479] = 0.95;
        v43[24485] = 0.0;
        *((_DWORD *)v43 + 24481) = dword_60CA16B4;
        *((_DWORD *)v43 + 24482) = dword_60CA16B8;
        *((_DWORD *)v43 + 24483) = dword_60CA16BC;
        *((_DWORD *)v43 + 24484) = dword_60CA16B0;
        v43[24460] = -1.5;
        v43[24458] = -30.0;
        return 97832;
      }
    }
  }
  return result;
}
