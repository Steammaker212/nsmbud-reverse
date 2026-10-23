/* sub_6093EA98
 * address: 0x6093EA98   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093EA98(int a1, int a2)
{
  int v4; // r4
  unsigned int *v5; // r0
  _DWORD *v6; // r1
  unsigned int v7; // r3
  unsigned int v8; // r0
  int v9; // r2
  unsigned int v10; // r0
  int v11; // r12
  _DWORD *v12; // r2
  bool v13; // cc
  int v14; // r0
  int v15; // r3
  int v16; // r1
  unsigned int *v17; // r0
  unsigned int v18; // r3
  int v19; // r6

  v4 = a1 + 2500;
  sead__CriticalSection__lock(a1 + 2500);
  if ( (FIELD_U8(a1, 21) & 0x40) != 0 )
  {
    v6 = *(_DWORD **)(a2 + 272);
    if ( v6[10] )
    {
      v10 = FIELD_U16(a1, 2572);
      v11 = 3 * v10;
      FIELD_U16(a1, 2572) = v10 + 1;
      v12 = *(_DWORD **)(a1 + 2568);
      v13 = FIELD_U32(a1, 2564) > v10;
      v14 = v6[10];
      v15 = v6[11];
      v16 = v6[12];
      if ( v13 )
        v12 += v11;
      *v12 = v14;
      v12[1] = v15;
      v12[2] = v16;
      v6 = *(_DWORD **)(a2 + 272);
    }
    v17 = *(unsigned int **)(a2 + 304);
    v18 = *v17;
    v8 = v17[1];
    if ( v18 > FIELD_U8(a2, 334) )
      v8 += 92 * FIELD_U8(a2, 334);
    v9 = 0;
  }
  else
  {
    v5 = *(unsigned int **)(a2 + 304);
    v6 = *(_DWORD **)(a2 + 272);
    v7 = *v5;
    v8 = v5[1];
    if ( v7 > FIELD_U8(a2, 334) )
      v8 += 92 * FIELD_U8(a2, 334);
    v9 = 1;
  }
  sub_60953920(v8, v6, v9);
  v19 = a1 + 2464;
  FIELD_U32(a2, 272) = 0;
  sead__CriticalSection__lock(v19);
  FIELD_U8(a2, 341) &= ~1u;
  sead__CriticalSection__unlock(v19);
  sead__CriticalSection__unlock(v4);
  return 1;
}
