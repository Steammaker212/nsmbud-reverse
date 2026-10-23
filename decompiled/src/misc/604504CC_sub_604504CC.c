/* sub_604504CC
 * address: 0x604504CC   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604504CC(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // r0
  int v10; // r4
  int v11; // r5
  int v12; // r9
  int v13; // r7
  int v14; // r4
  int v15; // r0
  _DWORD *v16; // r10
  int v17; // r5
  int v18; // r7
  int v19; // r4
  int v20; // r9
  int v21; // r2
  int v22; // r1
  int v23; // r2
  int v24; // r1

  result = FIELD_U32(a1, 860);
  if ( result < FIELD_U32(a1, 868) )
  {
    v10 = FIELD_U32(a1, 856);
    v11 = FIELD_U32(a1, 876);
    v12 = dword_60CC73E8(FIELD_U32(a1, 924));
    v13 = sub_60913FB4(a1 + 912);
    if ( a3 >= 1 )
    {
      v14 = 17 * v11 * v10;
      v15 = 0;
      if ( (a3 & 1) != 0 )
      {
        qmemcpy((void *)(v12 + v13 + 8 * v14 + 136 * FIELD_U32(a1, 860) * a3), a2, 0x88u);
        v15 = 1;
      }
      if ( a3 != 1 )
      {
        v16 = a2;
        v17 = a3 - v15;
        v18 = v12 + v13 + 8 * v14;
        v19 = 34 * v15;
        v20 = 136 * a3;
        do
        {
          qmemcpy((void *)(v18 + v19 * 4 + v20 * FIELD_U32(a1, 860)), &v16[v19], 0x88u);
          qmemcpy((void *)(v18 + v19 * 4 + v20 * FIELD_U32(a1, 860) + 136), &v16[v19 + 34], 0x88u);
          v16 += 68;
          v18 += 272;
          v17 -= 2;
        }
        while ( v17 );
      }
    }
    *(_BYTE *)(FIELD_U32(a1, 2288) + FIELD_U32(a1, 860)) = sub_6044EED0((_DWORD *)(a1 + 948), a4, 1);
    if ( FIELD_U8(a1, 2312) )
    {
      v21 = FIELD_U32(a1, 2316) + 32 * FIELD_U32(a1, 860);
      FIELD_U32(v21, 24) = a6;
      FIELD_U32(v21, 28) = a7;
      *(_DWORD *)(FIELD_U32(a1, 2316) + 32 * FIELD_U32(a1, 860) + 20) = FIELD_U32(a1, 860);
      *(_DWORD *)(FIELD_U32(a1, 2316) + 32 * FIELD_U32(a1, 860) + 16) = a1;
      v22 = FIELD_U32(a1, 44);
      v23 = 3 * FIELD_U32(a1, 860);
      *(_DWORD *)(v22 + 12 * FIELD_U32(a1, 860)) = *a2;
      v24 = v22 + 4 * v23;
      FIELD_U32(v24, 4) = a2[1];
      FIELD_U32(v24, 8) = a2[2];
    }
    result = FIELD_U32(a1, 860) + 1;
    FIELD_U32(a1, 860) = result;
  }
  return result;
}
