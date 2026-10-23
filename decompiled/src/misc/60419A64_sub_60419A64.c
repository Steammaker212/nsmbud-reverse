/* sub_60419A64
 * address: 0x60419A64   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60419A64(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r4
  unsigned int i; // r5
  const char *v7; // r7
  size_t v8; // r6
  int v9; // r0
  int *v10; // r2
  _DWORD *v11; // r1
  _WORD *v12; // r8
  signed int v13; // r1
  int v14; // r0
  int result; // r0
  int v16; // r4
  unsigned int v17; // r5
  const char *v18; // r7
  size_t v19; // r6
  int v20; // r0
  int *v21; // r2
  _DWORD *v22; // r1
  _WORD *v23; // r8
  signed int v24; // r1
  int v25; // [sp+0h] [bp-28h]
  int v26; // [sp+0h] [bp-28h]

  v4 = sub_608DE334(0x14u, a2, 4);
  if ( v4 )
  {
    v25 = 5;
    a1[204] = 5;
    a1[205] = v4;
  }
  else
  {
    v25 = a1[204];
    if ( v25 < 1 )
      goto LABEL_14;
  }
  v5 = 0;
  for ( i = 0; i != v25; ++i )
  {
    v7 = off_60BF9D40[v5];
    v8 = strlen(v7);
    v9 = (*(int (__fastcall **)(int, size_t, int))(*(_DWORD *)a2 + 24))(a2, (v8 + 4) & 0xFFFFFFFE, 2);
    v10 = (int *)a1[205];
    if ( a1[204] > i )
      v10 = (int *)((char *)v10 + v5 * 4);
    *v10 = v9;
    v11 = (_DWORD *)a1[205];
    if ( a1[204] > i )
      v11 = (_DWORD *)((char *)v11 + v5 * 4);
    v12 = (_WORD *)*v11;
    *(_WORD *)*v11 = v8;
    if ( v8 )
      memmove(v12 + 1, v7, v8);
    v13 = ((v8 + 2) & 0xFFFFFFFE) - (unsigned __int16)v8;
    if ( v13 >= 1 )
      memset((char *)v12 + (unsigned __int16)v8 + 2, 0, v13);
    ++v5;
  }
LABEL_14:
  v14 = sub_608DE334(0xCu, a2, 4);
  if ( v14 )
  {
    v26 = 3;
    a1[206] = 3;
    a1[207] = v14;
  }
  else
  {
    result = a1[206];
    v26 = result;
    if ( result < 1 )
      return result;
  }
  v16 = 0;
  v17 = 0;
  do
  {
    v18 = off_60BF9D54[v16];
    v19 = strlen(v18);
    v20 = (*(int (__fastcall **)(int, size_t, int))(*(_DWORD *)a2 + 24))(a2, (v19 + 4) & 0xFFFFFFFE, 2);
    v21 = (int *)a1[207];
    if ( a1[206] > v17 )
      v21 = (int *)((char *)v21 + v16 * 4);
    *v21 = v20;
    v22 = (_DWORD *)a1[207];
    if ( a1[206] > v17 )
      v22 = (_DWORD *)((char *)v22 + v16 * 4);
    v23 = (_WORD *)*v22;
    *(_WORD *)*v22 = v19;
    if ( v19 )
      memmove(v23 + 1, v18, v19);
    v24 = ((v19 + 2) & 0xFFFFFFFE) - (unsigned __int16)v19;
    if ( v24 >= 1 )
      memset((char *)v23 + (unsigned __int16)v19 + 2, 0, v24);
    result = v26;
    ++v17;
    ++v16;
  }
  while ( v26 != v17 );
  return result;
}
