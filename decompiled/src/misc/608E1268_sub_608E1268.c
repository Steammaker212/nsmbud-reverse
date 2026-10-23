/* sub_608E1268
 * address: 0x608E1268   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E1268(_DWORD *a1)
{
  int v2; // r9
  int v3; // r0
  int v4; // lr
  int v5; // r8
  int v6; // r0
  int v7; // r1
  int *v8; // r12
  int v9; // r3
  int v10; // r4
  int v11; // r6
  int v12; // r7
  int v13; // r1
  int v15; // [sp+0h] [bp-38h] BYREF
  _DWORD v16[13]; // [sp+4h] [bp-34h] BYREF

  v2 = (int)(a1 + 120);
  sead__CriticalSection__lock((int)(a1 + 120));
  v3 = a1[39];
  if ( !v3 )
    return sead__CriticalSection__unlock(v2);
  if ( v3 >= 1 )
  {
    v4 = a1[37];
    v5 = a1[38];
    v6 = v3 - 1;
    v7 = v5 - v4;
    if ( v5 < v4 )
      v7 = a1[38];
    v8 = (int *)(a1[36] + 20 * v7);
    v9 = v8[1];
    v10 = v8[2];
    v11 = v8[3];
    v12 = v8[4];
    v15 = *v8;
    v16[0] = v9;
    v16[1] = v10;
    v16[2] = v11;
    v16[3] = v12;
    v13 = v5 + 1;
    if ( v5 + 1 >= v4 )
      v13 = 0;
    a1[38] = v13;
    a1[39] = v6;
  }
  sead__CriticalSection__unlock(v2);
  return nn__hid__SendVibrationValue(&v15, v16);
}
