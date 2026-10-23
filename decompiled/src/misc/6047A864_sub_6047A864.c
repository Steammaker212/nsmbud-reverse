/* sub_6047A864
 * address: 0x6047A864   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047A864(int a1, int a2, float **a3)
{
  float *v4; // r2
  int v5; // r3
  int v6; // r7
  int v7; // r1
  int v8; // r1
  float *v9; // r0
  int v10; // r1
  int v11; // r3
  int v12; // r7
  int v13; // r2
  int v14; // r1
  float *v15; // r5
  int v16; // r0
  int v17; // r6
  int v18; // r7
  float v19; // s16
  int v20; // r0
  int v21; // s2
  int v22; // r8
  float v23; // s4
  int v24; // r7
  float v25; // s18
  float v26; // s16
  float v27; // s20
  float v29; // s0
  float *v30; // r0
  float v31; // s0
  _DWORD v32[14]; // [sp+0h] [bp-38h] BYREF

  v4 = a3[1];
  v5 = (int)v4 - 2;
  v6 = *((unsigned __int16 *)v4 - 1);
  if ( v6 == 15 )
  {
    v7 = (int)(v4 + 1);
LABEL_5:
    a3[1] = (float *)v7;
    if ( *(_WORD *)v4 != 21 )
    {
      if ( !*(_WORD *)v4 )
      {
        v8 = *((unsigned __int16 *)v4 + 1);
        if ( v8 == 2 )
        {
          v29 = FIELD_F32(a1, 56);
          v30 = *a3;
          v31 = (float)(v29 * (float)*((unsigned __int16 *)v4 + 3)) / 100.0;
          v30[3] = v31;
          v30[4] = v31;
        }
        else if ( v8 == 3 )
        {
          v9 = *a3;
          v10 = *((unsigned __int8 *)v4 + 6);
          v11 = *((unsigned __int8 *)v4 + 7);
          v12 = *((unsigned __int8 *)v4 + 8);
          v13 = *((unsigned __int8 *)v4 + 9);
          *(_BYTE *)v9 = v10;
          v14 = v10 | (v11 << 8) | (v12 << 16) | (v13 << 24);
          *((_BYTE *)v9 + 3) = HIBYTE(v14);
          *((_BYTE *)v9 + 2) = BYTE2(v14);
          *((_BYTE *)v9 + 1) = BYTE1(v14);
          *((_BYTE *)v9++ + 4) = v14;
          *((_BYTE *)v9 + 3) = HIBYTE(v14);
          *((_BYTE *)v9 + 2) = BYTE2(v14);
          *((_BYTE *)v9 + 1) = BYTE1(v14);
        }
      }
      return 1;
    }
    if ( *((_WORD *)v4 + 1) == 2 )
      goto LABEL_14;
    return 1;
  }
  if ( v6 == 14 )
  {
    v7 = v5 + *((unsigned __int16 *)v4 + 2) + 8;
    goto LABEL_5;
  }
  if ( a2 == 5 )
  {
LABEL_14:
    FIELD_F32(a1, 56) = (*a3)[3];
    return 1;
  }
  if ( a2 != 4 )
    return sub_60987F08(a1, a2, a3, v5);
  v15 = *a3;
  v16 = FIELD_U32(dword_60CD0C84, 856);
  v32[0] = &sead__SafeStringBase__vtable;
  v32[1] = "redpro_PictureFontOutline_42_RGBA8.bffnt";
  v17 = sub_60986AC8(v16, v32);
  v18 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v15 + 10) + 16))(*((_DWORD *)v15 + 10));
  v19 = v15[3];
  v20 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v15 + 10) + 20))(*((_DWORD *)v15 + 10));
  v21 = v18;
  v22 = *((_DWORD *)v15 + 10);
  v23 = v15[4];
  v24 = *(unsigned __int8 *)a3[1];
  *((_DWORD *)v15 + 10) = v17;
  v25 = (float)v20 * v23;
  v26 = (float)v21 * v19;
  sub_60849BB8(v15, v26, v25);
  v27 = (float)-(*(int (__fastcall **)(int))(*(_DWORD *)v17 + 88))(v17) * v15[4];
  v15[6] = v15[6] + v27;
  sub_60849FDC(v15, v24);
  a3[1] = (float *)((char *)a3[1] + 2);
  *((_DWORD *)v15 + 10) = v22;
  sub_60849BB8(v15, v26, v25);
  v15[6] = v15[6] - v27;
  return 1;
}
