/* sub_608AF9A0
 * address: 0x608AF9A0   size: 1856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AF9A0(int a1)
{
  int v2; // s0
  int v3; // r0
  int v4; // r5
  int v5; // r7
  int *v6; // r1
  float v7; // s27
  float v8; // s29
  float v9; // s31
  float v10; // s16
  float v11; // s18
  int v12; // r11
  float v13; // s24
  float v14; // s26
  float v15; // s20
  float v16; // s28
  float v17; // s22
  float v18; // s30
  float v19; // s17
  float v20; // s19
  float v21; // s21
  float v22; // s23
  float v23; // s25
  int v24; // r10
  int v25; // r8
  void *v26; // r9
  int v27; // r6
  int result; // r0
  _DWORD *v29; // r10
  int v30; // r8
  int v31; // r7
  int v32; // r6
  float v33; // s16
  int v34; // r5
  int v35; // r2
  int v36; // r5
  int v37; // r6
  int v38; // r7
  int v39; // r5
  int v40; // r6
  _DWORD *v41; // r6
  int v42; // r6
  int v43; // r5
  int v44; // r6
  char v45; // r5
  int v46; // r0
  int v47; // r5
  _DWORD *v48; // r0
  int v49; // r7
  _DWORD *v50; // r6
  _DWORD *v51; // r5
  int i; // r7
  int v53; // r5
  int v54; // [sp+8h] [bp-188h]
  int v55; // [sp+Ch] [bp-184h]
  int v56; // [sp+10h] [bp-180h]
  int v57; // [sp+14h] [bp-17Ch]
  int v58; // [sp+18h] [bp-178h]
  int v59; // [sp+1Ch] [bp-174h]
  int v60; // [sp+20h] [bp-170h]
  int v61; // [sp+24h] [bp-16Ch]
  int v62; // [sp+28h] [bp-168h]
  int v63; // [sp+2Ch] [bp-164h]
  int v64; // [sp+30h] [bp-160h]
  float v65; // [sp+34h] [bp-15Ch]
  float v66; // [sp+38h] [bp-158h]
  float v67; // [sp+3Ch] [bp-154h]
  float v68; // [sp+40h] [bp-150h]
  float v69; // [sp+44h] [bp-14Ch]
  float v70; // [sp+48h] [bp-148h]
  float v71; // [sp+4Ch] [bp-144h]
  float v72; // [sp+50h] [bp-140h]
  float v73; // [sp+54h] [bp-13Ch]
  float v74; // [sp+58h] [bp-138h]
  float v75; // [sp+5Ch] [bp-134h]
  float v76; // [sp+60h] [bp-130h]
  int v77; // [sp+64h] [bp-12Ch]
  _BYTE v78[192]; // [sp+68h] [bp-128h] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
  sub_608B0124(a1);
  v3 = FIELD_U32(a1, 16);
  v4 = FIELD_U32(a1, 256);
  v5 = FIELD_S8(a1, 197);
  if ( FIELD_U32(a1, 76) != -1 )
    v4 = FIELD_U32(a1, 76);
  v77 = v2;
  v75 = (float)(FIELD_F32(a1, 244) * FIELD_F32(a1, 56)) * FIELD_F32(a1, 112);
  v74 = (float)((float)(FIELD_F32(a1, 248) + FIELD_F32(a1, 60)) + FIELD_F32(v3, 48)) + FIELD_F32(a1, 124);
  if ( v5 == -1 )
  {
    v5 = FIELD_U32(v3, 52);
    if ( v5 == -1 )
    {
      v5 = FIELD_U32(a1, 128);
      if ( v5 == -1 )
      {
        v5 = FIELD_U32(a1, 68);
        v6 = (int *)(a1 + 64);
      }
      else
      {
        v6 = (int *)(a1 + 132);
      }
    }
    else
    {
      v6 = (int *)(v3 + 56);
    }
  }
  else
  {
    v6 = (int *)(a1 + 252);
  }
  v76 = FIELD_F32(v3, 80);
  v73 = FIELD_F32(a1, 100);
  v7 = FIELD_F32(a1, 364);
  v65 = FIELD_F32(a1, 368);
  v67 = FIELD_F32(a1, 372);
  v69 = FIELD_F32(a1, 376);
  v71 = FIELD_F32(a1, 380);
  v72 = FIELD_F32(a1, 384);
  v61 = FIELD_U32(a1, 348);
  v62 = FIELD_U32(a1, 352);
  v63 = FIELD_U32(a1, 356);
  v64 = FIELD_U32(a1, 360);
  v70 = FIELD_F32(a1, 304);
  v68 = FIELD_F32(a1, 104);
  v66 = FIELD_F32(a1, 300);
  v8 = FIELD_F32(a1, 296);
  v9 = FIELD_F32(a1, 292);
  v10 = FIELD_F32(a1, 288);
  v11 = FIELD_F32(a1, 284);
  v54 = FIELD_U32(a1, 316);
  v55 = FIELD_U32(a1, 320);
  v56 = FIELD_U32(a1, 324);
  v57 = FIELD_U32(a1, 328);
  v58 = FIELD_U32(a1, 332);
  v12 = FIELD_U32(a1, 336);
  v59 = FIELD_U32(a1, 340);
  v60 = FIELD_U32(a1, 344);
  v13 = FIELD_F32(a1, 120);
  v14 = FIELD_F32(v3, 64);
  v15 = FIELD_F32(v3, 68);
  v16 = FIELD_F32(v3, 72);
  v17 = FIELD_F32(v3, 76);
  v18 = FIELD_F32(a1, 308);
  v19 = FIELD_F32(a1, 116);
  v20 = FIELD_F32(a1, 84);
  v21 = FIELD_F32(a1, 88);
  v22 = FIELD_F32(a1, 92);
  v23 = FIELD_F32(a1, 96);
  v24 = *v6;
  v25 = FIELD_U32(a1, 280);
  v26 = sub_608C3B10();
  v27 = sub_608C2698(v26, 124, 1);
  FIELD_U32(v27, 4) = 10;
  FIELD_U32(v27, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  FIELD_U32(v27, 20) = v77;
  FIELD_F32(v27, 24) = v75;
  FIELD_F32(v27, 28) = v74;
  FIELD_U32(v27, 32) = v5;
  FIELD_U32(v27, 36) = v24;
  FIELD_U32(v27, 40) = v4;
  FIELD_F32(v27, 44) = v18 * (float)(v19 * (float)(v14 * v20));
  FIELD_U32(v27, 48) = v25;
  FIELD_U32(v27, 52) = v54;
  FIELD_U32(v27, 56) = v55;
  FIELD_U32(v27, 60) = v56;
  FIELD_U32(v27, 64) = v57;
  FIELD_U32(v27, 68) = v58;
  FIELD_U32(v27, 72) = v12;
  FIELD_U32(v27, 76) = v59;
  FIELD_U32(v27, 80) = v60;
  FIELD_U32(v27, 84) = v61;
  FIELD_U32(v27, 88) = v62;
  FIELD_U32(v27, 92) = v63;
  FIELD_U32(v27, 96) = v64;
  FIELD_F32(v27, 100) = (float)(v7 + v11) + (float)(v13 + v21);
  FIELD_F32(v27, 104) = (float)(v65 + v10) + v22;
  FIELD_F32(v27, 108) = (float)(v67 + v9) + v15;
  FIELD_F32(v27, 112) = (float)(v69 + v8) + (float)(v16 + v23);
  FIELD_F32(v27, 116) = (float)(v71 + v66) + (float)(v17 + v73);
  FIELD_F32(v27, 120) = (float)(v72 + v70) + (float)(v76 + v68);
  sub_608C2C1C(v26);
  result = FIELD_U32(a1, 388);
  if ( result )
  {
    if ( sub_608B0F28() == 1 )
    {
      v29 = (_DWORD *)sub_608B0EE4(FIELD_U32(a1, 388));
      if ( (int)v29[1] >= 1 )
      {
        v30 = FIELD_U32(a1, 16);
        if ( v30 )
        {
          v31 = 4;
          v32 = 0;
          do
          {
            v33 = sub_608ACA88(v30, v31);
            v34 = sub_608C2698(v26, 28, 1);
            FIELD_U32(v34, 4) = 11;
            FIELD_U32(v34, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
            FIELD_U32(v34, 20) = v31;
            FIELD_F32(v34, 24) = v33 + *(float *)(*v29 + v32);
            sub_608C2C1C(v26);
            v35 = v31 - 3;
            v32 += 4;
            ++v31;
          }
          while ( v35 < v29[1] );
        }
        else
        {
          v36 = 0;
          v37 = 0;
          do
          {
            v38 = sub_608C2698(v26, 28, 1);
            FIELD_U32(v38, 4) = 11;
            FIELD_U32(v38, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
            FIELD_U32(v38, 20) = v37 + 4;
            FIELD_F32(v38, 24) = *(float *)(*v29 + v36) + 0.0;
            sub_608C2C1C(v26);
            ++v37;
            v36 += 4;
          }
          while ( v37 < v29[1] );
        }
      }
    }
    if ( sub_608B0FF8(FIELD_U32(a1, 388)) == 1 )
    {
      v39 = sub_608B0FC0(FIELD_U32(a1, 388));
      v40 = sub_608C2698(v26, 24, 1);
      FIELD_U32(v40, 4) = 12;
      FIELD_U32(v40, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
      FIELD_U8(v40, 20) = v39;
      sub_608C2C1C(v26);
      if ( v39 == 1 )
      {
        qmemcpy(v78, (const void *)sub_608B0F8C(FIELD_U32(a1, 388)), sizeof(v78));
        v41 = (_DWORD *)sub_608C2698(v26, 212, 1);
        v41[1] = 13;
        v41[4] = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
        qmemcpy(v41 + 5, v78, 0xC0u);
        sub_608C2C1C(v26);
        if ( *(int *)(sub_608B0F64(FIELD_U32(a1, 388)) + 200) >= 1 )
        {
          v42 = 0;
          do
          {
            v43 = sub_608C2698(v26, 28, 1);
            FIELD_U32(v43, 4) = 14;
            FIELD_U32(v43, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
            FIELD_U32(v43, 20) = v42;
            FIELD_U8(v43, 24) = sub_608B0FD8(FIELD_U32(a1, 388), v42);
            sub_608C2C1C(v26);
            ++v42;
          }
          while ( v42 < *(_DWORD *)(sub_608B0F64(FIELD_U32(a1, 388)) + 200) );
        }
      }
    }
    result = sub_608B1060(FIELD_U32(a1, 388));
    if ( result == 1 )
    {
      v44 = sub_608C2698(v26, 24, 1);
      FIELD_U32(v44, 4) = 16;
      FIELD_U32(v44, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
      v45 = 0;
      v46 = FIELD_U32(a1, 388);
      if ( v46
        && sub_608B1060(v46) == 1
        && (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 260) + 8))(FIELD_U32(a1, 260)) >= 1 )
      {
        v47 = 0;
        while ( 1 )
        {
          v48 = (_DWORD *)sub_608B1008(FIELD_U32(a1, 388));
          if ( v48[1] > v47 )
          {
            if ( *(_BYTE *)(*v48 + v47) )
              break;
          }
          if ( ++v47 >= (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 260) + 8))(FIELD_U32(a1, 260)) )
          {
            v45 = 0;
            goto LABEL_34;
          }
        }
        v45 = 1;
      }
LABEL_34:
      FIELD_U8(v44, 20) = v45;
      sub_608C2C1C(v26);
      result = FIELD_U8(v44, 20);
      if ( FIELD_U8(v44, 20) )
      {
        v49 = FIELD_U32(a1, 240);
        v50 = (_DWORD *)sub_608B1008(FIELD_U32(a1, 388));
        v51 = (_DWORD *)sub_608C2698(v26, 24, 1);
        v51[1] = 15;
        v51[4] = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
        v51[5] = v49;
        sub_608C2C1C(v26);
        result = v50[1];
        if ( result >= 1 )
        {
          for ( i = 0; i < result; ++i )
          {
            v53 = sub_608C2698(v26, 28, 1);
            FIELD_U32(v53, 4) = 17;
            FIELD_U32(v53, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
            FIELD_U32(v53, 20) = i;
            FIELD_U8(v53, 24) = *(_BYTE *)(*v50 + i);
            sub_608C2C1C(v26);
            result = v50[1];
          }
        }
      }
    }
  }
  return result;
}
