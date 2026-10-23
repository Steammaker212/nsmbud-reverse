/* sub_60957B80
 * address: 0x60957B80   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60957B80(int a1, int a2, int a3)
{
  unsigned int result; // r0
  _DWORD *i; // r5
  _DWORD *v7; // r8
  int v8; // r6
  _DWORD *v9; // r10
  int v10; // r7
  int v11; // r0
  int v12; // r1
  __int16 v13; // r7
  int v14; // r3
  _DWORD *v15; // r3
  bool v16; // zf
  int *v17; // r6
  int v18; // t1
  int *v19; // r7
  int v20; // r5
  int v21; // t1
  int *v22; // r5
  int v23; // r7
  int v24; // t1
  int *v25; // r5
  int v26; // r7
  int v27; // t1
  int *v28; // r5
  int v29; // r6
  int v30; // r4
  int v31; // t1
  int v33; // [sp+14h] [bp-1464h]
  _DWORD v34[2]; // [sp+18h] [bp-1460h] BYREF
  int v35; // [sp+20h] [bp-1458h]
  int v36; // [sp+24h] [bp-1454h] BYREF
  _DWORD v37[2]; // [sp+424h] [bp-1054h] BYREF
  int *v38; // [sp+42Ch] [bp-104Ch]
  int v39; // [sp+430h] [bp-1048h] BYREF
  _DWORD v40[2]; // [sp+830h] [bp-C48h] BYREF
  int *v41; // [sp+838h] [bp-C40h]
  int v42; // [sp+83Ch] [bp-C3Ch] BYREF
  _DWORD v43[2]; // [sp+C3Ch] [bp-83Ch] BYREF
  int *v44; // [sp+C44h] [bp-834h]
  int v45; // [sp+C48h] [bp-830h] BYREF
  _DWORD v46[2]; // [sp+1048h] [bp-430h] BYREF
  int *v47; // [sp+1050h] [bp-428h]
  int v48; // [sp+1054h] [bp-424h] BYREF

  result = FIELD_U8(a1, 866) % (unsigned int)FIELD_U8(a1, 867);
  if ( !result )
  {
    result = FIELD_U8(a1, 252);
    if ( result == 1 )
    {
      v37[0] = 0;
      v37[1] = 0;
      v38 = 0;
      i = v37;
      sub_608DEB0C(v37, 256, (int)&v39);
      v40[0] = 0;
      v40[1] = 0;
      v41 = 0;
      sub_608DEB0C(v40, 256, (int)&v42);
      v43[0] = 0;
      v43[1] = 0;
      v44 = 0;
      sub_608DEB0C(v43, 256, (int)&v45);
      v46[0] = 0;
      v46[1] = 0;
      v47 = 0;
      sub_608DEB0C(v46, 256, (int)&v48);
      v37[0] = 0;
      v40[0] = 0;
      v43[0] = 0;
      v46[0] = 0;
      v7 = *(_DWORD **)(a1 + 24);
      if ( v7 )
      {
        v8 = FIELD_U32(a1, 28);
        if ( a2 )
        {
          v9 = 0;
          v33 = a3;
          do
          {
            if ( (a3 & (1 << (char)v9)) != 0 )
            {
              v10 = *(_DWORD *)(v8 + 4 * (_DWORD)v9);
              v34[0] = 0;
              v34[1] = 0;
              v35 = 0;
              sub_608DEB0C(v34, 256, (int)&v36);
              sub_60976754(v10, v34);
              if ( v34[0] )
              {
                v11 = v35;
                v12 = 4 * v34[0];
                do
                {
                  v13 = 2;
                  v14 = *(_DWORD *)(*(_DWORD *)v11 + 24);
                  if ( v14 > FIELD_U32(a1, 796) )
                    v13 = v14 <= FIELD_U32(a1, 792);
                  v15 = &v37[259 * v13];
                  if ( *v15 < v15[1] )
                    *(_DWORD *)(v15[2] + 4 * (*v15)++) = *(_DWORD *)v11;
                  v12 -= 4;
                  v11 += 4;
                }
                while ( v12 );
              }
              a3 = v33;
            }
            v9 = (_DWORD *)((char *)v9 + 1);
          }
          while ( v9 != v7 );
        }
        else
        {
          for ( i = 0; i != v7; i = (_DWORD *)((char *)i + 1) )
          {
            if ( (a3 & (1 << (char)i)) != 0 )
              sub_60976754(*(_DWORD *)(v8 + 4 * (_DWORD)i), 0);
          }
        }
      }
      v16 = a2 == 0;
      if ( a2 )
      {
        i = *(_DWORD **)(a1 + 24);
        v16 = i == 0;
      }
      if ( !v16 )
      {
        v17 = *(int **)(a1 + 28);
        do
        {
          v18 = *v17++;
          sub_60976810(v18, v46);
          i = (_DWORD *)((char *)i - 1);
        }
        while ( i );
      }
      sub_608DED80((signed int)v37, (int (__fastcall *)(int, _DWORD))sub_60972B98);
      if ( v37[0] )
      {
        v19 = v38;
        v20 = 4 * v37[0];
        do
        {
          v21 = *v19++;
          sub_6099EB88(a1 + 276, v21);
          v20 -= 4;
        }
        while ( v20 );
      }
      sub_608DED80((signed int)v40, (int (__fastcall *)(int, _DWORD))sub_60972B98);
      if ( v40[0] )
      {
        v22 = v41;
        v23 = 4 * v40[0];
        do
        {
          v24 = *v22++;
          sub_6099EB88(a1 + 404, v24);
          v23 -= 4;
        }
        while ( v23 );
      }
      sub_608DED80((signed int)v43, (int (__fastcall *)(int, _DWORD))sub_60972B98);
      if ( v43[0] )
      {
        v25 = v44;
        v26 = 4 * v43[0];
        do
        {
          v27 = *v25++;
          sub_6099EB88(a1 + 532, v27);
          v26 -= 4;
        }
        while ( v26 );
      }
      sub_608DED80((signed int)v46, (int (__fastcall *)(int, _DWORD))sub_60972B98);
      result = v46[0];
      if ( v46[0] )
      {
        v28 = v47;
        v29 = 4 * v46[0];
        v30 = a1 + 660;
        do
        {
          v31 = *v28++;
          result = sub_6099EB88(v30, v31);
          v29 -= 4;
        }
        while ( v29 );
      }
    }
  }
  return result;
}
