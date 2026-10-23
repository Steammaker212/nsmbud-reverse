/* Icon_DRAW_Order_1_ref
 * address: 0x60969140   size: 924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall Icon_DRAW_Order_1_ref(int a1, int a2, const void **a3)
{
  char *v5; // r4
  _BYTE *v6; // r1
  int i; // r2
  char *v8; // r5
  char *v9; // r6
  signed int v10; // r7
  bool v11; // cc
  char *v12; // r10
  const char *v13; // r11
  signed int j; // r6
  signed int v15; // r0
  signed int v16; // r0
  int v17; // r0
  int v18; // r4
  _BYTE *v19; // r0
  int v20; // r10
  signed int v21; // r6
  signed int v22; // r0
  int *result; // r0
  int v24; // r4
  int v25; // [sp+8h] [bp-430h] BYREF

  (*((void (__fastcall **)(const void **))*a3 + 3))(a3);
  (*((void (__fastcall **)(const void **))*a3 + 3))(a3);
  v5 = (char *)a3[1];
  off_60C5CB30[3]();
  if ( v5 == off_60C5CB34 )
  {
LABEL_9:
    v8 = *(char **)(a1 + 24);
    off_60C5CB30[3]();
    v9 = off_60C5CB34;
    if ( v8 != off_60C5CB34 )
    {
      off_60C5CB30[3]();
      v10 = 0;
      while ( off_60C5CB34[v10] )
      {
        if ( !off_60C5CB34[v10 + 1] )
        {
          ++v10;
          break;
        }
        if ( !off_60C5CB34[v10 + 2] )
        {
          v10 += 2;
          break;
        }
        v11 = v10 + 2 <= 0x7FFFF;
        v10 += 3;
        if ( !v11 )
        {
          v10 = 0;
          break;
        }
      }
      v15 = FIELD_U32(a1, 28);
      if ( v10 >= v15 )
        v10 = v15 - 1;
      qmemcpy(v8, v9, v10);
      v8[v10] = 0;
    }
  }
  else
  {
    v6 = a3[1];
    for ( i = 1; v6[i - 1] == off_60C5CB34[i - 1]; i += 2 )
    {
      if ( !v6[i - 1] )
        goto LABEL_9;
      if ( i >= 524289 || v6[i] != off_60C5CB34[i] )
        break;
      if ( !v6[i] )
        goto LABEL_9;
    }
    v12 = *(char **)(a1 + 24);
    v13 = ",";
    if ( v12 != "," )
    {
      for ( j = 0; asc_60AEABB0[j]; j += 2 )
      {
        if ( j > 0x7FFFF )
        {
          j = 0;
          break;
        }
        if ( !asc_60AEABB0[j + 1] )
        {
          ++j;
          break;
        }
      }
      v16 = FIELD_U32(a1, 28);
      if ( j >= v16 )
        j = v16 - 1;
      qmemcpy(*(void **)(a1 + 24), ",", j);
      v12[j] = 0;
      v13 = *(const char **)(a1 + 24);
    }
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 20) + 12))(a1 + 20);
    v17 = FIELD_U32(a1, 24);
    v18 = 0;
    while ( *(_BYTE *)(v17 + v18) )
    {
      if ( !*(_BYTE *)(v17 + v18 + 1) )
      {
        ++v18;
        break;
      }
      if ( !*(_BYTE *)(v17 + v18 + 2) )
      {
        v18 += 2;
        break;
      }
      v11 = v18 + 2 <= 0x7FFFF;
      v18 += 3;
      if ( !v11 )
      {
        v18 = 0;
        break;
      }
    }
    (*((void (__fastcall **)(const void **))*a3 + 3))(a3);
    v19 = a3[1];
    v20 = 0;
    v21 = 0;
    if ( v18 > 0 )
      v20 = v18;
    while ( v19[v21] )
    {
      if ( !v19[v21 + 1] )
      {
        ++v21;
        break;
      }
      if ( !v19[v21 + 2] )
      {
        v21 += 2;
        break;
      }
      v11 = v21 + 2 <= 0x7FFFF;
      v21 += 3;
      if ( !v11 )
      {
        v21 = 0;
        break;
      }
    }
    v22 = FIELD_U32(a1, 28) - v20;
    if ( v21 >= v22 )
      v21 = v22 - 1;
    if ( v21 >= 1 )
    {
      (*((void (__fastcall **)(const void **))*a3 + 3))(a3);
      qmemcpy((void *)&v13[v20], a3[1], v21);
      if ( v21 + v20 > v18 )
        v13[v21 + v20] = 0;
    }
  }
  result = &dword_60CD0B58;
  if ( dword_60CD0B58 )
  {
    result = *(int **)(dword_60CD0B50 + 60);
    if ( result )
    {
      v24 = dword_60CD0B58 + 20;
      (*(void (__fastcall **)(int))(FIELD_U32(dword_60CD0B58, 20) + 12))(dword_60CD0B58 + 20);
      return sub_604209A4(&v25, "%s%s", "Icon = DRAW, Order = -1", *(const char **)(v24 + 4));
    }
  }
  return result;
}
