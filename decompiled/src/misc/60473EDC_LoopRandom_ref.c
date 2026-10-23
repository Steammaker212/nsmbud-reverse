/* LoopRandom_ref
 * address: 0x60473EDC   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LoopRandom_ref(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4, float a5, int *a6)
{
  int *v10; // r1
  int v11; // r11
  char *v12; // r0
  int i; // r2
  int j; // r2
  char *v15; // r0
  int k; // r1
  char *v17; // r0
  int m; // r1
  int v19; // r0
  _DWORD *v20; // r2
  int v21; // r1
  int result; // r0
  char v23; // r1
  int **v24; // r1
  int v25; // r1
  int v26; // r0
  int v27; // r1

  v10 = (int *)a1[878];
  if ( a1[877] > a2 )
    v10 += 5 * a2;
  v11 = *v10;
  if ( *v10 )
  {
    v12 = *(char **)(v11 + 56);
    if ( v12 != "LoopRandom" )
    {
      for ( i = 0; i < 524289; ++i )
      {
        if ( v12[i] != aLooprandom[i] )
          break;
        if ( !v12[i] )
          goto LABEL_15;
      }
      if ( v12 != "Loop" )
      {
        for ( j = 0; j < 524289; ++j )
        {
          if ( v12[j] != aLoop[j] )
            break;
          if ( !v12[j] )
            goto LABEL_15;
        }
        sub_608502F4(v11, 0);
        FIELD_U32(v11, 44) = 0;
      }
    }
  }
LABEL_15:
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v15 = (char *)a3[1];
  if ( v15 != "LoopRandom" )
  {
    for ( k = 0; k < 524289; ++k )
    {
      if ( v15[k] != aLooprandom[k] )
        break;
      if ( !v15[k] )
        goto LABEL_26;
    }
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v17 = (char *)a3[1];
    if ( v17 != "Loop" )
    {
      for ( m = 0; m < 524289; ++m )
      {
        if ( v17[m] != aLoop[m] )
          break;
        if ( !v17[m] )
          goto LABEL_26;
      }
LABEL_34:
      v24 = (int **)a1[878];
      if ( a1[877] > a2 )
        v24 += 5 * a2;
      *v24 = a6;
      v25 = a1[878];
      if ( a1[877] > a2 )
        v25 += 20 * a2;
      sead__SafeStringBase__operator_assign(v25 + 4, (int)a3);
      if ( a4 )
      {
        if ( a4 == 2 )
        {
          v26 = *a6;
          v27 = 2;
        }
        else
        {
          if ( a4 != 1 )
            goto LABEL_45;
          v26 = *a6;
          v27 = 1;
        }
      }
      else
      {
        v26 = *a6;
        v27 = 0;
      }
      (*(void (__fastcall **)(int *, int, float))(v26 + 84))(a6, v27, a5);
LABEL_45:
      result = a1[878];
      v23 = 0;
      if ( a1[877] > a2 )
        result += 20 * a2;
      goto LABEL_47;
    }
  }
LABEL_26:
  v19 = *(_DWORD *)(a1[4] + 64);
  if ( !v19 )
    goto LABEL_34;
  v20 = (_DWORD *)a1[878];
  if ( a1[877] > a2 )
    v20 += 5 * a2;
  *v20 = v19;
  v21 = a1[878];
  if ( a1[877] > a2 )
    v21 += 20 * a2;
  sead__SafeStringBase__operator_assign(v21 + 4, (int)a3);
  result = a1[878];
  if ( a1[877] > a2 )
    result += 20 * a2;
  v23 = *(_BYTE *)(*(_DWORD *)(a1[4] + 64) + 51) & 1;
LABEL_47:
  FIELD_U8(result, 16) = v23;
  return result;
}
