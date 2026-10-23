/* sub_608C5128
 * address: 0x608C5128   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C5128(_DWORD *a1, int a2)
{
  _DWORD *v4; // r8
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  int v7; // r2
  _DWORD *v8; // r0
  _DWORD *v9; // r7
  _DWORD *v10; // r5
  int v11; // r2
  _DWORD *v12; // r0
  _DWORD *v13; // r7
  _DWORD *v14; // r6
  int v15; // r2

  v4 = a1 + 7;
  nn__os__LockMutex(a1 + 7);
  v5 = (_DWORD *)a1[1];
  if ( v5 != a1 )
  {
    do
    {
      v6 = (_DWORD *)v5[1];
      if ( v5[10] == a2 )
      {
        if ( v5 != a1 )
        {
          v7 = *v6;
          *(_DWORD *)(*v5 + 4) = v6;
          *v6 = *v5;
          FIELD_U32(v7, 4) = v5;
          *v5 = v7;
        }
        v5[9] = 4;
        nn__os__SignalEvent(v5 + 2);
      }
      v5 = v6;
    }
    while ( v6 != a1 );
  }
  v8 = (_DWORD *)a1[3];
  v9 = a1 + 2;
  if ( v8 != a1 + 2 )
  {
    do
    {
      v10 = (_DWORD *)v8[1];
      if ( v8[10] == a2 )
      {
        if ( v8 != v9 )
        {
          v11 = *v10;
          *(_DWORD *)(*v8 + 4) = v10;
          *v10 = *v8;
          FIELD_U32(v11, 4) = v8;
          *v8 = v11;
        }
        v8[9] = 4;
        nn__os__SignalEvent(v8 + 2);
      }
      v8 = v10;
    }
    while ( v10 != v9 );
  }
  v12 = (_DWORD *)a1[5];
  v13 = a1 + 4;
  if ( v12 != a1 + 4 )
  {
    do
    {
      v14 = (_DWORD *)v12[1];
      if ( v12[10] == a2 )
      {
        if ( v12 != v13 )
        {
          v15 = *v14;
          *(_DWORD *)(*v12 + 4) = v14;
          *v14 = *v12;
          FIELD_U32(v15, 4) = v12;
          *v12 = v15;
        }
        v12[9] = 4;
        nn__os__SignalEvent(v12 + 2);
      }
      v12 = v14;
    }
    while ( v14 != v13 );
  }
  return nn__os__UnlockMutex(v4);
}
