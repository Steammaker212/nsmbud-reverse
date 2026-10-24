/* sub_6019EEE8
 * address: 0x6019EEE8   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6019EEE8(_DWORD *a1)
{
  int v2; // r9
  int v3; // r0
  sead_ListNode *v4; // r1
  int v5; // r7
  int *v6; // r4
  sead_ListNode *v7; // r6
  sead_ListNode **p_next; // r5
  int v9; // r0
  int i; // r10
  _DWORD *v11; // r0
  _DWORD *v12; // r4
  int v13; // r1
  _DWORD *v14; // r7
  _DWORD *v15; // r5
  int v16; // r6
  _DWORD *v17; // r1
  int j; // r6
  _DWORD *v19; // r0
  int v20; // r1
  bool v21; // zf
  int v22; // r2
  _DWORD *v23; // r7
  _DWORD *v24; // r1
  int k; // r5
  _DWORD *v26; // r0
  int v27; // r1
  bool v28; // zf
  int m; // r6
  _DWORD *v30; // r0
  int v31; // r1
  bool v32; // zf
  int v33; // r2
  _DWORD *v34; // r7
  _DWORD *v35; // r1
  int v36; // r0
  bool v37; // zf
  int n; // r6
  _DWORD *result; // r0
  int v40; // r1
  bool v41; // zf
  int v42; // r2
  _DWORD *v43; // r4
  _DWORD *v44; // r7
  _DWORD *v45; // r1

  v2 = 0;
  v3 = CSParallelExecuter_ref(a1 + 41, 0);
  do
  {
    v3 = sub_6019F1BC(v3, v2, 0);
    if ( v3 )
    {
      v4 = (sead_ListNode *)&a1[4 * v2];
      v5 = 1;
      v6 = (int *)&v4[3];
      v7 = v4 + 2;
      p_next = &FIELD_U32(v4 + (3) * 8, 0x4);
      do
      {
        sead__ListNode__insertFront(v7, (sead_ListNode *)((char *)*p_next + v3));
        v9 = *v6 + 1;
        *v6 = v9;
        v3 = sub_6019F1BC(v9, v2, v5++);
      }
      while ( v3 );
    }
    ++v2;
  }
  while ( v2 != 9 );
  GrandCentral_ref(a1);
  for ( i = 0; i != 9; ++i )
  {
    v11 = &a1[4 * i];
    v12 = 0;
    if ( (int)v11[6] >= 1 )
    {
      v13 = v11[5];
      v12 = 0;
      if ( v13 )
        v12 = (_DWORD *)(v13 - v11[7]);
    }
    v14 = v11 + 4;
    v15 = v11 + 7;
    v16 = 0;
    do
    {
      sub_601A3B4C(dword_60C89E18, *(_DWORD *)v12[1], i, v16++);
      v17 = *(_DWORD **)((char *)v12 + *v15 + 4);
      v12 = (_DWORD *)((char *)v17 - *v15);
      if ( v17 == v14 )
        v12 = 0;
    }
    while ( v12 );
  }
  for ( j = 0; j != 9; ++j )
  {
    v19 = &a1[4 * j];
    if ( (int)v19[6] >= 1 )
    {
      v20 = v19[5];
      v21 = v20 == 0;
      if ( v20 )
      {
        v22 = v19[7];
        v15 = (_DWORD *)(v20 - v22);
        v21 = v20 == v22;
      }
      if ( !v21 )
      {
        v12 = v19 + 4;
        v23 = v19 + 7;
        do
        {
          sub_60223D00(v15);
          v24 = *(_DWORD **)((char *)v15 + *v23 + 4);
          v15 = (_DWORD *)((char *)v24 - *v23);
          if ( v24 == v12 )
            v15 = 0;
        }
        while ( v15 );
      }
    }
  }
  sub_6019F708((int)a1);
  for ( k = 0; k != 36; k += 4 )
  {
    v26 = &a1[k];
    if ( (int)v26[6] >= 1 )
    {
      v27 = v26[5];
      v28 = v27 == 0;
      if ( v27 )
      {
        v26 = (_DWORD *)(v27 - v26[7]);
        v28 = v26 == 0;
      }
      if ( !v28 )
        sub_60226A80(v26, *(_DWORD *)(dword_60CC6D78 + k + 760), 1, 1.0);
    }
  }
  for ( m = 0; m != 9; ++m )
  {
    v30 = &a1[4 * m];
    if ( (int)v30[6] >= 1 )
    {
      v31 = v30[5];
      v32 = v31 == 0;
      if ( v31 )
      {
        v12 = v30 + 7;
        v33 = v30[7];
        k = v31 - v33;
        v32 = v31 == v33;
      }
      if ( !v32 )
      {
        v34 = v30 + 4;
        do
        {
          sub_60222DC8(k);
          v35 = *(_DWORD **)(*v12 + k + 4);
          k = (int)v35 - *v12;
          if ( v35 == v34 )
            k = 0;
        }
        while ( k );
      }
    }
  }
  if ( (int)a1[14] > 0 )
  {
    v36 = a1[13];
    v37 = v36 == 0;
    if ( v36 )
      v37 = v36 == a1[15];
    if ( !v37 )
      sub_60227A9C();
  }
  for ( n = 0; n != 9; ++n )
  {
    result = &a1[4 * n];
    if ( (int)result[6] >= 1 )
    {
      v40 = result[5];
      v41 = v40 == 0;
      if ( v40 )
      {
        v42 = result[7];
        k = v40 - v42;
        v41 = v40 == v42;
      }
      if ( !v41 )
      {
        v43 = result + 4;
        v44 = result + 7;
        do
        {
          sub_60226F74((_DWORD *)k);
          result = (_DWORD *)*v44;
          v45 = *(_DWORD **)(*v44 + k + 4);
          k = (int)v45 - *v44;
          if ( v45 == v43 )
            k = 0;
        }
        while ( k );
      }
    }
  }
  return result;
}
