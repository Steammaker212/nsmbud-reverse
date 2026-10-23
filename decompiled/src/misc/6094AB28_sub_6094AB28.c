/* sub_6094AB28
 * address: 0x6094AB28   size: 2536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094AB28(int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v8; // r6
  int v9; // r4
  int v10; // r2
  unsigned int v11; // r1
  int v12; // r0
  unsigned int v13; // r3
  unsigned int v14; // r3
  int v15; // r4
  unsigned int v16; // r0
  unsigned int v17; // r0
  unsigned int v18; // r0
  int v19; // r7
  unsigned int v20; // r0
  unsigned int v21; // r0
  unsigned int v22; // r0
  unsigned int v23; // r7
  int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r2
  unsigned int v27; // r1
  int i; // r0
  int v29; // r7
  unsigned int v30; // r0
  unsigned int v31; // r0
  int v32; // r1
  unsigned int v33; // r0
  int v34; // r6
  unsigned int v35; // r4
  int v36; // r0
  unsigned int v37; // r1
  unsigned int v38; // r0
  int v39; // r1
  unsigned int v40; // r0
  int v41; // r6
  unsigned int v42; // r4
  unsigned int v43; // r0
  unsigned int v44; // r0
  unsigned int v45; // r0
  int v47; // r4
  unsigned int v48; // r0
  _DWORD v49[3]; // [sp+Ch] [bp-6Ch] BYREF
  _DWORD v50[3]; // [sp+18h] [bp-60h] BYREF
  _DWORD v51[3]; // [sp+24h] [bp-54h] BYREF
  _DWORD v52[3]; // [sp+30h] [bp-48h] BYREF
  _DWORD v53[3]; // [sp+3Ch] [bp-3Ch] BYREF
  int v54; // [sp+48h] [bp-30h] BYREF

  v8 = 0;
  v9 = a1 + 5912;
  sub_60913D88(a1 + 5912, 32 * a2 * (a3 + 3) + 64, a4, 4, 0);
  sub_60913A6C(&v54, v9, 0);
  sub_60913A6C(v53, v9, 0);
  sub_6094E244(a1 + 6112, v53, a2, a3);
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
    v13 = 0;
    if ( (a2 & 3) != 0 )
    {
      do
      {
        ++v13;
        v12 += 6;
      }
      while ( v10 != v13 );
    }
    if ( v11 >= 3 )
    {
      do
      {
        v13 += 4;
        v12 += 24;
      }
      while ( v13 < a2 );
    }
    v14 = 0;
    if ( (a2 & 3) != 0 )
    {
      do
      {
        ++v14;
        v12 += 3;
      }
      while ( v10 != v14 );
    }
    if ( v11 >= 3 )
    {
      do
      {
        v14 += 4;
        v12 += 12;
      }
      while ( v14 < a2 );
    }
    v15 = 0;
    sub_60913D88(a1 + 5940, 2 * v12, a4, 4, 0);
    sub_60913A6C(v52, a1 + 5940, 0);
    sub_60913A6C(v51, a1 + 5940, 0);
    sub_6094E5B0(a1 + 6384, v51, a2, a3, 0, 0);
    v16 = 0;
    do
    {
      v16 += 2;
      v15 += 6;
    }
    while ( v16 < a2 );
    v17 = 0;
    do
    {
      v17 += 2;
      v15 += 12;
    }
    while ( v17 < a2 );
    v18 = 0;
    do
    {
      v18 += 2;
      v15 += 6;
    }
    while ( v18 < a2 );
    v19 = 0;
    sub_60913D88(a1 + 5968, v15, a4, 4, 0);
    sub_60913A6C(v52, a1 + 5968, 0);
    sub_60913A6C(v51, a1 + 5968, 0);
    sub_6094E5B0(a1 + 6464, v51, a2, a3, 0, 1);
    v20 = 0;
    do
    {
      v20 += 4;
      v19 += 6;
    }
    while ( v20 < a2 );
    v21 = 0;
    do
    {
      v21 += 4;
      v19 += 12;
    }
    while ( v21 < a2 );
    v22 = 0;
    do
    {
      v22 += 4;
      v19 += 6;
    }
    while ( v22 < a2 );
    sub_60913D88(a1 + 5996, v19, a4, 4, 0);
    sub_60913A6C(v52, a1 + 5996, 0);
    sub_60913A6C(v51, a1 + 5996, 0);
    sub_6094E5B0(a1 + 6544, v51, a2, a3, 0, 2);
  }
  else
  {
    sub_60913D88(a1 + 5940, 0, a4, 4, 0);
    sub_60913A6C(v52, a1 + 5940, 0);
    sub_60913A6C(v51, a1 + 5940, 0);
    sub_6094E5B0(a1 + 6384, v51, 0, a3, 0, 0);
    sub_60913D88(a1 + 5968, 0, a4, 4, 0);
    sub_60913A6C(v52, a1 + 5968, 0);
    sub_60913A6C(v51, a1 + 5968, 0);
    sub_6094E5B0(a1 + 6464, v51, 0, a3, 0, 1);
    sub_60913D88(a1 + 5996, 0, a4, 4, 0);
    sub_60913A6C(v52, a1 + 5996, 0);
    sub_60913A6C(v51, a1 + 5996, 0);
    sub_6094E5B0(a1 + 6544, v51, 0, a3, 0, 2);
  }
  v23 = a3 + 1;
  if ( a3 == -1 )
  {
    if ( a2 )
    {
      v27 = 0;
      for ( i = 0; (a2 & 3) != v27; i += 6 )
        ++v27;
      if ( a2 - 1 >= 3 )
      {
        do
        {
          v27 += 4;
          i += 24;
        }
        while ( v27 < a2 );
      }
      v29 = 0;
      sub_60913D88(a1 + 6024, 2 * i, a4, 4, 0);
      sub_60913A6C(v50, a1 + 6024, 0);
      sub_60913A6C(v49, a1 + 6024, 0);
      sub_6094E5B0(a1 + 6624, v49, a2, -1, 1, 0);
      v30 = 0;
      do
      {
        v30 += 2;
        v29 += 12;
      }
      while ( v30 < a2 );
    }
    else
    {
      v29 = 0;
      sub_60913D88(a1 + 6024, 0, a4, 4, 0);
      sub_60913A6C(v50, a1 + 6024, 0);
      sub_60913A6C(v49, a1 + 6024, 0);
      sub_6094E5B0(a1 + 6624, v49, 0, -1, 1, 0);
    }
    v47 = 0;
    sub_60913D88(a1 + 6052, v29, a4, 4, 0);
    sub_60913A6C(v50, a1 + 6052, 0);
    sub_60913A6C(v49, a1 + 6052, 0);
    sub_6094E5B0(a1 + 6704, v49, a2, -1, 1, 1);
    if ( a2 )
    {
      v47 = 0;
      v48 = 0;
      do
      {
        v48 += 4;
        v47 += 12;
      }
      while ( v48 < a2 );
    }
    sub_60913D88(a1 + 6080, v47, a4, 4, 0);
    sub_60913A6C(v50, a1 + 6080, 0);
    sub_60913A6C(v49, a1 + 6080, 0);
    return sub_6094E5B0(a1 + 6784, v49, a2, -1, 1, 2);
  }
  else
  {
    if ( a2 )
    {
      v24 = 0;
      v25 = 1;
      do
      {
        v26 = 0;
        do
        {
          ++v26;
          v24 += 2;
        }
        while ( v26 < a2 );
        ++v25;
      }
      while ( v25 <= v23 );
    }
    else
    {
      v31 = 1;
      do
        ++v31;
      while ( v31 <= v23 );
      v24 = 0;
    }
    if ( a2 )
    {
      v32 = 2 * v24;
      v33 = 0;
      do
      {
        ++v33;
        v32 += 12;
      }
      while ( v33 < a2 );
      v34 = 0;
      sub_60913D88(a1 + 6024, v32, a4, 4, 0);
      sub_60913A6C(v50, a1 + 6024, 0);
      sub_60913A6C(v49, a1 + 6024, 0);
      v35 = 1;
      sub_6094E5B0(a1 + 6624, v49, a2, a3, 1, 0);
      do
      {
        v36 = v34;
        v37 = 0;
        do
          v37 += 2;
        while ( v37 < a2 );
        v35 += 2;
        v34 += v37;
      }
      while ( v35 <= v23 );
      v39 = 2 * (v36 + v37);
      v40 = 0;
      do
      {
        v40 += 2;
        v39 += 12;
      }
      while ( v40 < a2 );
      v41 = 0;
      sub_60913D88(a1 + 6052, v39, a4, 4, 0);
      sub_60913A6C(v50, a1 + 6052, 0);
      sub_60913A6C(v49, a1 + 6052, 0);
      v42 = 1;
      sub_6094E5B0(a1 + 6704, v49, a2, a3, 1, 1);
      do
      {
        v43 = 0;
        do
        {
          v43 += 4;
          v41 += 2;
        }
        while ( v43 < a2 );
        v42 += 4;
      }
      while ( v42 <= v23 );
    }
    else
    {
      sub_60913D88(a1 + 6024, 2 * v24, a4, 4, 0);
      sub_60913A6C(v50, a1 + 6024, 0);
      sub_60913A6C(v49, a1 + 6024, 0);
      sub_6094E5B0(a1 + 6624, v49, 0, a3, 1, 0);
      v38 = 1;
      do
        v38 += 2;
      while ( v38 <= v23 );
      sub_60913D88(a1 + 6052, 0, a4, 4, 0);
      sub_60913A6C(v50, a1 + 6052, 0);
      sub_60913A6C(v49, a1 + 6052, 0);
      sub_6094E5B0(a1 + 6704, v49, 0, a3, 1, 1);
      v44 = 1;
      do
        v44 += 4;
      while ( v44 <= v23 );
      v41 = 0;
    }
    if ( a2 )
    {
      v45 = 0;
      do
      {
        v45 += 4;
        v41 += 6;
      }
      while ( v45 < a2 );
    }
    sub_60913D88(a1 + 6080, 2 * v41, a4, 4, 0);
    sub_60913A6C(v50, a1 + 6080, 0);
    sub_60913A6C(v49, a1 + 6080, 0);
    return sub_6094E5B0(a1 + 6784, v49, a2, a3, 1, 2);
  }
}
