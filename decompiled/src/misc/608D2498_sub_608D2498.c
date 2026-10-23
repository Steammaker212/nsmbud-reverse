/* sub_608D2498
 * address: 0x608D2498   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2498(int a1, _DWORD *a2, int a3, int a4)
{
  int v7; // r8
  int result; // r0
  int v9; // lr
  int v10; // r7
  int v11; // r9
  int v12; // r5
  char v13; // r12
  int v14; // r9
  int v15; // r6
  char v16; // r2
  int *v17; // r3
  int v18; // r6
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r6
  int v26; // r5
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r8
  int v32; // r7
  bool v33; // cc
  int i; // r6
  int v35; // r4
  int v36; // r5
  _BOOL4 v37; // [sp+8h] [bp-38h]
  int v39; // [sp+10h] [bp-30h]
  int v40; // [sp+14h] [bp-2Ch]
  _BOOL4 v41; // [sp+14h] [bp-2Ch]
  int v42; // [sp+18h] [bp-28h]

  v7 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 52) + 8))(FIELD_U32(a1, 52));
  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 52) + 4))(FIELD_U32(a1, 52));
  v9 = FIELD_U32(a1, 92);
  v10 = result;
  if ( v9 < 1 )
    return result;
  v11 = a1 + 104;
  v42 = a1 + 104;
  if ( a3 <= 0 )
  {
    v25 = result & 1;
    v26 = 0;
    v41 = v7 > 0 && result > 0;
    do
    {
      nn__os__LockMutex(v11);
      if ( v41 )
      {
        v27 = *(_DWORD *)(FIELD_U32(a1, 88) + 4 * (v26 + FIELD_U32(a1, 92) * a4));
        v28 = 0;
        do
        {
          v29 = 0;
          if ( v25 )
          {
            *(_DWORD *)(v27 + 4 * FIELD_U32(a1, 100) * v28) = 0;
            v29 = 1;
          }
          if ( v10 != 1 )
          {
            do
            {
              *(_DWORD *)(v27 + 4 * (v29 + v28 * FIELD_U32(a1, 100))) = 0;
              v30 = v29 + v28 * FIELD_U32(a1, 100);
              v29 += 2;
              *(_DWORD *)(v27 + 4 * v30 + 4) = 0;
            }
            while ( v10 != v29 );
          }
          ++v28;
        }
        while ( v28 != v7 );
      }
      v11 = a1 + 104;
      nn__os__UnlockMutex(v42);
      ++v26;
    }
    while ( v26 < FIELD_U32(a1, 92) );
    goto LABEL_30;
  }
  v12 = result & 1;
  v13 = 0;
  v14 = 0;
  v40 = a3;
  v37 = v7 > 0 && result > 0;
  v39 = a3 & 1;
  do
  {
    v15 = 0;
    v16 = 0;
    if ( v39 )
    {
      v15 = 1;
      v16 = v14 == *a2;
    }
    result = v40;
    if ( v40 != 1 )
    {
      v17 = &a2[v15 + 1];
      v18 = v40 - v15;
      do
      {
        v19 = *v17;
        v20 = *(v17 - 1);
        v17 += 2;
        result = v14 == v19;
        v18 -= 2;
        v16 |= (v14 == v20) | (unsigned __int8)result;
      }
      while ( v18 );
    }
    if ( (v16 & 1) == 0 )
    {
      nn__os__LockMutex(v42);
      if ( v37 )
      {
        v21 = *(_DWORD *)(FIELD_U32(a1, 88) + 4 * (v14 + FIELD_U32(a1, 92) * a4));
        v22 = 0;
        do
        {
          v23 = 0;
          if ( v12 )
          {
            *(_DWORD *)(v21 + 4 * FIELD_U32(a1, 100) * v22) = 0;
            v23 = 1;
          }
          if ( v10 != 1 )
          {
            do
            {
              *(_DWORD *)(v21 + 4 * (v23 + v22 * FIELD_U32(a1, 100))) = 0;
              v24 = v23 + v22 * FIELD_U32(a1, 100);
              v23 += 2;
              *(_DWORD *)(v21 + 4 * v24 + 4) = 0;
            }
            while ( v10 != v23 );
          }
          ++v22;
        }
        while ( v22 != v7 );
      }
      result = nn__os__UnlockMutex(v42);
      v9 = FIELD_U32(a1, 92);
      v13 = 1;
    }
    ++v14;
  }
  while ( v14 < v9 );
  if ( (v13 & 1) != 0 )
  {
LABEL_30:
    v31 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 52) + 8))(FIELD_U32(a1, 52));
    v32 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 52) + 4))(FIELD_U32(a1, 52));
    result = FIELD_U32(a1, 92);
    if ( result >= 1 )
    {
      v33 = v31 < 1;
      if ( v31 >= 1 )
        v33 = v32 < 1;
      if ( !v33 )
      {
        for ( i = 0; i < result; ++i )
        {
          v35 = 0;
          do
          {
            v36 = 0;
            do
              ((void (__fastcall *)(int, int, int, int, int))loc_608D1E84)(a1, a4, i, v35, v36++);
            while ( v32 != v36 );
            ++v35;
          }
          while ( v35 != v31 );
          result = FIELD_U32(a1, 92);
        }
      }
    }
  }
  return result;
}
