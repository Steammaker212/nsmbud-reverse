/* sub_609A485C
 * address: 0x609A485C   size: 896   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A485C(int a1, _BYTE *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r7
  _BYTE *v5; // r6
  _BYTE *v6; // r12
  unsigned int v7; // r0
  int v8; // r12
  unsigned int v9; // r4
  int v10; // r5
  bool v12; // zf
  int v13; // r6
  unsigned int v14; // r10
  int v15; // r7
  unsigned int v16; // r8
  _BYTE *v17; // r10
  int v18; // r6
  int v19; // r7
  bool v20; // cf
  int v21; // r5
  unsigned int v22; // r6
  int v23; // r8
  bool v24; // cf
  int v25; // r5
  int v26; // r6
  int v27; // r10
  int v28; // r7
  bool v29; // cf
  int v30; // r5
  int v31; // r7
  int v32; // r10
  int v33; // r5
  bool v34; // cf
  int v35; // r5
  unsigned int v36; // r7
  _BYTE *v37; // r6
  int v38; // r5
  unsigned int v39; // r7
  _BYTE *v40; // r8
  int v41; // r5
  int v42; // r6
  bool v43; // cf

  LOBYTE(v4) = *a2;
  v5 = *(_BYTE **)(a1 + 8);
  if ( !*a2 )
  {
    *v5 = 0;
    v6 = *(_BYTE **)(a1 + 12);
    v7 = 0;
    if ( !a3 )
      v7 = -1;
LABEL_4:
    v6[v7] = 0;
    qmemcpy(a2, v6, v7 + 1);
    return 1;
  }
  v9 = 0;
  do
  {
    *v5 = v4;
    v4 = (unsigned __int8)a2[v9 + 1];
    v10 = FIELD_U32(a1, 8);
    ++v9;
    v5 = (_BYTE *)(v10 + v9);
  }
  while ( v4 );
  v8 = 0;
  *(_BYTE *)(v10 + v9) = 0;
  if ( v9 <= a3 )
  {
    v6 = *(_BYTE **)(a1 + 12);
    v12 = a3 == 0;
    v13 = a3;
    v7 = 0;
    if ( a3 )
    {
      v13 = 1;
      v12 = v9 == 0;
    }
    if ( v12 )
    {
LABEL_73:
      if ( v13 != 1 )
        v7 = a3 - 1;
      goto LABEL_4;
    }
    v14 = 0;
    v7 = 0;
    while ( 1 )
    {
      v42 = (unsigned __int8)a2[v14];
      if ( v14 < a4 || v14 > v9 - 4 || v42 != 38 )
      {
        v6[v7] = v42;
        goto LABEL_68;
      }
      if ( v14 + 1 >= a3 )
        goto LABEL_4;
      if ( a2[v14 + 1] != 35 )
      {
        v6[v7] = 38;
LABEL_68:
        ++v7;
        goto LABEL_69;
      }
      if ( v14 + 2 >= a3 )
        goto LABEL_4;
      v15 = (unsigned __int8)a2[v14 + 2];
      if ( v15 != 120 )
      {
        v22 = v14 + 4;
        if ( v14 + 4 >= a3 )
          goto LABEL_4;
        if ( a2[v22] != 59 )
          goto LABEL_69;
        v23 = -48;
        v24 = (unsigned int)(v15 - 48) >= 0xA;
        if ( (unsigned int)(v15 - 48) >= 0xA )
        {
          v23 = -55;
          v24 = (unsigned int)(v15 - 65) >= 6;
        }
        if ( v24 )
        {
          v25 = 0;
          if ( (unsigned int)(v15 - 97) < 6 )
            v25 = v15 - 87;
        }
        else
        {
          v25 = v23 + v15;
        }
        v31 = (unsigned __int8)a2[v14 + 3];
        v32 = 10 * v25;
        v33 = -48;
        v34 = (unsigned int)(v31 - 48) >= 0xA;
        if ( (unsigned int)(v31 - 48) >= 0xA )
        {
          v33 = -55;
          v34 = (unsigned int)(v31 - 65) >= 6;
        }
        if ( v34 )
        {
          v35 = 0;
          if ( (unsigned int)(v31 - 97) < 6 )
            v35 = v31 - 87;
        }
        else
        {
          v35 = v33 + v31;
        }
        v39 = v35 + v32;
        v40 = &v6[v7];
        if ( (unsigned int)(v35 + v32) <= 0x7F )
        {
          *v40 = v39;
          goto LABEL_64;
        }
        if ( v39 >> 11 )
        {
          if ( HIWORD(v39) )
          {
            *v40 = 63;
LABEL_64:
            v41 = 1;
          }
          else
          {
            *v40 = (v39 >> 12) | 0xE0;
            v40[1] = (v39 >> 6) & 0x3F | 0x80;
            v40[2] = v39 & 0x3F | 0x80;
            v41 = 3;
          }
        }
        else
        {
          *v40 = (v39 >> 6) | 0xC0;
          v41 = 2;
          v40[1] = v39 & 0x3F | 0x80;
        }
        v7 += v41;
        v14 = v22;
        goto LABEL_69;
      }
      v16 = v14 + 5;
      if ( v14 + 5 >= a3 )
        goto LABEL_4;
      if ( a2[v16] != 59 )
        goto LABEL_69;
      v17 = &a2[v14];
      v18 = -48;
      v19 = (unsigned __int8)v17[3];
      v20 = (unsigned int)(v19 - 48) >= 0xA;
      if ( (unsigned int)(v19 - 48) >= 0xA )
      {
        v18 = -55;
        v20 = (unsigned int)(v19 - 65) >= 6;
      }
      if ( v20 )
      {
        v21 = 0;
        if ( (unsigned int)(v19 - 97) < 6 )
          v21 = v19 - 87;
      }
      else
      {
        v21 = v18 + v19;
      }
      v26 = (unsigned __int8)v17[4];
      v27 = 16 * v21;
      v28 = -48;
      v29 = (unsigned int)(v26 - 48) >= 0xA;
      if ( (unsigned int)(v26 - 48) >= 0xA )
      {
        v28 = -55;
        v29 = (unsigned int)(v26 - 65) >= 6;
      }
      if ( v29 )
      {
        v30 = 0;
        if ( (unsigned int)(v26 - 97) < 6 )
          v30 = v26 - 87;
      }
      else
      {
        v30 = v28 + v26;
      }
      v36 = v30 + v27;
      v37 = &v6[v7];
      if ( (unsigned int)(v30 + v27) <= 0x7F )
        break;
      if ( v36 >> 11 )
      {
        if ( HIWORD(v36) )
        {
          *v37 = 63;
          goto LABEL_61;
        }
        *v37 = (v36 >> 12) | 0xE0;
        v37[1] = (v36 >> 6) & 0x3F | 0x80;
        v37[2] = v36 & 0x3F | 0x80;
        v38 = 3;
      }
      else
      {
        *v37 = (v36 >> 6) | 0xC0;
        v38 = 2;
        v37[1] = v36 & 0x3F | 0x80;
      }
LABEL_62:
      v7 += v38;
      v14 = v16;
LABEL_69:
      v43 = v7 >= a3;
      v13 = 0;
      if ( v7 < a3 )
      {
        ++v14;
        v13 = 1;
        v43 = v14 >= v9;
      }
      if ( v43 )
        goto LABEL_73;
    }
    *v37 = v36;
LABEL_61:
    v38 = 1;
    goto LABEL_62;
  }
  return v8;
}
