/* sub_608AC778
 * address: 0x608AC778   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608AC778(int a1, int a2)
{
  char v2; // r12
  int *result; // r0
  int *v6; // r6
  int v7; // r1
  int *v8; // r0
  int *i; // r0
  int *v10; // r3
  int v11; // r4
  int v12; // r2
  int v13; // r3
  int *v14; // r2
  int *j; // r2
  int *v16; // r7
  int *v17; // r4
  int v18; // r1
  int *v19; // r2
  int **v20; // r3
  int *v21; // r5
  int *v22; // r4
  int v23; // r1

  result = *(int **)(a1 + 12);
  v6 = (int *)(a1 + 8);
  if ( result != (int *)(a1 + 8) )
  {
    v7 = 0;
    do
    {
      result = (int *)result[1];
      ++v7;
    }
    while ( result != v6 );
    if ( v7 >= 2 )
    {
      if ( ((unsigned int)&dword_60CC8CCC & ~(1619707840 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC8CCC) )
      {
        v8 = dword_60CC88CC;
        do
        {
          *v8 = (int)v8;
          v8[1] = (int)v8;
          v8[2] = (int)(v8 + 2);
          v8[3] = (int)(v8 + 2);
          v8[4] = (int)(v8 + 4);
          v8[5] = (int)(v8 + 4);
          v8[6] = (int)(v8 + 6);
          v8[7] = (int)(v8 + 6);
          v8 += 8;
        }
        while ( v8 != &dword_60CC8CCC );
        _cxa_guard_release(&dword_60CC8CCC);
      }
      for ( i = *(int **)(a1 + 12); i != v6; i = *(int **)(a1 + 12) )
      {
        v10 = (int *)i[1];
        v11 = *v10;
        *(_DWORD *)(*i + 4) = v10;
        *v10 = *i;
        FIELD_U32(v11, 4) = i;
        *i = v11;
        v12 = *((unsigned __int8 *)i - 216) + *(i - 85);
        v13 = v12;
        if ( v12 <= 0 )
          v13 = 0;
        if ( v12 > 127 )
          v13 = 127;
        v14 = &dword_60CC88CC[2 * v13];
        *i = *v14;
        FIELD_U32(v11, 4) = v14;
        *(_DWORD *)(*v14 + 4) = i;
        *v14 = v11;
      }
      result = 0;
      if ( a2 )
      {
        do
        {
          for ( j = &dword_60CC88CC[2 * (_DWORD)result]; (int *)j[1] != j; *v6 = v18 )
          {
            v16 = (int *)*j;
            v17 = *(int **)(*j + 4);
            v18 = *v17;
            *(_DWORD *)(*(_DWORD *)*j + 4) = v17;
            *v17 = *v16;
            FIELD_U32(v18, 4) = v16;
            *v16 = v18;
            *v16 = *v6;
            FIELD_U32(v18, 4) = v6;
            *(_DWORD *)(*v6 + 4) = v16;
          }
          result = (int *)((char *)result + 1);
        }
        while ( result != (int *)128 );
      }
      else
      {
        do
        {
          v19 = &dword_60CC88CC[2 * (_DWORD)result];
          v20 = (int **)(v19 + 1);
          v21 = (int *)v19[1];
          if ( v21 != v19 )
          {
            do
            {
              v22 = (int *)v21[1];
              v23 = *v22;
              *(_DWORD *)(*v21 + 4) = v22;
              *v22 = *v21;
              FIELD_U32(v23, 4) = v21;
              *v21 = v23;
              *v21 = *v6;
              FIELD_U32(v23, 4) = v6;
              *(_DWORD *)(*v6 + 4) = v21;
              *v6 = v23;
              v21 = *v20;
            }
            while ( *v20 != v19 );
          }
          result = (int *)((char *)result + 1);
        }
        while ( result != (int *)128 );
      }
    }
  }
  return result;
}
