/* sub_60957364
 * address: 0x60957364   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60957364(_DWORD *a1)
{
  int v2; // r5
  _DWORD *v3; // r6
  void *v4; // r0
  int v5; // r0
  int v6; // r1
  void *v7; // r5
  int v8; // r6
  int v9; // r7
  int v10; // r0
  int v11; // r1
  void *v12; // r5
  int v13; // r6
  int v14; // r7
  int v15; // r0
  int v16; // r1
  void *v17; // r5
  int v18; // r6
  int v19; // r7
  int v20; // r6
  _DWORD *v21; // r5

  *a1 = off_60C5EA38;
  v2 = a1[8];
  if ( v2 )
  {
    v3 = (_DWORD *)a1[9];
    do
    {
      if ( *v3 )
      {
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 4))(*v3);
        *v3 = 0;
      }
      --v2;
      ++v3;
    }
    while ( v2 );
  }
  sub_6099EBC0(a1 + 69);
  sub_6099EBC0(a1 + 101);
  sub_6099EBC0(a1 + 133);
  sub_6099EBC0(a1 + 165);
  v4 = (void *)a1[9];
  if ( v4 )
  {
    operator_delete_8DE3FC(v4);
    a1[8] = 0;
    a1[9] = 0;
  }
  v5 = a1[11];
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    v7 = (void *)(v5 - 8);
    if ( v6 )
    {
      v8 = v5 - 28;
      v9 = 28 * v6;
      do
      {
        j_nullsub_281(v8 + v9);
        v9 -= 28;
      }
      while ( v9 );
    }
    operator_delete_8DE3FC(v7);
    a1[10] = 0;
    a1[11] = 0;
  }
  v10 = a1[13];
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 - 4);
    v12 = (void *)(v10 - 8);
    if ( v11 )
    {
      v13 = v10 - 28;
      v14 = 28 * v11;
      do
      {
        j_nullsub_281(v13 + v14);
        v14 -= 28;
      }
      while ( v14 );
    }
    operator_delete_8DE3FC(v12);
    a1[12] = 0;
    a1[13] = 0;
  }
  v15 = a1[15];
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 - 4);
    v17 = (void *)(v15 - 8);
    if ( v16 )
    {
      v18 = v15 - 28;
      v19 = 28 * v16;
      do
      {
        j_nullsub_281(v18 + v19);
        v19 -= 28;
      }
      while ( v19 );
    }
    operator_delete_8DE3FC(v17);
    a1[14] = 0;
    a1[15] = 0;
  }
  v20 = a1[6];
  v21 = (_DWORD *)a1[7];
  if ( v20 )
  {
    do
    {
      if ( *v21 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v21 + 8))(*v21);
      --v20;
      ++v21;
    }
    while ( v20 );
    v21 = (_DWORD *)a1[7];
  }
  if ( v21 )
  {
    operator_delete_8DE3FC(v21);
    a1[6] = 0;
    a1[7] = 0;
  }
  sead__CriticalSection__dtor(a1 + 200);
  a1[165] = off_60C5EA54;
  sub_60907FE0(a1 + 171);
  a1[133] = off_60C5EA54;
  sub_60907FE0(a1 + 139);
  a1[101] = off_60C5EA54;
  sub_60907FE0(a1 + 107);
  a1[69] = off_60C5EA54;
  sub_60907FE0(a1 + 75);
  sub_60976D5C(a1 + 16);
  return a1;
}
