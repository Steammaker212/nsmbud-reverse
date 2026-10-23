/* sub_601BC5FC
 * address: 0x601BC5FC   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BC5FC(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int *a9,
        float *a10)
{
  char v13; // r0
  int *v14; // r0
  int v15; // r0
  bool v16; // zf
  int *v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r0
  bool v21; // zf
  int v22; // r0
  float v23; // r1
  int result; // r0
  int v25; // r1
  int v26; // r1
  bool v27; // vf
  int v28; // r0
  int v29; // r4
  int v30; // r1
  int v31; // r2
  _DWORD v32[3]; // [sp+0h] [bp-60h] BYREF
  _DWORD v33[3]; // [sp+Ch] [bp-54h] BYREF
  int v34; // [sp+18h] [bp-48h]
  int v35; // [sp+1Ch] [bp-44h]
  int v36; // [sp+20h] [bp-40h]
  float v37; // [sp+24h] [bp-3Ch]
  float v38; // [sp+28h] [bp-38h]
  int v39; // [sp+2Ch] [bp-34h]
  int v40; // [sp+30h] [bp-30h]
  int v41; // [sp+34h] [bp-2Ch]
  int v42; // [sp+38h] [bp-28h]

  memset(v33, 255, sizeof(v33));
  memset(v32, 255, sizeof(v32));
  v13 = 0;
  LOBYTE(v41) = 0;
  v40 = a5;
  v42 = a2;
  if ( a6 == 1 )
  {
    v13 = 1;
    LOBYTE(v41) = 1;
  }
  if ( (a1[66] | 1) == 7 && a7 == 1 )
  {
    v13 |= 2u;
    LOBYTE(v41) = v13;
  }
  if ( a8 == 1 )
    LOBYTE(v41) = v13 | 4;
  if ( (a5 & 0xFFFFFFFE) != 4 )
  {
    sub_6019EC34(v33, a4);
    sub_6019EC34(v32, a3);
    if ( a9 )
    {
      v34 = *a9;
      v35 = a9[1];
      v14 = a9 + 2;
    }
    else
    {
      if ( *a3 == -1 )
        goto LABEL_16;
      v15 = a3[1];
      v16 = v15 == -1;
      if ( v15 != -1 )
        v16 = a3[2] == -1;
      if ( v16 )
LABEL_16:
        v17 = &dword_60B3B95C;
      else
        v17 = (int *)sub_601E0040(a3);
      v34 = *v17;
      v18 = v17[1];
      v14 = v17 + 2;
      v35 = v18;
    }
    v36 = *v14;
    if ( a10 )
    {
      v37 = *a10;
      v38 = a10[1];
      v19 = *((_DWORD *)a10 + 2);
LABEL_27:
      v39 = v19;
      goto LABEL_28;
    }
    if ( *a4 == -1 )
      goto LABEL_26;
    v20 = a4[1];
    v21 = v20 == -1;
    if ( v20 != -1 )
      v21 = a4[2] == -1;
    if ( v21 )
    {
LABEL_26:
      v37 = 0.0;
      v19 = 0;
      v38 = 0.0;
      goto LABEL_27;
    }
    v22 = sub_601E0040(a4);
    v37 = *(float *)v22;
    v23 = FIELD_F32(v22, 4);
    v38 = v23;
    v39 = FIELD_U32(v22, 8);
    if ( a5 == 2 )
      v38 = v23 + 60.0;
  }
LABEL_28:
  result = a1[284];
  v25 = a1[286];
  if ( v25 < result )
  {
    a1[286] = v25 + 1;
    v26 = a1[285] + v25;
    v27 = __OFSUB__(v26, result);
    v28 = v26 - result;
    if ( v28 < 0 != v27 )
      v28 = v26;
    v29 = a1[283] + 60 * v28;
    sub_6019EC34((_DWORD *)v29, v32);
    sub_6019EC34((_DWORD *)(v29 + 12), v33);
    FIELD_U32(v29, 24) = v34;
    FIELD_U32(v29, 28) = v35;
    FIELD_U32(v29, 32) = v36;
    FIELD_F32(v29, 36) = v37;
    FIELD_F32(v29, 40) = v38;
    FIELD_U32(v29, 44) = v39;
    result = v40;
    v30 = v41;
    v31 = v42;
    FIELD_U32(v29, 48) = v40;
    FIELD_U32(v29, 52) = v30;
    FIELD_U32(v29, 56) = v31;
  }
  return result;
}
