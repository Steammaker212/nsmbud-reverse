/* sub_60855EE4
 * address: 0x60855EE4   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60855EE4(_DWORD *a1, int a2, int a3, float *a4, int *a5, int a6, int a7, int a8)
{
  float *v8; // r8
  int v12; // r0
  int v13; // r3
  unsigned __int8 *v14; // r0
  int v15; // r2
  unsigned __int8 *v16; // r5
  int v17; // r1
  int v18; // r5
  int v19; // r1
  int v20; // r0
  int v21; // r2
  int v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r0
  float *v26; // r0
  int v27; // r2
  int v28; // r3
  int v29; // r0
  _DWORD *v30; // r4
  int v31; // t1
  int v32; // r2
  _DWORD v35[34]; // [sp+10h] [bp-88h] BYREF

  v8 = 0;
  FIELD_U16(a6, 40) = 0;
  FIELD_U16(a6, 42) = 0;
  FIELD_U16(a6, 44) = 0;
  FIELD_U32(a6, 48) = 0;
  v12 = a1[3];
  if ( !a5 )
  {
    if ( v12 || !FIELD_U8(a6, 68) )
      goto LABEL_28;
    qmemcpy(v35, a4, 0x54u);
    v35[0] = 829715056;
    v35[21] = 0;
    v35[22] = 1065353216;
    v35[23] = 1065353216;
    v18 = (*(int (__fastcall **)(_DWORD *, int, int, int, _DWORD *, _DWORD, int))(*a1 + 64))(
            a1,
            a2,
            a3,
            829715056,
            v35,
            0,
            a6);
    FIELD_U32(v18, 180) = a1;
LABEL_16:
    v8 = 0;
    if ( v18 )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( !v12 )
  {
    v18 = a5[3];
    goto LABEL_16;
  }
  if ( *a5 < 1 )
  {
LABEL_27:
    v8 = 0;
  }
  else
  {
    v13 = 0;
    v8 = 0;
    v14 = (unsigned __int8 *)a5[1];
LABEL_5:
    v15 = 12;
    v16 = v14;
    do
    {
      if ( *((unsigned __int8 *)a4 + v15) != *v16 )
      {
        ++v13;
        v14 += 40;
        if ( v13 < *a5 )
          goto LABEL_5;
        goto LABEL_28;
      }
      if ( !*((_BYTE *)a4 + v15) )
        break;
      v17 = v15 - 11;
      ++v16;
      ++v15;
    }
    while ( v17 < 24 );
    v19 = a5[1] + 40 * v13;
    if ( !v19 )
      goto LABEL_27;
    v20 = FIELD_U32(v19, 28);
    v8 = 0;
    v21 = 0;
    if ( v20 )
      v8 = (float *)(a5[2] + v20);
    FIELD_U16(a6, 40) = FIELD_U8(v19, 24);
    FIELD_U16(a6, 42) = FIELD_U8(v19, 25);
    FIELD_U16(a6, 44) = FIELD_U8(v19, 26);
    v22 = FIELD_U32(v19, 36);
    if ( v22 )
      v21 = a5[2] + v22;
    FIELD_U32(a6, 48) = v21;
    v23 = FIELD_U32(v19, 32);
    if ( v23 )
    {
      v24 = 0;
      if ( v23 != 1 )
        v24 = a5[2] + v23;
      FIELD_U32(a6, 64) = v24;
    }
  }
LABEL_28:
  v18 = (*(int (__fastcall **)(_DWORD *, int, int, int, float *, float *, int))(*a1 + 64))(a1, a2, a3, a8, a4, v8, a6);
  if ( !v18 )
    return 0;
LABEL_29:
  if ( !a1[3] )
    a1[3] = v18;
  v25 = FIELD_U32(a6, 52);
  if ( v25 )
    sub_608589FC(v25, v18);
  if ( a8 == 829715056 )
  {
    v26 = v8;
    v27 = FIELD_U32(a6, 36);
    if ( !v8 )
      v26 = a4;
    v28 = *((_DWORD *)v26 + 21);
    if ( !v8 )
      v27 = a7;
    *(float *)v35 = v26[21];
    v35[1] = v26 + 24;
    v35[2] = v26;
    v35[3] = v18;
    v35[4] = v27;
    *(float *)&v35[5] = (float)(FIELD_F32(v18, 56) / a4[19]) * v26[22];
    *(float *)&v35[6] = (float)(FIELD_F32(v18, 60) / a4[20]) * v26[23];
    v29 = (*(int (__fastcall **)(_DWORD *, int, int, float *, _DWORD *, int))(*a1 + 68))(
            a1,
            a2,
            a3,
            &v26[10 * v28 + 24],
            v35,
            a6);
    if ( v29 )
    {
      FIELD_U32(v18, 180) = v29;
      v31 = a1[10];
      v30 = a1 + 10;
      v32 = FIELD_U32(v18, 172);
      FIELD_U32(v18, 172) = v31;
      FIELD_U32(v32, 4) = v30;
      *(_DWORD *)(*v30 + 4) = v18 + 172;
      *v30 = v32;
    }
  }
  return v18;
}
