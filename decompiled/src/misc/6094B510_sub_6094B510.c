/* sub_6094B510
 * address: 0x6094B510   size: 1896   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094B510(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v9; // r5
  int i; // r9
  unsigned int v11; // r2
  int v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r2
  unsigned int v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r3
  unsigned int v18; // r3
  unsigned int v19; // r5
  int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r0
  int v23; // r2
  unsigned int v24; // r1
  unsigned int v25; // r1
  int v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r0
  unsigned int v29; // r1
  unsigned int v30; // r5
  unsigned int v31; // r1
  int j; // r9
  unsigned int v33; // r1
  unsigned int v34; // r2
  int v35; // r0
  unsigned int v36; // r2
  unsigned int v37; // r3
  unsigned int v38; // r2
  unsigned int v39; // r3
  unsigned int v40; // r2
  unsigned int v41; // r3
  int result; // r0
  unsigned int v43; // r0
  int v44; // r1
  int v45; // r2
  unsigned int v46; // r2
  int v47; // r2
  unsigned int v48; // r1
  unsigned int v49; // r0
  unsigned int v50; // r0
  unsigned int v51; // r7
  unsigned int v52; // r0
  _DWORD v53[3]; // [sp+Ch] [bp-6Ch] BYREF
  _DWORD v54[3]; // [sp+18h] [bp-60h] BYREF
  _DWORD v55[3]; // [sp+24h] [bp-54h] BYREF
  _DWORD v56[3]; // [sp+30h] [bp-48h] BYREF
  _DWORD v57[3]; // [sp+3Ch] [bp-3Ch] BYREF
  _DWORD v58[12]; // [sp+48h] [bp-30h] BYREF

  v9 = a1 + 6864;
  sub_60913D88(a1 + 6864, 32 * a2 * (a3 + 2 * a4 - 1) + 64, a5, 4, 0);
  sub_60913A6C(v58, v9, 0);
  sub_60913A6C(v57, v9, 0);
  sub_6094E8A8(a1 + 7064, v57, a2, a3, a4);
  if ( a2 )
  {
    for ( i = 0; i != 3; ++i )
    {
      v11 = 0;
      v12 = 0;
      v13 = 1 << i;
      do
      {
        v11 += v13;
        v12 += 3;
      }
      while ( v11 < a2 );
      v14 = 1 << i;
      if ( v13 < a4 )
      {
        do
        {
          v15 = 0;
          do
          {
            v15 += v13;
            v12 += 6;
          }
          while ( v15 < a2 );
          v14 += v13;
        }
        while ( v14 < a4 );
      }
      v16 = 0;
      do
      {
        v17 = 0;
        do
        {
          v17 += v13;
          v12 += 6;
        }
        while ( v17 <= a3 );
        v16 += v13;
      }
      while ( v16 < a2 );
      v18 = 1 << i;
      if ( v13 < a4 - v13 )
      {
        do
        {
          v19 = 0;
          do
          {
            v19 += v13;
            v12 += 6;
          }
          while ( v19 < a2 );
          v18 += v13;
        }
        while ( v18 < a4 - v13 );
      }
      v20 = 2 * v12;
      v21 = 0;
      do
      {
        v21 += v13;
        v20 += 6;
      }
      while ( v21 < a2 );
      sub_60913D88(a1 + 28 * i + 6892, v20, a5, 4, 0);
      sub_60913A6C(v56, a1 + 28 * i + 6892, 0);
      sub_60913A6C(v55, a1 + 28 * i + 6892, 0);
      sub_6094EDDC(a1 + 80 * i + 7336, v55, a2, a3, a4, 0, i);
    }
    goto LABEL_49;
  }
  if ( a4 >= 2 )
  {
    v22 = a4 - 2;
    if ( (((_BYTE)a4 + 7) & 7) != 0 )
    {
      v23 = 0;
      do
        ++v23;
      while ( (((_BYTE)a4 + 7) & 7) != v23 );
      v24 = v23 + 1;
      if ( v22 < 7 )
        goto LABEL_29;
    }
    else
    {
      v24 = 1;
      if ( v22 < 7 )
        goto LABEL_29;
    }
    do
      v24 += 8;
    while ( v24 < a4 );
  }
LABEL_29:
  if ( a4 - 1 >= 2 )
  {
    v25 = a4 - 3;
    if ( (((_BYTE)a4 + 6) & 7) != 0 )
    {
      v26 = 0;
      do
        ++v26;
      while ( (((_BYTE)a4 + 6) & 7) != v26 );
      v27 = v26 + 1;
      if ( v25 < 7 )
        goto LABEL_37;
      goto LABEL_36;
    }
    v27 = 1;
    if ( v25 >= 7 )
    {
      do
LABEL_36:
        v27 += 8;
      while ( v27 < a4 - 1 );
    }
  }
LABEL_37:
  sub_60913D88(a1 + 6892, 0, a5, 4, 0);
  sub_60913A6C(v56, a1 + 6892, 0);
  sub_60913A6C(v55, a1 + 6892, 0);
  sub_6094EDDC(a1 + 7336, v55, 0, a3, a4, 0, 0);
  if ( a4 >= 3 )
  {
    v28 = 2;
    do
      v28 += 2;
    while ( v28 < a4 );
  }
  if ( a4 - 2 >= 3 )
  {
    v29 = 2;
    do
      v29 += 2;
    while ( v29 < a4 - 2 );
  }
  v30 = 4;
  sub_60913D88(a1 + 6920, 0, a5, 4, 0);
  sub_60913A6C(v56, a1 + 6920, 0);
  sub_60913A6C(v55, a1 + 6920, 0);
  sub_6094EDDC(a1 + 7416, v55, 0, a3, a4, 0, 1);
  if ( a4 >= 5 )
  {
    do
      v30 += 4;
    while ( v30 < a4 );
  }
  if ( a4 - 4 >= 5 )
  {
    v31 = 4;
    do
      v31 += 4;
    while ( v31 < a4 - 4 );
  }
  sub_60913D88(a1 + 6948, 0, a5, 4, 0);
  sub_60913A6C(v56, a1 + 6948, 0);
  sub_60913A6C(v55, a1 + 6948, 0);
  sub_6094EDDC(a1 + 7496, v55, 0, a3, a4, 0, 2);
LABEL_49:
  if ( a2 )
  {
    for ( j = 0; j != 3; ++j )
    {
      v33 = 1 << j;
      v34 = 0;
      v35 = 0;
      do
      {
        v34 += v33;
        v35 += 2;
      }
      while ( v34 < a2 );
      v36 = 1 << j;
      if ( v33 < a4 )
      {
        do
        {
          v37 = 0;
          do
          {
            v37 += v33;
            v35 += 4;
          }
          while ( v37 < a2 );
          v36 += v33;
        }
        while ( v36 < a4 );
      }
      v38 = 0;
      do
      {
        v39 = 0;
        do
        {
          v39 += v33;
          v35 += 4;
        }
        while ( v39 <= a3 );
        v38 += v33;
      }
      while ( v38 < a2 );
      if ( v33 < a4 )
      {
        v40 = 1 << j;
        do
        {
          v41 = 0;
          do
          {
            v41 += v33;
            v35 += 4;
          }
          while ( v41 < a2 );
          v40 += v33;
        }
        while ( v40 < a4 );
      }
      sub_60913D88(a1 + 28 * j + 6976, 2 * v35, a5, 4, 0);
      sub_60913A6C(v54, a1 + 28 * j + 6976, 0);
      sub_60913A6C(v53, a1 + 28 * j + 6976, 0);
      result = sub_6094EDDC(a1 + 80 * j + 7576, v53, a2, a3, a4, 1, j);
    }
    return result;
  }
  if ( a4 < 2 )
    goto LABEL_83;
  v43 = a4 - 2;
  v44 = ((_BYTE)a4 + 7) & 7;
  if ( (((_BYTE)a4 + 7) & 7) != 0 )
  {
    v45 = 0;
    do
      ++v45;
    while ( v44 != v45 );
    v46 = v45 + 1;
    if ( v43 < 7 )
      goto LABEL_76;
    goto LABEL_75;
  }
  v46 = 1;
  if ( v43 >= 7 )
  {
    do
LABEL_75:
      v46 += 8;
    while ( v46 < a4 );
  }
LABEL_76:
  if ( (((_BYTE)a4 + 7) & 7) != 0 )
  {
    v47 = 0;
    do
      ++v47;
    while ( v44 != v47 );
    v48 = v47 + 1;
    if ( v43 < 7 )
      goto LABEL_83;
    goto LABEL_82;
  }
  v48 = 1;
  if ( v43 >= 7 )
  {
    do
LABEL_82:
      v48 += 8;
    while ( v48 < a4 );
  }
LABEL_83:
  sub_60913D88(a1 + 6976, 0, a5, 4, 0);
  sub_60913A6C(v54, a1 + 6976, 0);
  sub_60913A6C(v53, a1 + 6976, 0);
  sub_6094EDDC(a1 + 7576, v53, 0, a3, a4, 1, 0);
  if ( a4 >= 3 )
  {
    v49 = 2;
    do
      v49 += 2;
    while ( v49 < a4 );
    v50 = 2;
    do
      v50 += 2;
    while ( v50 < a4 );
  }
  v51 = 4;
  sub_60913D88(a1 + 7004, 0, a5, 4, 0);
  sub_60913A6C(v54, a1 + 7004, 0);
  sub_60913A6C(v53, a1 + 7004, 0);
  sub_6094EDDC(a1 + 7656, v53, 0, a3, a4, 1, 1);
  if ( a4 >= 5 )
  {
    do
      v51 += 4;
    while ( v51 < a4 );
    v52 = 4;
    do
      v52 += 4;
    while ( v52 < a4 );
  }
  sub_60913D88(a1 + 7032, 0, a5, 4, 0);
  sub_60913A6C(v54, a1 + 7032, 0);
  sub_60913A6C(v53, a1 + 7032, 0);
  return sub_6094EDDC(a1 + 7736, v53, 0, a3, a4, 1, 2);
}
