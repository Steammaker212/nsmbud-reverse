/* sub_608DE844
 * address: 0x608DE844   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608DE844(unsigned int result, void *a2)
{
  unsigned int v2; // lr
  int v3; // r6
  char v4; // r8
  int v5; // r11
  unsigned int v6; // r4
  int v7; // r9
  int v8; // r10
  unsigned int v9; // r5
  int v10; // r3
  unsigned int *v11; // r1
  unsigned int v12; // r5
  int v13; // r2
  int v14; // r2
  unsigned int *v15; // r2
  unsigned int v16; // r5
  int v17; // r3
  _DWORD *v18; // r3
  unsigned int *v19; // r7
  unsigned int **v20; // r7
  unsigned int *v21; // r1
  unsigned int **v22; // r1
  int v23; // [sp+0h] [bp-30h]
  int v24; // [sp+4h] [bp-2Ch]

  v2 = result;
  v3 = FIELD_U32(result, 8);
  if ( v3 >= 2 )
  {
    v4 = v3 + 3;
    v5 = v3 - 1;
    v6 = 0;
    v7 = 0;
    v8 = FIELD_U32(result, 8);
    v23 = v3 - 2;
    v24 = v3 + 3;
    do
    {
      v9 = v2;
      result = sead__Random__getU32(a2);
      v2 = v9;
      v10 = (result * (unsigned __int64)(unsigned int)v8--) >> 32;
      v11 = 0;
      v12 = FIELD_U32(v9, 8);
      if ( v12 > v8 )
      {
        v11 = *(unsigned int **)(v2 + 4);
        if ( ((v24 - v7) & 3) != 0 )
        {
          v13 = 0;
          do
          {
            v11 = (unsigned int *)v11[1];
            ++v13;
          }
          while ( (v4 & 3) != v13 );
        }
        else
        {
          v13 = 0;
        }
        if ( (unsigned int)(v23 - v7) >= 3 )
        {
          v14 = v5 - v13;
          do
          {
            v14 -= 4;
            v11 = *(unsigned int **)(*(_DWORD *)(*(_DWORD *)(v11[1] + 4) + 4) + 4);
          }
          while ( v14 );
        }
      }
      v15 = 0;
      if ( v12 > v10 )
      {
        v15 = *(unsigned int **)(v2 + 4);
        if ( v10 >= 1 )
        {
          v16 = v10 - 1;
          if ( (v10 & 3) != 0 )
          {
            v17 = 0;
            do
            {
              v15 = (unsigned int *)v15[1];
              ++v17;
            }
            while ( (((unsigned __int8)(((unsigned int)v3 * (unsigned __int64)result) >> 32) + (_BYTE)v6 * (_BYTE)result)
                   & 3) != v17 );
          }
          else
          {
            v17 = 0;
          }
          if ( v16 >= 3 )
          {
            result = ((__PAIR64__(v6, v3) * result) >> 32) - v17;
            do
            {
              result -= 4;
              v15 = *(unsigned int **)(*(_DWORD *)(*(_DWORD *)(v15[1] + 4) + 4) + 4);
            }
            while ( result );
          }
        }
      }
      if ( v11 != v15 )
      {
        v18 = (_DWORD *)*v15;
        result = *v11;
        if ( (unsigned int *)*v15 != v11 )
        {
          if ( result )
            FIELD_U32(result, 4) = v11[1];
          v19 = (unsigned int *)v11[1];
          if ( v19 )
            *v19 = *v11;
          *v11 = 0;
          v11[1] = 0;
          v20 = (unsigned int **)v18[1];
          v18[1] = v11;
          *v11 = (unsigned int)v18;
          v11[1] = (unsigned int)v20;
          if ( v20 )
            *v20 = v11;
        }
        if ( (unsigned int *)result != v15 )
        {
          if ( *v15 )
            *(_DWORD *)(*v15 + 4) = v15[1];
          v21 = (unsigned int *)v15[1];
          if ( v21 )
            *v21 = *v15;
          *v15 = 0;
          v15[1] = 0;
          v22 = *(unsigned int ***)(result + 4);
          FIELD_U32(result, 4) = v15;
          *v15 = result;
          v15[1] = (unsigned int)v22;
          if ( v22 )
            *v22 = v15;
        }
      }
      --v5;
      v4 += 3;
      ++v7;
      v6 = (__PAIR64__(v6, v3--) - 1) >> 32;
    }
    while ( v8 > 1 );
  }
  return result;
}
