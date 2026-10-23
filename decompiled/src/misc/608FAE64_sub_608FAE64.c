/* sub_608FAE64
 * address: 0x608FAE64   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FAE64(int a1, int a2, int a3, int a4)
{
  int v8; // r9
  _DWORD *v9; // lr
  unsigned int v10; // r0
  unsigned int v11; // r2
  int v12; // r1
  int v13; // r12
  int v14; // r3
  int v15; // r7
  int v16; // r5
  int v17; // r4
  _DWORD *v18; // r0
  int result; // r0

  v8 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v8 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v9 = (_DWORD *)((a2 - 1 + a1 + 148) & -a2);
  if ( a3 )
    v9 = (_DWORD *)((char *)v9 + a2);
  if ( ((a2 - 1 + a1 + 148) & -a2) != a1 + 148 )
    v9 = (_DWORD *)((a2 - 1 + a1 + 148) & -a2);
  FIELD_U32(a1, 128) = v9;
  v10 = a1 - (_DWORD)v9 + FIELD_U32(a1, 32);
  FIELD_U32(a1, 132) = v10;
  v11 = (a2 - 1 + FIELD_U32(a1, 124)) & -a2;
  FIELD_U32(a1, 124) = v11;
  v12 = v10 / v11 - 1;
  FIELD_U32(a1, 136) = v10 / v11 * v11;
  FIELD_U32(a1, 140) = v9;
  v13 = (int)v11 / 4;
  if ( (int)(v10 / v11) >= 2 )
  {
    v14 = 0;
    if ( (v12 & 1) != 0 )
    {
      v14 = 1;
      *v9 = &v9[v13];
    }
    if ( v10 / v11 != 2 )
    {
      v15 = v14 * v13;
      v16 = v13 * (v14 + 1);
      v17 = v13 * (v14 | 2);
      v18 = v9;
      do
      {
        v14 += 2;
        v18[v15] = &v18[v16];
        v18[v16] = &v18[v17];
        v18 += 2 * v13;
      }
      while ( v14 != v12 );
    }
  }
  v9[v12 * v13] = 0;
  FIELD_U32(a1, 144) = v9;
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a4 + 104))(a4, a1);
  if ( v8 )
    return sead__CriticalSection__unlock(v8);
  return result;
}
