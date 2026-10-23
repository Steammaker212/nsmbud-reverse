/* CaptureScale_ref
 * address: 0x6097FA5C   size: 904   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CaptureScale_ref(int a1, int a2, int a3)
{
  int v3; // r9
  int result; // r0
  bool v7; // zf
  _BYTE *v8; // r4
  const char **v9; // r0
  float v10; // s16
  float v11; // s18
  int v12; // r10
  float v13; // s20
  int v14; // r7
  float v15; // s16
  float v16; // s18
  int v17; // r10
  _WORD *v18; // r11
  int v19; // r3
  int v20; // r4
  int v21; // r6
  int v22; // r7
  int v23; // r3
  int v24; // r4
  int v25; // r6
  int v26; // r7
  int v27; // r3
  int v28; // r4
  int v29; // r6
  int v30; // r7
  __int16 v31; // r2
  unsigned int *v32; // r0
  unsigned int v33; // r1
  unsigned int v34; // r1
  unsigned int v35; // r1
  float v36; // r0
  float v37; // r2
  float v38; // r1
  float v39; // r3
  unsigned __int8 *v40; // r0
  int v41; // r0
  int v42; // r0
  bool v43; // zf
  _DWORD *v44; // r5
  int v45; // t1
  int v46; // [sp+24h] [bp-22Ch]
  int v47; // [sp+28h] [bp-228h]
  float *v48; // [sp+30h] [bp-220h]
  int v49; // [sp+34h] [bp-21Ch]
  _BYTE v50[24]; // [sp+38h] [bp-218h] BYREF
  _DWORD v51[20]; // [sp+50h] [bp-200h] BYREF
  int v52; // [sp+A0h] [bp-1B0h] BYREF
  _BYTE v53[4]; // [sp+1A8h] [bp-A8h] BYREF
  int v54; // [sp+1ACh] [bp-A4h]

  result = FIELD_U8(a2, 228);
  if ( !FIELD_U8(a2, 228) )
  {
    result = FIELD_U8(a1, 64);
    if ( (result & 1) != 0 )
    {
      result = FIELD_U8(a1, 65);
      v7 = result == 0;
      if ( FIELD_U8(a1, 65) )
      {
        v3 = FIELD_U32(a2, 224);
        v7 = v3 == 0;
      }
      if ( !v7 )
      {
        v8 = (_BYTE *)(a1 + 180);
        FIELD_U32(a1, 216) = CapturePaneWork_ref(
                                  a1,
                                  (_DWORD *)a2,
                                  (char *)(a1 + 180),
                                  FIELD_U32(a1, 188),
                                  a1 + 220,
                                  a1 + 288,
                                  FIELD_U32(a1, 184),
                                  a3);
        v9 = sub_6085982C(a1, "CaptureScale");
        if ( v9 )
        {
          v10 = FIELD_F32(a1, 60);
          v11 = FIELD_F32(a1, 56);
          v12 = FIELD_U32(v3, 16);
          v13 = *(float *)&v9[1][(_DWORD)v9];
          v14 = dword_60CD09F8;
          sub_60920628(v51, FIELD_U32(a1, 216));
          v15 = v13 * v10;
          v16 = v13 * v11;
          v17 = sub_6093E338(
                  v14,
                  v12,
                  (int)v51,
                  *(unsigned __int16 *)(FIELD_U32(a1, 216) + 60),
                  (unsigned int)v16,
                  (unsigned int)v15,
                  1,
                  0);
          v18 = (_WORD *)(a1 + 564);
          v46 = FIELD_U16(a1, 564);
          v49 = a1 + 288;
          v47 = FIELD_U8(a1, 566);
          v19 = FIELD_U32(v17, 4);
          v20 = FIELD_U32(v17, 8);
          v21 = FIELD_U32(v17, 12);
          v22 = FIELD_U32(v17, 16);
          FIELD_U32(a1, 288) = *(_DWORD *)v17;
          FIELD_U32(a1, 292) = v19;
          FIELD_U32(a1, 296) = v20;
          FIELD_U32(a1, 300) = v21;
          FIELD_U32(a1, 304) = v22;
          v23 = FIELD_U32(v17, 24);
          v24 = FIELD_U32(v17, 28);
          v25 = FIELD_U32(v17, 32);
          v26 = FIELD_U32(v17, 36);
          FIELD_U32(a1, 308) = FIELD_U32(v17, 20);
          FIELD_U32(a1, 312) = v23;
          FIELD_U32(a1, 316) = v24;
          FIELD_U32(a1, 320) = v25;
          FIELD_U32(a1, 324) = v26;
          v27 = FIELD_U32(v17, 44);
          v28 = FIELD_U32(v17, 48);
          v29 = FIELD_U32(v17, 52);
          v30 = FIELD_U32(v17, 56);
          FIELD_U32(a1, 328) = FIELD_U32(v17, 40);
          FIELD_U32(a1, 332) = v27;
          FIELD_U32(a1, 336) = v28;
          FIELD_U32(a1, 340) = v29;
          FIELD_U32(a1, 344) = v30;
          v31 = FIELD_U16(v17, 60);
          FIELD_U8(a1, 350) = FIELD_U8(v17, 62);
          FIELD_U16(a1, 348) = v31;
          sub_60917754(a1 + 352, v17 + 64);
          FIELD_U32(a1, 552) = FIELD_U32(v17, 264);
          v32 = (unsigned int *)(a1 + 560);
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 | 4, v32) );
          if ( (unsigned __int16)*v18 != v46 )
          {
            do
              v34 = __ldrex(v32);
            while ( __strex(v34 | 2, v32) );
            *v18 = v46;
          }
          v48 = (float *)(a1 + 220);
          if ( FIELD_U8(a1, 566) != v47 )
          {
            do
              v35 = __ldrex(v32);
            while ( __strex(v35 | 1, v32) );
            FIELD_U8(a1, 566) = v47;
          }
          sub_6091AC94(v49);
          v36 = v16;
          v37 = v15;
          v38 = v16;
          v39 = v15;
          if ( v16 > 0.0 )
            v38 = 0.0;
          if ( v15 > 0.0 )
            v39 = 0.0;
          FIELD_F32(a1, 232) = v38;
          FIELD_F32(a1, 236) = v39;
          if ( v16 <= 0.0 )
            v36 = 0.0;
          FIELD_F32(a1, 240) = v36;
          if ( v15 <= 0.0 )
            v37 = 0.0;
          FIELD_F32(a1, 244) = v37;
          FIELD_F32(a1, 224) = v16;
          FIELD_F32(a1, 228) = v15;
          sub_6090B260((int)v48);
          v40 = (unsigned __int8 *)sub_6090B350((int)v53);
          v54 &= ~1u;
          v53[0] = 0;
          sub_6090B4B0(v40, FIELD_U32(v3, 16));
          agl_TextureSampler_copy_ref((int)v51, FIELD_U32(a1, 216));
          v41 = ((int (__fastcall *)(_BYTE *, float *))loc_6090E438)(v50, v48);
          sub_6090E560(v41, FIELD_U32(v3, 16), v48);
          sub_6093F664(FIELD_U32(v3, 16), (int)v51);
          sub_6091ADF4(v49, FIELD_U32(v3, 16));
          v42 = FIELD_U32(a1, 188);
          v43 = v42 == 0;
          if ( v42 )
            v43 = FIELD_U32(v42, 868) == 0;
          if ( v43 )
            sub_6093EA98(dword_60CD09F8, FIELD_U32(a1, 216));
          else
            sub_609A6D4C(v42);
          v8 = (_BYTE *)(a1 + 180);
          FIELD_U32(a1, 216) = v17;
          sub_609175E4((int)&v52);
          sub_60917AE4((int)v51);
        }
        if ( (*v8 & 8) != 0 )
          sub_60920AC4(
            *(int **)(a1 + 216),
            *(_BYTE *)(FIELD_U32(a1, 216) + 56),
            *(_BYTE *)(FIELD_U32(a1, 216) + 57),
            *(unsigned __int8 *)(FIELD_U32(a1, 216) + 58),
            1);
        sub_6098E0F8(a1 + 192, FIELD_U32(a1, 216), 0);
        v45 = FIELD_U32(a1, 172);
        v44 = (_DWORD *)(a1 + 172);
        *v44 = FIELD_U32(a2, 232);
        FIELD_U32(v45, 4) = a2 + 232;
        *(_DWORD *)(FIELD_U32(a2, 232) + 4) = v44;
        FIELD_U32(a2, 232) = v45;
        sub_6097F5A8(v3);
        return sub_60853FF8(a2);
      }
    }
  }
  return result;
}
