/* sub_609A0208
 * address: 0x609A0208   size: 1460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A0208(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v9; // r6
  int v10; // r5
  int v11; // r6
  int v12; // r6
  _DWORD *v13; // r9
  int i; // r1
  int v15; // r0
  int *j; // r7
  int v17; // r5
  int v18; // r0
  bool v19; // cc
  int v20; // r1
  int v21; // r0
  int v22; // r2
  int v23; // r2
  int v24; // r10
  int k; // r1
  int v26; // r0
  _DWORD *m; // r6
  _DWORD *v28; // r6
  int v29; // t1
  const char *v30; // r5
  int v31; // r2
  int v32; // r2
  _DWORD *v34; // [sp+Ch] [bp-F4h]
  int v35; // [sp+14h] [bp-ECh]
  int v36; // [sp+14h] [bp-ECh]
  _DWORD *v37; // [sp+24h] [bp-DCh]
  int (**v38)(); // [sp+28h] [bp-D8h] BYREF
  const char *v39; // [sp+2Ch] [bp-D4h]
  int v40; // [sp+30h] [bp-D0h]
  int v41; // [sp+34h] [bp-CCh] BYREF
  _DWORD v42[2]; // [sp+CCh] [bp-34h] BYREF
  _DWORD v43[11]; // [sp+D4h] [bp-2Ch] BYREF

  v9 = 0;
  sub_609052D4(a2, 0);
  v10 = a5;
  if ( a5 || (v10 = a1[1]) != 0 )
  {
    v11 = a1[8] - dword_60C60DD4;
    if ( a4 == 1 )
    {
      v35 = v10;
      LOBYTE(v38) = *((_BYTE *)a1 + 32) - dword_60C60DD4;
      sub_609056A8(a2, (int)&v38, 1);
      if ( v11 >= 1 )
      {
        v12 = a1[7];
        v13 = a1 - 34;
        if ( dword_60C60DD4 )
        {
          for ( i = 0; (dword_60C60DD4 & 3) != i; ++i )
            v12 = FIELD_U32(v12, 4);
          if ( (unsigned int)(dword_60C60DD4 - 1) >= 3 )
          {
            v15 = dword_60C60DD4 - i;
            do
            {
              v15 -= 4;
              v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(v12, 4) + 4) + 4) + 4);
            }
            while ( v15 );
          }
        }
        for ( j = (int *)(v12 - 160); (_DWORD *)(v12 - 160) != v13; j = (int *)(v12 - 160) )
        {
          v17 = 0;
          LOBYTE(v43[0]) = 0;
          (*(void (__fastcall **)(int *))(*j + 12))(j);
          v18 = j[1];
          while ( *(_BYTE *)(v18 + v17) )
          {
            if ( !*(_BYTE *)(v18 + v17 + 1) )
            {
              LOBYTE(v17) = v17 + 1;
              break;
            }
            if ( !*(_BYTE *)(v18 + v17 + 2) )
            {
              LOBYTE(v17) = v17 + 2;
              break;
            }
            v19 = v17 + 2 <= 0x7FFFF;
            v17 += 3;
            if ( !v19 )
            {
              LOBYTE(v17) = 0;
              break;
            }
          }
          LOBYTE(v43[0]) = v17;
          sub_609056A8(a2, (int)v43, 1);
          (*(void (__fastcall **)(int *))(*j + 12))(j);
          sub_609056A8(a2, j[1], LOBYTE(v43[0]));
          (*(void (__fastcall **)(int *))(j[5] + 12))(j + 5);
          v20 = j[6];
          v21 = 0;
          while ( *(_BYTE *)(v20 + v21) )
          {
            if ( !*(_BYTE *)(v20 + v21 + 1) )
            {
              LOBYTE(v21) = v21 + 1;
              break;
            }
            if ( !*(_BYTE *)(v20 + v21 + 2) )
            {
              LOBYTE(v21) = v21 + 2;
              break;
            }
            v19 = v21 + 2 <= 0x7FFFF;
            v21 += 3;
            if ( !v19 )
            {
              LOBYTE(v21) = 0;
              break;
            }
          }
          LOBYTE(v43[0]) = v21;
          sub_609056A8(a2, (int)v43, 1);
          (*(void (__fastcall **)(int *))(j[5] + 12))(j + 5);
          sub_609056A8(a2, j[6], LOBYTE(v43[0]));
          v12 = FIELD_U32(v12, 4);
        }
      }
      sub_609A080C(a2, v35);
    }
    else
    {
      v22 = 0;
      v43[0] = &sead__SafeStringBase__vtable;
      v43[1] = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n";
      while ( aXmlVersion10En[v22] )
      {
        if ( v22 > 0x7FFFF )
        {
          v22 = 0;
          break;
        }
        if ( !aXmlVersion10En[v22 + 1] )
        {
          ++v22;
          break;
        }
        v22 += 2;
      }
      sub_6090567C(a2, (int)v43, v22);
      if ( v11 >= 1 )
      {
        v23 = 0;
        v42[0] = &sead__SafeStringBase__vtable;
        v42[1] = "<!DOCTYPE doc[\n";
        while ( aDoctypeDoc[v23] )
        {
          if ( v23 > 0x7FFFF )
          {
            v23 = 0;
            break;
          }
          if ( !aDoctypeDoc[v23 + 1] )
          {
            ++v23;
            break;
          }
          v23 += 2;
        }
        sub_6090567C(a2, (int)v42, v23);
        v34 = a1;
        v37 = a1 - 34;
        v24 = a1[7];
        v36 = v10;
        if ( dword_60C60DD4 )
        {
          for ( k = 0; (dword_60C60DD4 & 3) != k; ++k )
            v24 = FIELD_U32(v24, 4);
          if ( (unsigned int)(dword_60C60DD4 - 1) >= 3 )
          {
            v26 = dword_60C60DD4 - k;
            do
            {
              v26 -= 4;
              v24 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(v24, 4) + 4) + 4) + 4);
            }
            while ( v26 );
          }
        }
        for ( m = (_DWORD *)(v24 - 160); (_DWORD *)(v24 - 160) != v37; m = (_DWORD *)(v24 - 160) )
        {
          v39 = (const char *)&v41;
          v38 = &BufferedSafeStringBase_char_vtable_probably;
          v40 = 150;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v38);
          *v39 = 0;
          v38 = &off_60C60DF0;
          (*(void (__fastcall **)(_DWORD *))(*m + 12))(m);
          v29 = m[5];
          v28 = m + 5;
          v30 = (const char *)*(v28 - 4);
          (*(void (__fastcall **)(_DWORD *))(v29 + 12))(v28);
          sub_608FDDF4((int)&v38, "<!ENTITY %s \"%s\">\n", v30, (const char *)v28[1]);
          ((void (__fastcall *)(int (***)()))v38[3])(&v38);
          v31 = 0;
          while ( v39[v31] )
          {
            if ( !v39[v31 + 1] )
            {
              ++v31;
              break;
            }
            if ( !v39[v31 + 2] )
            {
              v31 += 2;
              break;
            }
            v19 = v31 + 2 <= 0x7FFFF;
            v31 += 3;
            if ( !v19 )
            {
              v31 = 0;
              break;
            }
          }
          sub_6090567C(a2, (int)&v38, v31);
          v24 = FIELD_U32(v24, 4);
        }
        v10 = v36;
        a1 = v34;
        v32 = 0;
        v38 = &sead__SafeStringBase__vtable;
        v39 = "]>\n";
        while ( asc_60AF1758[v32] )
        {
          if ( v32 > 0x7FFFF )
          {
            v32 = 0;
            break;
          }
          if ( !asc_60AF1758[v32 + 1] )
          {
            ++v32;
            break;
          }
          v32 += 2;
        }
        sub_6090567C(a2, (int)&v38, v32);
      }
      sub_609A0B94(a2, v10, 0, a1[5], a3);
    }
    sub_609056F0(a2);
    return 1;
  }
  return v9;
}
