/* sub_60526910
 * address: 0x60526910   size: 1264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60526910(_DWORD *a1, int *a2, int a3)
{
  int v4; // r5
  int v5; // r0
  int *v6; // r1
  int v7; // r7
  int v8; // r10
  int v9; // r0
  int v10; // r7
  int v11; // r1
  _DWORD *v12; // r11
  int result; // r0
  _BYTE *v14; // r9
  int v15; // r4
  int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // r2
  unsigned int v19; // r0
  int v20; // r1
  int v21; // r0
  unsigned int v22; // r0
  int v23; // r1
  unsigned int v24; // r1
  unsigned int v25; // r2
  unsigned int v26; // r0
  int v27; // r1
  int v28; // r1
  int v29; // r4
  int v30; // r5
  int v31; // r1
  int v32; // r1
  char *v33; // [sp+Ch] [bp-9Ch]
  _DWORD *v34; // [sp+14h] [bp-94h]
  int v35; // [sp+18h] [bp-90h]
  int v36; // [sp+48h] [bp-60h]
  int *v37; // [sp+4Ch] [bp-5Ch]
  int v38; // [sp+50h] [bp-58h]
  int v39; // [sp+54h] [bp-54h]
  int v40; // [sp+58h] [bp-50h]
  _DWORD v42[18]; // [sp+60h] [bp-48h] BYREF

  v4 = a3;
  v6 = a1 + 1155;
  v5 = a1[1155];
  v37 = v6;
  v36 = *((unsigned __int8 *)v6 + 53);
  v38 = dword_60C99DEC;
  if ( *((_BYTE *)v6 + 53) )
  {
    v7 = a1[1156];
    if ( a3 )
      v7 = v5 - v7;
  }
  else
  {
    v7 = v5;
  }
  v42[1] = a1[985];
  v42[2] = a1[988];
  v42[3] = a1[986];
  v42[4] = a1[987];
  v42[5] = a1[1029];
  v42[6] = a1[1026];
  sub_60473DE4(a1 + 11, 8u, &dword_60CA998C, 0);
  v42[7] = *(_DWORD *)(sub_6047482C((int)(a1 + 11), 8u) + 12);
  sub_60473DE4(a1 + 11, 9u, &dword_60CA9994, 0);
  v8 = 0;
  v40 = v4;
  v42[8] = *(_DWORD *)(sub_6047482C((int)(a1 + 11), 9u) + 12);
  v34 = a1 + 1171;
  v9 = v7 - 1;
  v10 = 0;
  v11 = v38;
  v33 = (char *)&unk_60B03878 + 16 * v9;
  v39 = 0;
  v35 = 0;
  do
  {
    v12 = (_DWORD *)(v11 + v8);
    v14 = (_BYTE *)(v11 + v8 + 36);
    result = (unsigned __int8)*v14;
    if ( *v14 )
    {
      result = v12[14];
      if ( result == v4 )
      {
        v15 = operator_new(0xC48u);
        *(_DWORD *)v15 = 4;
        FIELD_U8(v15, 4) = 0;
        FIELD_U32(v15, 8) = 0;
        FIELD_U32(v15, 12) = &off_60BFFFDC;
        FIELD_U32(v15, 16) = &off_60BFFFEC;
        FIELD_U32(v15, 20) = &off_60C00010;
        FIELD_U32(v15, 24) = v15 + 12;
        FIELD_U32(v15, 28) = 0;
        StateMgr_ctor((StateMgr *)(v15 + 32), (StateExecuter *)(v15 + 16), (StateBase *)&dword_60CAA15C);
        FIELD_U32(v15, 12) = &off_60BFFFCC;
        FIELD_U32(v15, 48) = 9;
        FIELD_U32(v15, 52) = 0;
        sub_604024E0(v15 + 56);
        FIELD_U32(v15, 3044) = 2;
        FIELD_U32(v15, 3048) = 2;
        FIELD_U8(v15, 3076) = 0;
        FIELD_U32(v15, 3072) = 0;
        FIELD_U32(v15, 3068) = 0;
        FIELD_U32(v15, 3064) = 0;
        FIELD_U32(v15, 3060) = 0;
        FIELD_U32(v15, 3056) = 0;
        FIELD_U32(v15, 3052) = 0;
        FIELD_U32(v15, 3080) = &off_60C0004C;
        FIELD_U32(v15, 3084) = &off_60C0005C;
        FIELD_U32(v15, 3088) = &off_60C00080;
        FIELD_U32(v15, 3092) = v15 + 3080;
        FIELD_U32(v15, 3096) = 0;
        StateMgr_ctor((StateMgr *)(v15 + 3100), (StateExecuter *)(v15 + 3084), (StateBase *)&dword_60CAA284);
        FIELD_U32(v15, 3080) = &off_60C0003C;
        FIELD_U32(v15, 3116) = 0;
        FIELD_U32(v15, 3120) = 0;
        FIELD_U32(v15, 3124) = 0;
        FIELD_U32(v15, 3128) = 0;
        FIELD_U32(v15, 3132) = 0;
        FIELD_U32(v15, 3136) = 0;
        FIELD_U32(v15, 3140) = 0;
        v16 = *a2;
        if ( (unsigned int)*a2 >= 4 )
          v16 = 0;
        a1[v16 + 1038] = v15;
        if ( v36 )
        {
          if ( v40 )
          {
            v17 = 2;
            if ( v35 < 2 )
              v17 = v35;
            if ( v35 < 0 )
              v17 = 0;
            v18 = 0;
            if ( v17 < 4 )
              v18 = v17;
            v19 = dword_60B0392C[3 * *v34 + v17];
            v20 = v17 + 1;
            a1[v18 + 1161] = v19;
            if ( v19 >= 0x43 )
              v19 = 0;
            v21 = a1[v19 + 943];
            v35 = v20;
          }
          else
          {
            v24 = 2;
            if ( v39 < 2 )
              v24 = v39;
            if ( v39 < 0 )
              v24 = 0;
            v25 = 0;
            if ( v24 < 4 )
              v25 = v24;
            v26 = dword_60B038F0[3 * *v34 + v24];
            v27 = v24 + 1;
            a1[v25 + 1157] = v26;
            if ( v26 >= 0x43 )
              v26 = 0;
            v21 = a1[v26 + 943];
            v39 = v27;
          }
        }
        else
        {
          v22 = *(_DWORD *)&v33[4 * *a2];
          v23 = 0;
          if ( (unsigned int)v39 < 4 )
            v23 = v39;
          a1[v23 + 1157] = v22;
          if ( v22 >= 0x43 )
            v22 = 0;
          v21 = a1[v22 + 943];
          ++v39;
        }
        v42[0] = v21;
        v28 = *a2;
        v29 = a1[15];
        if ( (unsigned int)*a2 >= 4 )
          v28 = 0;
        v30 = a1[v28 + 1038];
        v31 = *v37;
        *(_DWORD *)v30 = v10;
        FIELD_U32(v30, 3140) = v14;
        if ( v31 == 2 )
        {
          v32 = 1;
          FIELD_U8(v30, 4) = 1;
        }
        else
        {
          v32 = FIELD_U8(v30, 4);
          if ( FIELD_U8(v30, 4) )
            v32 = 1;
        }
        FIELD_U32(v30, 8) = v21;
        sub_60529894(v30 + 12, v10, dword_60B03990[v12[12]], v12[15], v21, v32);
        sub_605299D4(v30 + 3080, v12[14], v42, v29);
        result = *a2 + 1;
        *a2 = result;
        v4 = v40;
        v11 = v38;
      }
    }
    v8 += 72;
    ++v10;
  }
  while ( v8 != 288 );
  return result;
}
