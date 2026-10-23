/* sub_609628D4
 * address: 0x609628D4   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609628D4(unsigned int *a1, void *a2)
{
  int v4; // r0
  int v5; // r6
  unsigned int v6; // r7
  _DWORD *v7; // r0
  _DWORD *v8; // r2
  _DWORD **v9; // r1
  _DWORD *v10; // r4
  int v11; // r0
  int v12; // r0
  int v13; // r6
  unsigned int v14; // r7
  _DWORD *v15; // r0
  _DWORD *v16; // r2
  _DWORD **v17; // r1
  _DWORD *v18; // r4
  int v19; // r0
  int v20; // r0
  int v21; // r6
  unsigned int v22; // r7
  _DWORD *v23; // r0
  _DWORD *v24; // r2
  _DWORD **v25; // r1
  _DWORD *v26; // r4
  int result; // r0

  v4 = sub_608DE334(0x40u, (int)a2, 4);
  v5 = 0;
  v6 = 0;
  if ( v4 )
  {
    a1[3] = 16;
    a1[4] = v4;
  }
  do
  {
    v7 = (_DWORD *)operator_new_8DE25C(0xCu, a2, 4);
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v8 = (_DWORD *)a1[4];
    if ( a1[3] > v6 )
      v8 = (_DWORD *)((char *)v8 + v5);
    *v8 = v7;
    v9 = (_DWORD **)a1[4];
    if ( a1[3] > v6 )
      v9 = (_DWORD **)((char *)v9 + v5);
    v10 = *v9;
    v11 = sub_608DE334(0xC0u, (int)a2, 32);
    ++v6;
    v5 += 4;
    if ( v11 )
    {
      *v10 = 16;
      v10[1] = v11;
    }
  }
  while ( v6 != 16 );
  v12 = sub_608DE334(0x40u, (int)a2, 4);
  v13 = 0;
  v14 = 0;
  if ( v12 )
  {
    a1[6] = 16;
    a1[7] = v12;
  }
  do
  {
    v15 = (_DWORD *)operator_new_8DE25C(0xCu, a2, 4);
    *v15 = 0;
    v15[1] = 0;
    v15[2] = 0;
    v16 = (_DWORD *)a1[7];
    if ( a1[6] > v14 )
      v16 = (_DWORD *)((char *)v16 + v13);
    *v16 = v15;
    v17 = (_DWORD **)a1[7];
    if ( a1[6] > v14 )
      v17 = (_DWORD **)((char *)v17 + v13);
    v18 = *v17;
    v19 = sub_608DE334(0xC0u, (int)a2, 32);
    ++v14;
    v13 += 4;
    if ( v19 )
    {
      *v18 = 16;
      v18[1] = v19;
    }
  }
  while ( v14 != 16 );
  v20 = sub_608DE334(0x40u, (int)a2, 4);
  v21 = 0;
  v22 = 0;
  if ( v20 )
  {
    *a1 = 16;
    a1[1] = v20;
  }
  do
  {
    v23 = (_DWORD *)operator_new_8DE25C(0xCu, a2, 4);
    *v23 = 0;
    v23[1] = 0;
    v23[2] = 0;
    v24 = (_DWORD *)a1[1];
    if ( *a1 > v22 )
      v24 = (_DWORD *)((char *)v24 + v21);
    *v24 = v23;
    v25 = (_DWORD **)a1[1];
    if ( *a1 > v22 )
      v25 = (_DWORD **)((char *)v25 + v21);
    v26 = *v25;
    result = sub_608DE334(0xC0u, (int)a2, 32);
    ++v22;
    v21 += 4;
    if ( result )
    {
      *v26 = 16;
      v26[1] = result;
    }
  }
  while ( v22 != 16 );
  return result;
}
