/* sub_6049CB10
 * address: 0x6049CB10   size: 1044   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6049CB10(_DWORD *a1)
{
  int v2; // r6
  int v3; // r5
  int *result; // r0
  int *v5; // r1
  float v6; // s18
  float v7; // s16
  unsigned int v8; // r10
  unsigned int v9; // r0
  _DWORD *v10; // r11
  int v11; // r8
  _DWORD **v12; // r11
  int v13; // t1
  unsigned int v14; // r0
  int v15; // r9
  _DWORD *v16; // r2
  float *v17; // r0
  int v18; // r1
  unsigned int v19; // r1
  float v20; // s0
  int v21; // s0
  int v22; // r0
  int v23; // r1
  int v24; // r0
  _DWORD *v25; // r1
  _DWORD *v26; // r1
  int **v27; // [sp+14h] [bp-4Ch]

  v2 = dword_60C99DEC;
  v3 = FIELD_U8(dword_60C99DEC, 522);
  *(_BYTE *)(a1[5069] + 2694) = v3;
  sub_604A1E08(a1);
  result = &dword_6049CF28;
  v5 = dword_6049CF30;
  if ( v3 )
  {
    result = &dword_6049CF2C;
    v5 = &dword_6049CF30[1];
  }
  v27 = (int **)(a1 + 5624);
  if ( (int)a1[5624] >= 1 )
  {
    v6 = *(float *)result;
    v7 = *(float *)v5;
    v8 = 0;
    do
    {
      v9 = 0;
      if ( v8 < 4 )
        v9 = v8;
      v10 = &a1[v9];
      v13 = v10[5069];
      v12 = (_DWORD **)(v10 + 5069);
      v11 = v13;
      v14 = 0;
      if ( v8 < 6 )
        v14 = v8;
      v15 = v2 + 72 * v14;
      FIELD_U32(v11, 2540) = v8;
      FIELD_U8(v11, 2689) = 1;
      sub_604056C4(*v12, FIELD_U32(v15, 44));
      v16 = *v12;
      v17 = (float *)(v11 + 380);
      v16[104] = FIELD_U32(v11, 380);
      v16[105] = FIELD_U32(v11, 384);
      v16[106] = FIELD_U32(v11, 388);
      v18 = (int)*v12;
      FIELD_U32(v18, 2540) = v8;
      FIELD_U32(v18, 180) = v8;
      if ( !FIELD_U8(v2, 522) )
      {
        FIELD_F32(v11, 380) = v6 + FIELD_F32(v11, 380);
        FIELD_F32(v11, 384) = v7 + FIELD_F32(v11, 384);
        FIELD_F32(v11, 388) = FIELD_F32(v11, 388) + 0.0;
        v23 = (int)*v12;
        if ( !*((_BYTE *)*v12 + 2690) && !FIELD_U8(v23, 2691) )
        {
          FIELD_U8(v23, 2699) = 1;
          FIELD_U8(v23, 2691) = 1;
          FIELD_U32(v23, 500) = 5;
          FIELD_U32(v23, 2532) = 0;
          FIELD_U32(v23, 2560) = 1065353216;
          FIELD_U8(v23, 2693) = 1;
        }
        v24 = sub_608332B0(v17, a1[908] + 52);
        v25 = *v12;
        v21 = -1038090240;
        v25[122] = 0;
        v25[123] = v24;
        v25[124] = 0;
        goto LABEL_24;
      }
      v19 = 0;
      v20 = *v17;
      if ( v8 < 7 )
        v19 = v8;
      if ( a1[v19 + 5583] == 1 )
      {
        FIELD_F32(v11, 380) = v6 + v20;
        FIELD_F32(v11, 384) = v7 + FIELD_F32(v11, 384);
        FIELD_F32(v11, 388) = FIELD_F32(v11, 388) + 0.0;
        v21 = 0;
        v22 = (int)*v12;
        if ( *((_BYTE *)*v12 + 2690) )
          goto LABEL_24;
        v21 = 0;
        if ( FIELD_U8(v22, 2691) )
          goto LABEL_24;
        FIELD_U8(v22, 2699) = 1;
        FIELD_U8(v22, 2691) = 1;
        FIELD_U32(v22, 500) = 3;
        FIELD_U32(v22, 2532) = 1;
      }
      else
      {
        FIELD_F32(v11, 380) = v20 - v6;
        FIELD_F32(v11, 384) = FIELD_F32(v11, 384) - v7;
        v21 = 0;
        v22 = (int)*v12;
        if ( *((_BYTE *)*v12 + 2690) )
          goto LABEL_24;
        v21 = 0;
        if ( FIELD_U8(v22, 2691) )
          goto LABEL_24;
        FIELD_U8(v22, 2699) = 1;
        FIELD_U8(v22, 2691) = 1;
        FIELD_U32(v22, 500) = 3;
        FIELD_U32(v22, 2532) = 2;
      }
      v21 = 0;
      FIELD_U32(v22, 2560) = 1065353216;
      FIELD_U8(v22, 2693) = 1;
LABEL_24:
      (*v12)[99] = v21;
      v26 = *v12;
      v26[95] = FIELD_U32(v11, 380);
      v26[96] = FIELD_U32(v11, 384);
      v26[97] = FIELD_U32(v11, 388);
      (*v12)[647] = 1086324736;
      (*v12)[648] = 1098907648;
      (*v12)[649] = 1098907648;
      (*v12)[650] = 0;
      (*v12)[651] = 0;
      (*v12)[652] = 0;
      (*v12)[653] = 0;
      (*v12)[656] = 1065353216;
      (*v12)[658] = 1077936128;
      (*v12)[659] = 1077936128;
      (*v12)[646] = -1077936128;
      (*v12)[644] = -1041235968;
      (*v12)[660] = 1103626240;
      (*v12)[661] = -1077936128;
      (*v12)[663] = -1041235968;
      (*v12)[664] = 1103626240;
      (*v12)[665] = 1064514355;
      (*v12)[671] = 0;
      (*v12)[667] = dword_60CA0BA0;
      (*v12)[668] = dword_60CA0BA4;
      (*v12)[669] = dword_60CA0BA8;
      (*v12)[670] = dword_60CA0B9C;
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)(*v12)[4] + 4))((*v12)[4], FIELD_U8(v15, 64));
      ++v8;
      *((_BYTE *)*v12 + 2695) = 0;
      result = *v27;
    }
    while ( (int)v8 < (int)*v27 );
  }
  return result;
}
