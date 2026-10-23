/* sub_608BF074
 * address: 0x608BF074   size: 1292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BF074(int *a1, int a2, int a3, int a4)
{
  int v6; // r10
  int v7; // r0
  int v8; // r1
  int v9; // r3
  _DWORD *v10; // r2
  bool v11; // zf
  _DWORD *v12; // r6
  int v13; // r7
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r2
  _DWORD *v18; // r5
  int i; // r6
  unsigned __int64 v20; // r0
  int v21; // r0
  int v22; // r5
  _DWORD *v23; // r7
  unsigned int v24; // r0
  signed int v25; // r0
  int v26; // r6
  int v27; // r0
  _BYTE *v28; // r7
  int v29; // r0
  int v30; // r0
  int v31; // r1
  signed int v32; // r8
  int v33; // r7
  int v34; // r1
  int v35; // r0
  int *v36; // r2
  _DWORD *v37; // r3
  int v38; // r7
  int v39; // r0
  int v40; // r3
  int v41; // r1
  int v42; // r7
  unsigned int v43; // r0
  unsigned int v44; // r1
  int v45; // r7
  _DWORD *v46; // r5
  int v47; // r0
  _DWORD *v48; // r5
  int v49; // r7
  _DWORD v50[25]; // [sp+14h] [bp-64h] BYREF

  v6 = 0;
  if ( !*((_BYTE *)a1 + 176) || *((unsigned __int16 *)a1 + 120) != a4 )
    return v6;
  if ( !a2 )
  {
    *((_BYTE *)a1 + 39) = 1;
    (*(void (__fastcall **)(int *))(*a1 + 20))(a1);
    return v6;
  }
  v7 = a1[76];
  v8 = a1[76];
  if ( v7 >= 16 )
    v8 = 16;
  a1[249] = v8;
  if ( *((_BYTE *)a1 + 179) )
  {
    if ( v7 >= 1 )
    {
      v9 = 0;
      v10 = a1 + 257;
      while ( *v10 )
      {
        ++v9;
        v10 += 832;
        if ( v9 >= v8 )
          goto LABEL_11;
      }
      return 0;
    }
LABEL_11:
    v11 = *((_BYTE *)a1 + 988) == 0;
    if ( *((_BYTE *)a1 + 988) )
      v11 = *((_BYTE *)a1 + 280) == 0;
    if ( !v11 && a1[71] != a1[248] )
      return v6;
  }
  if ( v7 < 1 )
  {
LABEL_19:
    if ( !*((_BYTE *)a1 + 260) )
    {
      v15 = a1[57];
      if ( v15 == 1 )
      {
        v20 = a1[64] * (__int64)a1[58] / 0x3E8uLL;
        v16 = -1;
        if ( !__CFSUB__(HIDWORD(v20), 0, (_DWORD)v20 == -1) )
          v16 = a1[64] * (__int64)a1[58] / 0x3E8uLL;
      }
      else
      {
        v16 = 0;
        if ( !v15 )
          v16 = a1[58];
      }
      if ( v16 >= a1[67] )
      {
        *((_BYTE *)a1 + 39) = 1;
        (*(void (__fastcall **)(int *))(*a1 + 20))(a1);
        return 0;
      }
    }
    sub_608C0874(a1, a1 + 63);
    if ( *((_BYTE *)a1 + 179) )
    {
      *((_BYTE *)a1 + 177) = 1;
    }
    else
    {
      v24 = a1[73];
      if ( v24 > 0x2000 )
        return v6;
      v25 = *(_DWORD *)(a1[52] + 8) / (v24 + 2304);
      a1[53] = v25;
      if ( v25 < 2 )
        return v6;
      v26 = 0;
      if ( v25 >= 33 )
        a1[53] = 32;
      a1[54] = 0;
      a1[55] = 0;
      a1[56] = 0;
      v27 = a1[249];
      if ( v27 < 1 )
      {
        a1[49] = 0;
LABEL_54:
        v32 = 0;
        if ( v27 >= 1 )
          goto LABEL_57;
        while ( 1 )
        {
          v39 = a1[57];
          if ( v39 )
          {
            v40 = 0;
            if ( v39 == 1 )
            {
              v40 = a1[64] * (__int64)a1[58] / 0x3E8uLL;
              if ( a1[64] * (__int64)a1[58] / 0x3E8uLL >= 0xFFFFFFFF )
                v40 = -1;
            }
          }
          else
          {
            v40 = a1[58];
          }
          v41 = a1[246];
          a1[58] = 0;
          a1[246] = 0;
          v42 = 1;
          if ( *((_BYTE *)a1 + 37) )
            v42 = 2;
          sub_608D741C(a1[51], v50, a1[54], v40, v41, v42);
          v43 = a1[53];
          ++v32;
          v44 = a1[54] + 1;
          if ( v44 >= v43 )
            v44 = 0;
          a1[54] = v44;
          ++a1[49];
          if ( v32 >= (int)v43 )
            break;
          v27 = a1[249];
          if ( v27 >= 1 )
          {
LABEL_57:
            v33 = 0;
            v34 = (a1[73] + 2304) * a1[54];
            if ( (v27 & 1) != 0 )
            {
              v33 = 1;
              v50[0] = a1[256] + v34;
            }
            if ( v27 != 1 )
            {
              v35 = v27 - v33;
              v36 = &a1[832 * (__int16)v33 + 1088];
              v37 = &v50[v33 + 1];
              do
              {
                v35 -= 2;
                *(v37 - 1) = *(v36 - 832) + v34;
                v38 = *v36;
                v36 += 1664;
                *v37 = v38 + v34;
                v37 += 2;
              }
              while ( v35 );
            }
          }
        }
      }
      else
      {
        v27 = 0x3BA2F0u;
        v28 = a1 + 256;
        do
        {
          v29 = sub_608CAEDC(v27);
          v30 = sub_608CB104(v29, 1, 255, sub_608BF9CC, v28);
          if ( !v30 )
          {
            if ( v26 >= 1 )
            {
              v45 = 0;
              v46 = a1 + 257;
              do
              {
                if ( *v46 )
                {
                  sub_608C932C();
                  *v46 = 0;
                }
                ++v45;
                v46 += 832;
              }
              while ( v45 != v26 );
            }
            v47 = a1[249];
            if ( v47 < 1 )
              return 0;
            v48 = a1 + 256;
            v49 = 0;
            v6 = 0;
            do
            {
              if ( *v48 )
              {
                sub_608D7020(a1[52]);
                *v48 = 0;
                v47 = a1[249];
              }
              ++v49;
              v48 += 832;
            }
            while ( v49 < v47 );
            return v6;
          }
          *((_DWORD *)v28 + 1) = v30;
          ++v26;
          v28 += 3328;
          v27 = a1[249];
        }
        while ( v26 < v27 );
        v31 = a1[53];
        a1[49] = 0;
        if ( v31 >= 1 )
          goto LABEL_54;
      }
    }
    v21 = a1[249];
    v6 = 1;
    if ( v21 >= 1 )
    {
      v22 = 0;
      v23 = a1 + 257;
      do
      {
        if ( *(_DWORD *)(a3 + 4 * v22) )
        {
          sub_608CAE4C(*v23, 0);
          v21 = a1[249];
        }
        ++v22;
        v23 += 832;
      }
      while ( v22 < v21 );
    }
  }
  else
  {
    v12 = a1 + 1072;
    v13 = 0;
    while ( 1 )
    {
      v14 = sub_608D6EF4(a1[52]);
      if ( !v14 )
        break;
      ++v13;
      *(v12 - 816) = v14;
      *v12 = a1[13792];
      v12 += 832;
      if ( v13 >= a1[249] )
        goto LABEL_19;
    }
    if ( v13 >= 1 )
    {
      v18 = a1 + 256;
      for ( i = 0; i != v13; ++i )
      {
        sub_608D7020(a1[52]);
        *v18 = 0;
        v18 += 832;
      }
    }
    (*(void (__fastcall **)(int *))(*a1 + 12))(a1);
    v6 = 0;
    *((_BYTE *)a1 + 40) = 1;
  }
  return v6;
}
