/* sub_6041A1C4
 * address: 0x6041A1C4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041A1C4(_DWORD *a1, int a2)
{
  int v4; // r5
  int v5; // r0
  int v6; // r1
  __int64 v7; // r2
  __int64 v8; // kr00_8
  int v9; // r1
  bool v10; // vf
  int v11; // r0

  v4 = (int)(a1 + 646);
  sead__CriticalSection__lock((int)(a1 + 646));
  v5 = a1[515];
  v6 = a1[517];
  if ( v6 >= v5 )
  {
    sead__CriticalSection__unlock(v4);
    v7 = qword_60CCFB50 % 500;
    v8 = qword_60CCFB50 / 500;
    while ( 1 )
    {
      sub_609085CC(v8, HIDWORD(v8), v7, HIDWORD(v7));
      sead__CriticalSection__lock(v4);
      v5 = a1[515];
      v6 = a1[517];
      if ( v6 < v5 )
        break;
      sead__CriticalSection__unlock(v4);
    }
  }
  a1[517] = v6 + 1;
  v9 = a1[516] + v6;
  v10 = __OFSUB__(v9, v5);
  v11 = v9 - v5;
  if ( v11 < 0 != v10 )
    v11 = v9;
  *(_DWORD *)(a1[514] + 4 * v11) = a2;
  return sead__CriticalSection__unlock(v4);
}
