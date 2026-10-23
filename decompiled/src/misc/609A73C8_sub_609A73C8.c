/* sub_609A73C8
 * address: 0x609A73C8   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A73C8(_DWORD *a1)
{
  char *v2; // r0
  char *v3; // r4
  char **v4; // r1
  char *v5; // r6
  _DWORD *v6; // r0
  _DWORD *v7; // r1
  _DWORD *v8; // r7
  _DWORD *v9; // r0
  _DWORD *v10; // r1
  _DWORD *v11; // r7
  _DWORD *v12; // r0
  _DWORD *v13; // r1
  _DWORD *v14; // r7
  _DWORD *v15; // r0
  _DWORD *v16; // r1
  _DWORD *v17; // r7
  _DWORD *v18; // r0
  _DWORD *v19; // r1
  _DWORD *v20; // r7
  _DWORD *v21; // r0
  _DWORD *v22; // r1
  _DWORD *v23; // r7
  _DWORD *v24; // r0
  _DWORD *v25; // r6
  _DWORD *v26; // r1
  _DWORD *v27; // r5

  v2 = (char *)a1[101];
  v3 = (char *)(a1 + 100);
  if ( v2 != (char *)(a1 + 100) )
  {
    v4 = (char **)(v2 + 4);
    do
    {
      v5 = *v4;
      if ( !*(_BYTE *)(*((_DWORD *)v2 + 2) + 128) )
        sub_609A7ED4();
      v4 = (char **)(v5 + 4);
      v2 = v5;
    }
    while ( v5 != v3 );
  }
  v6 = (_DWORD *)a1[104];
  if ( v6 != a1 + 103 )
  {
    v7 = v6 + 1;
    do
    {
      v8 = (_DWORD *)*v7;
      if ( *(_BYTE *)(v6[2] + 128) )
        sub_609A7F44();
      v7 = v8 + 1;
      v6 = v8;
    }
    while ( v8 != a1 + 103 );
  }
  v9 = (_DWORD *)a1[107];
  if ( v9 != a1 + 106 )
  {
    v10 = v9 + 1;
    do
    {
      v11 = (_DWORD *)*v10;
      if ( *(_BYTE *)(v9[2] + 128) )
        sub_609A7F44();
      v10 = v11 + 1;
      v9 = v11;
    }
    while ( v11 != a1 + 106 );
  }
  v12 = (_DWORD *)a1[110];
  if ( v12 != a1 + 109 )
  {
    v13 = v12 + 1;
    do
    {
      v14 = (_DWORD *)*v13;
      if ( *(_BYTE *)(v12[2] + 128) )
        sub_609A7F44();
      v13 = v14 + 1;
      v12 = v14;
    }
    while ( v14 != a1 + 109 );
  }
  v15 = (_DWORD *)a1[113];
  if ( v15 != a1 + 112 )
  {
    v16 = v15 + 1;
    do
    {
      v17 = (_DWORD *)*v16;
      if ( *(_BYTE *)(v15[2] + 128) )
        sub_609A7F44();
      v16 = v17 + 1;
      v15 = v17;
    }
    while ( v17 != a1 + 112 );
  }
  v18 = (_DWORD *)a1[116];
  if ( v18 != a1 + 115 )
  {
    v19 = v18 + 1;
    do
    {
      v20 = (_DWORD *)*v19;
      if ( *(_BYTE *)(v18[2] + 128) )
        sub_609A7F44();
      v19 = v20 + 1;
      v18 = v20;
    }
    while ( v20 != a1 + 115 );
  }
  v21 = (_DWORD *)a1[119];
  if ( v21 != a1 + 118 )
  {
    v22 = v21 + 1;
    do
    {
      v23 = (_DWORD *)*v22;
      if ( *(_BYTE *)(v21[2] + 128) )
        sub_609A7F44();
      v22 = v23 + 1;
      v21 = v23;
    }
    while ( v23 != a1 + 118 );
  }
  v24 = (_DWORD *)a1[122];
  v25 = a1 + 121;
  if ( v24 != a1 + 121 )
  {
    v26 = v24 + 1;
    do
    {
      v27 = (_DWORD *)*v26;
      if ( *(_BYTE *)(v24[2] + 128) )
        sub_609A7F44();
      v26 = v27 + 1;
      v24 = v27;
    }
    while ( v27 != v25 );
  }
  return sub_608DEA40(v3, -8, (int (__fastcall *)(char *, char *))sub_609A75CC);
}
