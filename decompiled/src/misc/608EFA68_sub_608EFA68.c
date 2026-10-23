/* sub_608EFA68
 * address: 0x608EFA68   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608EFA68(_DWORD *a1)
{
  void *v2; // r5
  int v3; // r6
  _DWORD *v4; // r2
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *result; // r0
  int v9; // r8
  _DWORD *v10; // r6
  int v11; // r1
  int v12; // r2
  _DWORD *v13; // r3
  int v14; // r2
  _DWORD *v15; // r3
  _DWORD v16[2]; // [sp+14h] [bp-4Ch] BYREF
  _DWORD v17[3]; // [sp+1Ch] [bp-44h] BYREF
  _DWORD v18[14]; // [sp+28h] [bp-38h] BYREF

  v2 = (void *)a1[a1[36] + 31];
  v3 = operator_new_8DE25C(0x94u, v2, 4);
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = "Prepare Thread";
  v4 = (_DWORD *)operator_new_8DE25C(0x10u, v2, 4);
  v4[1] = a1;
  v4[2] = sub_608EFDC8;
  v4[3] = 0;
  *v4 = off_60C5C6FC;
  v5 = dword_60CCEC08;
  if ( a1[74] != -1 )
    v5 = a1[74];
  sub_6090891C(v3, v18, v4, v2, v5, 0, 0x7FFFFFFF, a1[73], 32);
  a1[11] = v3;
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3);
  v18[5] = 0;
  v18[4] = 0;
  v17[0] = v18;
  v17[1] = a1;
  v18[0] = v2;
  v17[2] = 0;
  v6 = operator_new_8DE25C(0x1F4u, v2, 4);
  v7 = sead__NullFaderTask__ctor(v6, (int)v17);
  a1[12] = v7;
  v16[0] = &sead__SafeStringBase__vtable;
  v16[1] = "NullFader";
  sead__SafeStringBase__operator_assign((int)(v7 + 9), (int)v16);
  *(_DWORD *)(a1[12] + 96) = 4;
  result = (_DWORD *)operator_new_8DE25C(0x18u, v2, 4);
  v9 = a1[38];
  v10 = result;
  *result = result;
  result[1] = result;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  if ( v9 >= 1 )
  {
    result = (_DWORD *)sub_608DE334(156 * v9, (int)v2, 4);
    if ( result )
    {
      v11 = v9 - 1;
      v10[3] = result;
      if ( v9 >= 2 )
      {
        v12 = 0;
        if ( (v11 & 1) != 0 )
        {
          *result = result + 39;
          v12 = 1;
        }
        if ( v9 != 2 )
        {
          v13 = &result[39 * (__int16)v12];
          v14 = v11 - v12;
          v15 = v13 + 39;
          do
          {
            *(v15 - 39) = v15;
            v14 -= 2;
            *v15 = v15 + 39;
            v15 += 78;
          }
          while ( v14 );
        }
      }
      result[39 * v11] = 0;
      v10[4] = result;
      v10[5] = v9;
    }
  }
  a1[37] = v10;
  return result;
}
