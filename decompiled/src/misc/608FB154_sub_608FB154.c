/* sub_608FB154
 * address: 0x608FB154   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FB154(int a1)
{
  int v2; // r9
  unsigned int v3; // r0
  int v4; // r6
  int v5; // r2
  _DWORD *v6; // lr
  int v7; // r12
  int v8; // r3
  int v9; // r6
  int v10; // r7
  int v11; // r4
  _DWORD *v12; // r0
  int result; // r0

  v2 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v2 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  sub_608F98A4(a1, 0, 0);
  v3 = FIELD_U32(a1, 124);
  v4 = FIELD_U32(a1, 132) / v3;
  v5 = v4 - 1;
  FIELD_U32(a1, 136) = v4 * v3;
  v6 = *(_DWORD **)(a1 + 128);
  v7 = (int)v3 / 4;
  FIELD_U32(a1, 140) = v6;
  if ( v4 >= 2 )
  {
    v8 = 0;
    if ( (v5 & 1) != 0 )
    {
      v8 = 1;
      *v6 = &v6[v7];
    }
    if ( v4 != 2 )
    {
      v9 = v8 * v7;
      v10 = v7 * (v8 + 1);
      v11 = v7 * (v8 | 2);
      v12 = v6;
      do
      {
        v8 += 2;
        v12[v9] = &v12[v10];
        v12[v10] = &v12[v11];
        v12 += 2 * v7;
      }
      while ( v8 != v5 );
    }
  }
  result = v5 * v7;
  v6[v5 * v7] = 0;
  FIELD_U32(a1, 144) = v6;
  if ( v2 )
    return sead__CriticalSection__unlock(v2);
  return result;
}
