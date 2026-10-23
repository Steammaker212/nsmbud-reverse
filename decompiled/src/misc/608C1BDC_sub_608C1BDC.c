/* sub_608C1BDC
 * address: 0x608C1BDC   size: 1820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C1BDC(int a1, int a2, int a3, int a4, int a5, int *a6, _DWORD *a7)
{
  const void *v10; // r1
  int *v11; // r5
  int v12; // r1
  int result; // r0
  int *v14; // r9
  int v15; // r1
  int v16; // r2
  int v17; // r1
  char v18; // r0
  int v19; // r1
  char *v20; // r7
  char *v21; // r3
  char v22; // r0
  char v23; // r4
  char v24; // r0
  int v25; // r1
  int v26; // r7
  bool v27; // zf
  bool v28; // zf
  int v29; // r4
  int v30; // r5
  _DWORD *v31; // r6
  int v32; // r1
  _BYTE *v33; // r2
  _BYTE *v34; // r1
  int v35; // r3
  _BYTE *v36; // r0
  char *v37; // r4
  char v38; // r7
  int v39; // r0
  bool v40; // zf
  int v41; // r1
  char *v42; // r4
  char *v43; // r0
  char *v44; // r2
  int v45; // r0
  unsigned __int8 *v46; // r0
  int v47; // t1
  bool v48; // zf
  int v49; // r1
  _BYTE *v50; // r0
  int v51; // [sp+Ch] [bp-60Ch]
  char v53[491]; // [sp+15h] [bp-603h] BYREF
  _DWORD v54[2]; // [sp+294h] [bp-384h] BYREF
  const char *v55; // [sp+29Ch] [bp-37Ch]
  _DWORD v56[167]; // [sp+2A0h] [bp-378h] BYREF
  int v57; // [sp+53Ch] [bp-DCh]
  int v58; // [sp+540h] [bp-D8h]
  int v59; // [sp+544h] [bp-D4h]
  int ItemLabel_const; // [sp+548h] [bp-D0h]
  int v61; // [sp+550h] [bp-C8h] BYREF
  int v62; // [sp+554h] [bp-C4h]
  int v63; // [sp+558h] [bp-C0h]
  _DWORD v64[46]; // [sp+560h] [bp-B8h] BYREF

  v10 = (const void *)a7[10];
  v11 = (int *)a7[11];
  v64[0] = 0;
  v64[1] = 1065353216;
  v64[2] = 127;
  LOWORD(v64[3]) = 0;
  BYTE2(v64[3]) = 0;
  v64[4] = 127;
  v64[5] = 64;
  v64[6] = 0xFFFF;
  LOBYTE(v64[7]) = 0;
  HIWORD(v64[7]) = 127;
  v64[8] = 0x400000;
  v64[9] = -65536;
  LOWORD(v64[10]) = 0;
  BYTE2(v64[10]) = 0;
  v64[11] = 127;
  v64[12] = 64;
  v64[13] = 0xFFFF;
  LOBYTE(v64[14]) = 0;
  HIWORD(v64[14]) = 127;
  v64[15] = 0x400000;
  v64[16] = -65536;
  LOWORD(v64[17]) = 0;
  BYTE2(v64[17]) = 0;
  v64[18] = 127;
  v64[19] = 64;
  v64[20] = 0xFFFF;
  LOBYTE(v64[21]) = 0;
  HIWORD(v64[21]) = 127;
  v64[22] = 0x400000;
  v64[23] = -65536;
  LOWORD(v64[24]) = 0;
  BYTE2(v64[24]) = 0;
  v64[25] = 127;
  v64[26] = 64;
  v64[27] = 0xFFFF;
  LOBYTE(v64[28]) = 0;
  HIWORD(v64[28]) = 127;
  v64[29] = 0x400000;
  v64[30] = -65536;
  v64[31] = 0;
  v64[32] = 0;
  v64[33] = -1;
  v64[34] = 0;
  if ( v10 )
  {
    qmemcpy(v64, v10, 0x8Cu);
  }
  else
  {
    v12 = sub_608A9C88(a2, (int)v64, a4);
    result = 3;
    if ( v12 != 1 )
      return result;
  }
  v14 = 0;
  v51 = a3;
  LOBYTE(v61) = 0;
  v62 = 0;
  v63 = 0;
  if ( v11 )
  {
    v15 = v11[1];
    v16 = v11[2];
    v14 = &v61;
    v61 = *v11;
    v62 = v15;
    v63 = v16;
    goto LABEL_8;
  }
  if ( v64[31] != 3 || (v14 = &v61, v17 = sub_608A9CEC(a2, a4, (int)&v61), result = 3, v17 == 1) )
  {
LABEL_8:
    if ( v64[31] == 3 )
    {
      v18 = 1;
    }
    else
    {
      if ( v64[31] != 1 )
        return 255;
      v18 = 0;
    }
    BYTE2(v56[2]) = v18;
    if ( v64[32] < 3u )
    {
      v56[35] = v64[32];
      v19 = 0;
      do
      {
        v20 = (char *)v64 + v19;
        v21 = (char *)v56 + v19;
        v19 += 14;
        v22 = v20[18];
        v23 = v20[19];
        v21[12] = v20[12];
        v21[13] = v20[13];
        v21[14] = v20[14];
        v21[15] = v20[15];
        v21[16] = v20[16];
        v21[18] = v22;
        v24 = v20[20];
        v21[17] = v20[17];
        v21[19] = v23;
        v21[20] = v24;
        v21[21] = v20[21];
        v21[22] = v20[22];
        v21[23] = v20[23];
        *((_WORD *)v21 + 12) = *((_WORD *)v20 + 12);
      }
      while ( v19 != 112 );
      v25 = a7[9];
      v26 = a1;
      v27 = v25 == 0;
      if ( v25 )
      {
        v25 = FIELD_U32(v25, 28);
        v27 = v25 == 0;
      }
      if ( v27 )
        v25 = a1 + 68;
      v56[0] = v25;
      v28 = v14 == 0;
      v56[1] = HIWORD(v64[0]);
      LOWORD(v56[2]) = v64[0];
      HIBYTE(v56[2]) = 0;
      v56[31] = 0;
      v56[32] = -1;
      if ( v14 )
      {
        HIBYTE(v56[2]) = *(_BYTE *)v14;
        v28 = HIBYTE(v56[2]) == 0;
      }
      if ( !v28 )
      {
        v56[31] = v14[1];
        v56[32] = v14[2];
      }
      v56[33] = v64[1];
      v56[34] = v64[2];
      sub_608BC010(a5, (int)v56);
      v29 = a7[1];
      if ( *a7 )
      {
        if ( *a7 != 2 )
          v29 = 0;
        v30 = 0;
      }
      else
      {
        v30 = 1;
      }
      v31 = (_DWORD *)a7[9];
      memset(v56, 0, 667);
      ItemLabel_const = 0;
      v59 = 0;
      v58 = 0;
      v57 = 0;
      if ( FIELD_U32(a1, 92) )
      {
        v59 = FIELD_U32(a1, 92);
        ItemLabel_const = nn__atk__SoundArchive__GetItemLabel_const(a2, FIELD_U32(a5, 220));
      }
      v56[0] = v30;
      v56[1] = v29;
      v56[2] = a7[2];
      v56[3] = a7[3];
      if ( v31 )
      {
        v56[5] = v31[3];
        v56[6] = v31[4];
        v56[4] = a7[4];
        v33 = (_BYTE *)*v31;
        if ( *v31 )
        {
          v34 = &v56[7];
          v35 = 0;
          v36 = (_BYTE *)*v31;
          while ( v33[v35] )
          {
            v37 = (char *)v56 + v35;
            *((_BYTE *)&v56[7] + v35) = v33[v35];
            v38 = v33[v35 + 1];
            if ( !v38 )
            {
              ++v34;
              ++v36;
              break;
            }
            v35 += 2;
            v34 += 2;
            v36 += 2;
            v37[29] = v38;
            if ( v35 == 638 )
            {
              v36 = v33 + 638;
              v34 = (char *)&v56[166] + 2;
              break;
            }
          }
          v26 = a1;
          *v34 = 0;
          v32 = (unsigned __int8)*v36;
          if ( *v36 )
          {
            v46 = v36 + 1;
            do
            {
              v47 = *v46++;
              v32 = v47;
            }
            while ( v47 );
          }
          goto LABEL_64;
        }
        if ( v31[1] )
        {
          v57 = v31[1];
          v58 = v31[2];
        }
      }
      else
      {
        v56[5] = 0;
        v56[6] = 0;
        v56[4] = a7[4];
      }
      v39 = FIELD_U32(a1, 92);
      v40 = v39 == 0;
      if ( v39 )
        v40 = FIELD_U8(v39, 4) == 0;
      if ( v40 )
      {
        v54[0] = -1;
        v54[1] = -1;
        v55 = 0;
        v41 = sub_608AA048(a2, *a6, (int)v54);
        result = 20;
        if ( v41 != 1 )
          return result;
        if ( !v55 )
          return 21;
        v42 = v53;
        sub_608AA2F0(a2, v55, v53, 0x27Fu);
        v43 = (char *)&v56[7];
        v32 = 638;
        do
        {
          if ( !*v42 )
          {
            v44 = v43;
LABEL_63:
            *v44 = 0;
            goto LABEL_64;
          }
          *v43 = *v42;
          v44 = v43 + 1;
          if ( !v42[1] )
            goto LABEL_63;
          v43[1] = v42[1];
          v32 -= 2;
          v43 += 2;
          v42 += 2;
        }
        while ( v32 );
        v32 = (unsigned __int8)*v42;
        *v43 = 0;
        if ( v32 )
        {
          v45 = 1;
          do
            v32 = (unsigned __int8)v42[v45++];
          while ( v32 );
        }
      }
LABEL_64:
      v48 = v31 == 0;
      if ( v31 )
      {
        v32 = v31[5];
        v48 = v32 == 0;
      }
      if ( v48 )
      {
        if ( v64[33] == -1 )
        {
LABEL_77:
          sub_608BC370(a5, v56);
          return 0;
        }
        if ( !FIELD_U32(v26, 92)
          || (v49 = nn__atk__SoundArchive__GetItemLabel_const(a2, FIELD_U32(a5, 220))) == 0
          || (v50 = *(_BYTE **)(v26 + 92), !v50[4])
          || (v32 = (*(int (__fastcall **)(_BYTE *, int, void *, const char *, _DWORD))(*(_DWORD *)v50 + 24))(
                      v50,
                      v49,
                      &unk_60B33D3C,
                      "bxstp",
                      0)) == 0 )
        {
          v32 = sub_608AC060(v51);
        }
      }
      if ( v32 )
      {
        if ( !v56[1] )
          sub_608BC3D4(a5, v32, v56);
      }
      goto LABEL_77;
    }
    return 255;
  }
  return result;
}
