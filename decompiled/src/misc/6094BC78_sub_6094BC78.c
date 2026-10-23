/* sub_6094BC78
 * address: 0x6094BC78   size: 2924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094BC78(int a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v8; // r5
  int v9; // r6
  int v10; // r0
  unsigned int v11; // r1
  int v12; // r2
  unsigned int v13; // r0
  int v14; // r2
  unsigned int v15; // r1
  unsigned int v16; // r3
  unsigned int v17; // r6
  int v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // r6
  int v21; // r0
  unsigned int v22; // r1
  unsigned int v23; // r2
  int v24; // r1
  unsigned int v25; // r0
  unsigned int v26; // r6
  int v27; // r0
  unsigned int v28; // r1
  unsigned int v29; // r2
  int v30; // r1
  unsigned int v31; // r0
  unsigned int v32; // r0
  unsigned int v33; // r5
  int v34; // r0
  unsigned int v35; // r1
  unsigned int v36; // r2
  unsigned int v37; // r1
  int i; // r0
  int v39; // r7
  unsigned int v40; // r0
  unsigned int v41; // r0
  int v42; // r1
  unsigned int v43; // r0
  int v44; // r6
  unsigned int v45; // r5
  int v46; // r0
  unsigned int v47; // r1
  unsigned int v48; // r0
  int v49; // r1
  unsigned int v50; // r0
  int v51; // r6
  unsigned int v52; // r5
  unsigned int v53; // r0
  unsigned int v54; // r0
  unsigned int v55; // r0
  unsigned int v56; // r2
  unsigned int v57; // r3
  int v58; // r6
  unsigned int v59; // r0
  _DWORD v61[3]; // [sp+8h] [bp-68h] BYREF
  _DWORD v62[3]; // [sp+14h] [bp-5Ch] BYREF
  _DWORD v63[3]; // [sp+20h] [bp-50h] BYREF
  _DWORD v64[3]; // [sp+2Ch] [bp-44h] BYREF
  _DWORD v65[3]; // [sp+38h] [bp-38h] BYREF
  int v66; // [sp+44h] [bp-2Ch] BYREF

  v8 = 0;
  v9 = a1 + 7816;
  sub_60913D88(a1 + 7816, 32 * a2 * (a3 + 2) + 32, a4, 4, 0);
  sub_60913A6C(&v66, v9, 0);
  sub_60913A6C(v65, v9, 0);
  sub_6094F5D4(a1 + 8016, v65, a2, a3);
  if ( a2 )
  {
    v10 = a2 & 3;
    v11 = a2 - 1;
    if ( (a2 & 3) != 0 )
    {
      v8 = 0;
      v12 = 0;
      do
      {
        ++v8;
        v12 += 3;
      }
      while ( v10 != v8 );
    }
    else
    {
      v12 = 0;
    }
    if ( v11 >= 3 )
    {
      do
      {
        v8 += 4;
        v12 += 12;
      }
      while ( v8 < a2 );
    }
    if ( a3 > 1 )
    {
      v16 = 1;
      do
      {
        v17 = 0;
        if ( (a2 & 3) != 0 )
        {
          do
          {
            ++v17;
            v12 += 6;
          }
          while ( v10 != v17 );
        }
        if ( v11 >= 3 )
        {
          do
          {
            v17 += 4;
            v12 += 24;
          }
          while ( v17 < a2 );
        }
        ++v16;
      }
      while ( v16 < a3 );
    }
    v18 = 2 * v12;
    v19 = 0;
    do
    {
      ++v19;
      v18 += 6;
    }
    while ( v19 < a2 );
    v20 = 0;
    sub_60913D88(a1 + 7844, v18, a4, 4, 0);
    sub_60913A6C(v64, a1 + 7844, 0);
    sub_60913A6C(v63, a1 + 7844, 0);
    sub_6094F98C(a1 + 8288, v63, a2, a3, 0, 0);
    v21 = 0;
    do
    {
      v20 += 2;
      v21 += 3;
    }
    while ( v20 < a2 );
    if ( a3 >= 2 )
    {
      v22 = 1;
      do
      {
        v23 = 0;
        do
        {
          v23 += 2;
          v21 += 6;
        }
        while ( v23 < a2 );
        v22 += 2;
      }
      while ( v22 < a3 );
    }
    v24 = 2 * v21;
    v25 = 0;
    do
    {
      v25 += 2;
      v24 += 6;
    }
    while ( v25 < a2 );
    v26 = 0;
    sub_60913D88(a1 + 7872, v24, a4, 4, 0);
    sub_60913A6C(v64, a1 + 7872, 0);
    sub_60913A6C(v63, a1 + 7872, 0);
    sub_6094F98C(a1 + 8368, v63, a2, a3, 0, 1);
    v27 = 0;
    do
    {
      v26 += 4;
      v27 += 3;
    }
    while ( v26 < a2 );
    if ( a3 >= 2 )
    {
      v28 = 1;
      do
      {
        v29 = 0;
        do
        {
          v29 += 4;
          v27 += 6;
        }
        while ( v29 < a2 );
        v28 += 4;
      }
      while ( v28 < a3 );
    }
    v30 = 2 * v27;
    v31 = 0;
    do
    {
      v31 += 4;
      v30 += 6;
    }
    while ( v31 < a2 );
    sub_60913D88(a1 + 7900, v30, a4, 4, 0);
    sub_60913A6C(v64, a1 + 7900, 0);
    sub_60913A6C(v63, a1 + 7900, 0);
    sub_6094F98C(a1 + 8448, v63, a2, a3, 0, 2);
    goto LABEL_51;
  }
  if ( a3 >= 2 )
  {
    v13 = a3 - 2;
    if ( (((_BYTE)a3 + 7) & 7) != 0 )
    {
      v14 = 0;
      do
        ++v14;
      while ( (((_BYTE)a3 + 7) & 7) != v14 );
      v15 = v14 + 1;
      if ( v13 < 7 )
        goto LABEL_46;
    }
    else
    {
      v15 = 1;
      if ( v13 < 7 )
      {
LABEL_46:
        sub_60913D88(a1 + 7844, 0, a4, 4, 0);
        sub_60913A6C(v64, a1 + 7844, 0);
        sub_60913A6C(v63, a1 + 7844, 0);
        sub_6094F98C(a1 + 8288, v63, 0, a3, 0, 0);
        v32 = 1;
        do
          v32 += 2;
        while ( v32 < a3 );
        goto LABEL_48;
      }
    }
    do
      v15 += 8;
    while ( v15 < a3 );
    goto LABEL_46;
  }
  sub_60913D88(a1 + 7844, 0, a4, 4, 0);
  sub_60913A6C(v64, a1 + 7844, 0);
  sub_60913A6C(v63, a1 + 7844, 0);
  sub_6094F98C(a1 + 8288, v63, 0, a3, 0, 0);
LABEL_48:
  sub_60913D88(a1 + 7872, 0, a4, 4, 0);
  sub_60913A6C(v64, a1 + 7872, 0);
  sub_60913A6C(v63, a1 + 7872, 0);
  v33 = 1;
  sub_6094F98C(a1 + 8368, v63, 0, a3, 0, 1);
  if ( a3 >= 2 )
  {
    do
      v33 += 4;
    while ( v33 < a3 );
  }
  sub_60913D88(a1 + 7900, 0, a4, 4, 0);
  sub_60913A6C(v64, a1 + 7900, 0);
  sub_60913A6C(v63, a1 + 7900, 0);
  sub_6094F98C(a1 + 8448, v63, 0, a3, 0, 2);
LABEL_51:
  if ( a3 )
  {
    if ( a2 )
    {
      v34 = 0;
      v35 = 1;
      do
      {
        v36 = 0;
        do
        {
          ++v36;
          v34 += 2;
        }
        while ( v36 < a2 );
        ++v35;
      }
      while ( v35 <= a3 );
    }
    else
    {
      v41 = 1;
      do
        ++v41;
      while ( v41 <= a3 );
      v34 = 0;
    }
    if ( a2 )
    {
      v42 = 2 * v34;
      v43 = 0;
      do
      {
        ++v43;
        v42 += 8;
      }
      while ( v43 < a2 );
      v44 = 0;
      sub_60913D88(a1 + 7928, v42, a4, 4, 0);
      sub_60913A6C(v62, a1 + 7928, 0);
      sub_60913A6C(v61, a1 + 7928, 0);
      v45 = 1;
      sub_6094F98C(a1 + 8528, v61, a2, a3, 1, 0);
      do
      {
        v46 = v44;
        v47 = 0;
        do
          v47 += 2;
        while ( v47 < a2 );
        v45 += 2;
        v44 += v47;
      }
      while ( v45 <= a3 );
      v49 = 2 * (v46 + v47);
      v50 = 0;
      do
      {
        v50 += 2;
        v49 += 8;
      }
      while ( v50 < a2 );
      v51 = 0;
      sub_60913D88(a1 + 7956, v49, a4, 4, 0);
      sub_60913A6C(v62, a1 + 7956, 0);
      sub_60913A6C(v61, a1 + 7956, 0);
      v52 = 1;
      sub_6094F98C(a1 + 8608, v61, a2, a3, 1, 1);
      do
      {
        v53 = 0;
        do
        {
          v53 += 4;
          v51 += 2;
        }
        while ( v53 < a2 );
        v52 += 4;
      }
      while ( v52 <= a3 );
    }
    else
    {
      sub_60913D88(a1 + 7928, 2 * v34, a4, 4, 0);
      sub_60913A6C(v62, a1 + 7928, 0);
      sub_60913A6C(v61, a1 + 7928, 0);
      sub_6094F98C(a1 + 8528, v61, 0, a3, 1, 0);
      v48 = 1;
      do
        v48 += 2;
      while ( v48 <= a3 );
      sub_60913D88(a1 + 7956, 0, a4, 4, 0);
      sub_60913A6C(v62, a1 + 7956, 0);
      sub_60913A6C(v61, a1 + 7956, 0);
      sub_6094F98C(a1 + 8608, v61, 0, a3, 1, 1);
      v54 = 1;
      do
        v54 += 4;
      while ( v54 <= a3 );
      v51 = 0;
    }
    if ( a2 )
    {
      v55 = 0;
      do
        v55 += 4;
      while ( v55 < a2 );
      v51 += v55;
    }
    sub_60913D88(a1 + 7984, 2 * v51, a4, 4, 0);
    sub_60913A6C(v62, a1 + 7984, 0);
    sub_60913A6C(v61, a1 + 7984, 0);
    v56 = a2;
    v57 = a3;
  }
  else
  {
    if ( a2 )
    {
      v37 = 0;
      for ( i = 0; (a2 & 3) != v37; i += 4 )
        ++v37;
      if ( a2 - 1 >= 3 )
      {
        do
        {
          v37 += 4;
          i += 16;
        }
        while ( v37 < a2 );
      }
      v39 = 0;
      sub_60913D88(a1 + 7928, 2 * i, a4, 4, 0);
      sub_60913A6C(v62, a1 + 7928, 0);
      sub_60913A6C(v61, a1 + 7928, 0);
      sub_6094F98C(a1 + 8528, v61, a2, 0, 1, 0);
      v40 = 0;
      do
      {
        v40 += 2;
        v39 += 8;
      }
      while ( v40 < a2 );
    }
    else
    {
      v39 = 0;
      sub_60913D88(a1 + 7928, 0, a4, 4, 0);
      sub_60913A6C(v62, a1 + 7928, 0);
      sub_60913A6C(v61, a1 + 7928, 0);
      sub_6094F98C(a1 + 8528, v61, 0, 0, 1, 0);
    }
    v58 = 0;
    sub_60913D88(a1 + 7956, v39, a4, 4, 0);
    sub_60913A6C(v62, a1 + 7956, 0);
    sub_60913A6C(v61, a1 + 7956, 0);
    sub_6094F98C(a1 + 8608, v61, a2, 0, 1, 1);
    if ( a2 )
    {
      v58 = 0;
      v59 = 0;
      do
      {
        v59 += 4;
        v58 += 8;
      }
      while ( v59 < a2 );
    }
    sub_60913D88(a1 + 7984, v58, a4, 4, 0);
    sub_60913A6C(v62, a1 + 7984, 0);
    sub_60913A6C(v61, a1 + 7984, 0);
    v56 = a2;
    v57 = 0;
  }
  return sub_6094F98C(a1 + 8688, v61, v56, v57, 1, 2);
}
