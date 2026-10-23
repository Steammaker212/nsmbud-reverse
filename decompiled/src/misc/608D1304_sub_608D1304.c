/* sub_608D1304
 * address: 0x608D1304   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D1304(_DWORD *a1, int a2)
{
  char *v4; // r7
  int v5; // r0
  char *v6; // r10
  int v7; // r6
  int *v8; // r1
  int *v9; // r5
  int *v10; // r5
  int v11; // t1
  int *v12; // r1
  int v13; // r0
  int **v14; // r1
  int *v15; // r3
  int v16; // r7
  int v17; // r0
  int *v18; // r1
  int *v19; // r7
  int *v20; // r1
  int v21; // r0
  int **v22; // r1
  int *v23; // r3
  int v24; // r5

  v4 = (char *)sub_608065A0();
  nn__os__LockMutex(a1 + 1);
  v5 = a1[6];
  v6 = v4 + 12;
  v7 = 0;
  v8 = (int *)(v5 + 8 * a2);
  v9 = (int *)v8[1];
  if ( v9 != v8 )
  {
    do
    {
      v11 = *(v9 - 1);
      v10 = v9 - 1;
      (*(void (__fastcall **)(int *, char *, _DWORD *))(v11 + 20))(v10, v4 + 12, a1);
      v5 = a1[6];
      v9 = (int *)v10[2];
      ++v7;
      v12 = (int *)(v5 + 8 * a2);
    }
    while ( v9 != v12 );
    v9 = (int *)v12[1];
  }
  v13 = v5 + 8 * a2;
  if ( v9 != (int *)v13 )
  {
    v14 = (int **)(v13 + 4);
    do
    {
      v15 = (int *)v9[1];
      v16 = *v15;
      *(_DWORD *)(*v9 + 4) = v15;
      *v15 = *v9;
      FIELD_U32(v16, 4) = v9;
      *v9 = v16;
      v9 = *v14;
    }
    while ( *v14 != (int *)v13 );
  }
  v17 = a1[7];
  v18 = (int *)(v17 + 8 * a2);
  v19 = (int *)v18[1];
  if ( v19 != v18 )
  {
    do
    {
      ((void (__fastcall *)(int *, char *, _DWORD *))loc_608CDBA0)(v19 - 1, v6, a1);
      (*(void (__fastcall **)(int *))(*(v19 - 1) + 12))(v19 - 1);
      v17 = a1[7];
      v19 = (int *)v19[1];
      ++v7;
      v20 = (int *)(v17 + 8 * a2);
    }
    while ( v19 != v20 );
    v19 = (int *)v20[1];
  }
  v21 = v17 + 8 * a2;
  if ( v19 != (int *)v21 )
  {
    v22 = (int **)(v21 + 4);
    do
    {
      v23 = (int *)v19[1];
      v24 = *v23;
      *(_DWORD *)(*v19 + 4) = v23;
      *v23 = *v19;
      FIELD_U32(v24, 4) = v19;
      *v19 = v24;
      v19 = *v22;
    }
    while ( *v22 != (int *)v21 );
  }
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 12))(a1, -v7);
  return nn__os__UnlockMutex(a1 + 1);
}
