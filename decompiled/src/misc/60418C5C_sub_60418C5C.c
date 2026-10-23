/* sub_60418C5C
 * address: 0x60418C5C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60418C5C(_DWORD *a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r3
  int v5; // r2
  int v6; // r0
  int v7; // r1
  bool v8; // vf
  int v9; // r2
  void (__fastcall ***v10)(_DWORD); // r6

  v2 = (int)(a1 + 646);
  sead__CriticalSection__lock((int)(a1 + 646));
  v3 = a1[517];
  if ( v3 <= 0 )
  {
    sead__CriticalSection__unlock(v2);
  }
  else
  {
    v4 = a1[516];
    v5 = a1[515];
    v6 = v3 - 1;
    v7 = v4 + 1;
    if ( v4 + 1 >= v5 )
      v7 = 0;
    v8 = __OFSUB__(v4, v5);
    v9 = v4 - v5;
    if ( v9 < 0 != v8 )
      v9 = a1[516];
    v10 = *(void (__fastcall ****)(_DWORD))(a1[514] + 4 * v9);
    a1[516] = v7;
    a1[517] = v6;
    sead__CriticalSection__unlock(v2);
    if ( v10 )
      (**v10)(v10);
  }
  return sub_609085CC(
           16 * qword_60CCFB50 / 1000,
           (unsigned __int64)(16 * qword_60CCFB50 / 1000) >> 32,
           16 * qword_60CCFB50 % 1000,
           (unsigned __int64)(16 * qword_60CCFB50 % 1000) >> 32);
}
