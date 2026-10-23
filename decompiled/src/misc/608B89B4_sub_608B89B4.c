/* sub_608B89B4
 * address: 0x608B89B4   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B89B4(int a1)
{
  int *v1; // r5
  int v3; // r0
  int *v4; // r9
  int result; // r0
  bool v6; // zf
  int *v7; // r1
  int v8; // r2
  int *v9; // r1
  int v10; // r3
  int v11; // r6
  int v12; // r7
  int *v13; // r1
  int v14; // r3
  int v15; // r6
  int v16; // r7
  int *v17; // r1
  int v18; // r3
  int v19; // r4
  int v20; // r6
  int v21; // r7
  int *v22; // r1
  int v23; // r3
  int v24; // r6
  int v25; // r7
  int *v26; // r1
  int v27; // r3
  int v28; // r6
  int v29; // r7
  int *v30; // r1
  int v31; // r3
  int v32; // r4
  int v33; // r6
  int v34; // r7
  _DWORD *v35; // r5
  int v36; // r0
  int v37; // r2
  int v38; // r3
  int v39; // r7
  int v40; // r2
  int v41; // r3
  int v42; // r7
  int v43; // r1
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r5
  int v48; // r7
  int v49; // r0
  bool v50; // zf
  int v51; // [sp+0h] [bp-58h] BYREF
  int v52; // [sp+4h] [bp-54h]
  int v53; // [sp+8h] [bp-50h]
  int v54; // [sp+Ch] [bp-4Ch]
  int v55; // [sp+10h] [bp-48h]
  int v56; // [sp+14h] [bp-44h]
  int v57; // [sp+18h] [bp-40h]
  int v58; // [sp+1Ch] [bp-3Ch]
  int v59; // [sp+20h] [bp-38h]
  int v60; // [sp+24h] [bp-34h]
  int v61; // [sp+28h] [bp-30h]
  int v62; // [sp+2Ch] [bp-2Ch]
  int v63; // [sp+30h] [bp-28h]
  int v64; // [sp+34h] [bp-24h]

  v3 = FIELD_U8(a1, 456);
  if ( v3 == 1 )
  {
    result = FIELD_U32(a1, 484);
    v6 = result == 0;
    if ( result )
    {
      v1 = *(int **)(result + 24);
      result += 20;
      v6 = v1 == (int *)result;
    }
    if ( v6 )
      return result;
    v7 = (int *)v1[1];
    v8 = *v7;
    *(_DWORD *)(*v1 + 4) = v7;
    *v7 = *v1;
    FIELD_U32(v8, 4) = v1;
    *v1 = v8;
    FIELD_U32(a1, 488) = v1 - 218;
    v4 = (int *)(a1 + 488);
    FIELD_U8(a1, 456) = 2;
    nn__os__WaitEvent(v1 - 215);
    nn__os__WaitEvent(v1 - 177);
    *(v1 - 208) = 0;
    memset(v1 - 193, 0, 40);
    *((_BYTE *)v1 - 724) = 0;
    v9 = v1 - 206;
    v10 = FIELD_U32(a1, 496);
    v11 = FIELD_U32(a1, 500);
    v12 = FIELD_U32(a1, 504);
    *v9 = FIELD_U32(a1, 492);
    v9[1] = v10;
    v9[2] = v11;
    v9[3] = v12;
    v13 = v1 - 202;
    v14 = FIELD_U32(a1, 512);
    v15 = FIELD_U32(a1, 516);
    v16 = FIELD_U32(a1, 520);
    *v13 = FIELD_U32(a1, 508);
    v13[1] = v14;
    v13[2] = v15;
    v13[3] = v16;
    v17 = v1 - 198;
    v18 = FIELD_U32(a1, 528);
    v19 = FIELD_U32(a1, 532);
    v20 = FIELD_U32(a1, 536);
    v21 = FIELD_U32(a1, 540);
    *v17 = FIELD_U32(a1, 524);
    v17[1] = v18;
    v17[2] = v19;
    v17[3] = v20;
    v17[4] = v21;
    *(v1 - 183) = 0;
    v22 = v1 - 168;
    *(v1 - 182) = (int)(v1 - 153);
    *(v1 - 170) = 0;
    v23 = FIELD_U32(a1, 496);
    v24 = FIELD_U32(a1, 500);
    v25 = FIELD_U32(a1, 504);
    *v22 = FIELD_U32(a1, 492);
    v22[1] = v23;
    v22[2] = v24;
    v22[3] = v25;
    v26 = v1 - 164;
    v27 = FIELD_U32(a1, 512);
    v28 = FIELD_U32(a1, 516);
    v29 = FIELD_U32(a1, 520);
    *v26 = FIELD_U32(a1, 508);
    v26[1] = v27;
    v26[2] = v28;
    v26[3] = v29;
    v30 = v1 - 160;
    v31 = FIELD_U32(a1, 528);
    v32 = FIELD_U32(a1, 532);
    v33 = FIELD_U32(a1, 536);
    v34 = FIELD_U32(a1, 540);
    *v30 = FIELD_U32(a1, 524);
    v30[1] = v31;
    v30[2] = v32;
    v30[3] = v33;
    v30[4] = v34;
    *(v1 - 155) = 0;
    *(v1 - 154) = (int)(v1 - 153);
  }
  else
  {
    if ( v3 != 2 )
    {
LABEL_27:
      v49 = FIELD_U32(a1, 212);
      if ( v49 < 1 )
      {
        result = FIELD_U8(a1, 36);
        v50 = result == 0;
        if ( FIELD_U8(a1, 36) )
        {
          result = FIELD_U8(a1, 37);
          v50 = result == 0;
        }
        if ( !v50 )
        {
          if ( FIELD_U32(a1, 204) || FIELD_F32(a1, 208) > 0.0 )
          {
            sub_608B8E7C(a1);
          }
          else if ( !FIELD_U8(a1, 38) )
          {
            sub_608B90A8(a1);
          }
          return sub_608B88A8((_DWORD *)a1);
        }
      }
      else
      {
        result = v49 - 1;
        FIELD_U32(a1, 212) = result;
      }
      return result;
    }
    v4 = (int *)(a1 + 488);
  }
  v35 = (_DWORD *)*v4;
  if ( !*(_DWORD *)(*v4 + 140) )
  {
    result = (int)sub_608ACFA8(v35[14]);
    v35[35] = result;
    if ( !result )
      return result;
  }
  result = v35[10];
  if ( (unsigned int)(result - 3) >= 2 )
  {
    if ( !result )
    {
      v45 = sub_608C4DF4(0);
      return sub_608C4F14(v45, v35, 1);
    }
  }
  else
  {
    v36 = *v4;
    if ( *(_BYTE *)(*v4 + 148) )
    {
      v59 = 0;
      v58 = 0;
      v57 = 0;
      v56 = 0;
      v55 = 0;
      v54 = 0;
      v53 = 0;
      v52 = 0;
      v51 = FIELD_U32(v36, 100);
      v61 = FIELD_U32(a1, 460);
      v62 = FIELD_U32(a1, 472);
      v63 = FIELD_U32(a1, 476);
      v64 = FIELD_U32(a1, 480);
      v37 = FIELD_U32(v36, 108);
      v38 = FIELD_U32(v36, 112);
      v39 = FIELD_U32(v36, 116);
      v52 = FIELD_U32(v36, 104);
      v53 = v37;
      v54 = v38;
      v55 = v39;
      v40 = FIELD_U32(v36, 124);
      v41 = FIELD_U32(v36, 128);
      v42 = FIELD_U32(v36, 132);
      v56 = FIELD_U32(v36, 120);
      v57 = v40;
      v58 = v41;
      v59 = v42;
      v60 = FIELD_U8(v36, 136)
          | (FIELD_U8(v36, 137) << 8)
          | ((FIELD_U8(v36, 138) | (FIELD_U8(v36, 139) << 8)) << 16);
      sub_608B8CE0(a1, &v51);
      if ( FIELD_U8(a1, 36) )
      {
        v43 = FIELD_U32(a1, 464);
        v44 = FIELD_U32(a1, 468);
        if ( v43 == 1 )
        {
          FIELD_F32(a1, 208) = (float)v44 + FIELD_F32(a1, 208);
        }
        else if ( !v43 )
        {
          FIELD_U32(a1, 204) += v44;
        }
      }
      goto LABEL_27;
    }
    FIELD_U8(a1, 39) = 1;
    if ( FIELD_U8(a1, 458) )
    {
      v46 = sub_608C3C60(FIELD_U8(a1, 458));
      sub_608C411C(v46, a1 + 176);
      FIELD_U8(a1, 458) = 0;
    }
    v47 = a1 + 244;
    v48 = 0;
    if ( FIELD_U8(a1, 37) )
      FIELD_U8(a1, 37) = 0;
    do
    {
      result = *(_DWORD *)(v47 + 4 * v48);
      if ( result )
      {
        sub_608BB040();
        result = (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 232) + 12))(
                   FIELD_U32(a1, 232),
                   *(_DWORD *)(v47 + 4 * v48));
        *(_DWORD *)(v47 + 4 * v48) = 0;
      }
      ++v48;
    }
    while ( v48 != 16 );
  }
  return result;
}
