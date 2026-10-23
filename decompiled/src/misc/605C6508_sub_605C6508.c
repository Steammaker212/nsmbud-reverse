/* sub_605C6508
 * address: 0x605C6508   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C6508(int a1, int a2, int a3)
{
  int v5; // r0
  float v6; // s0
  float v7; // s2
  float *v8; // r1
  float *v9; // r0
  int v10; // r7
  _DWORD *v11; // r12
  int *v12; // lr
  int *v13; // r3
  int *v14; // r5
  int v15; // r1
  int v16; // r2
  int result; // r0
  int v18; // r0
  bool v19; // vf
  int v20; // r1
  int v21; // r0
  int v22; // r0
  float v24; // [sp+4h] [bp-2Ch]
  float v25; // [sp+8h] [bp-28h]
  int v26; // [sp+Ch] [bp-24h] BYREF

  v26 = 0;
  v5 = sub_605DBDAC(a1);
  if ( v5 )
  {
    v6 = FIELD_F32(v5, 108);
    v7 = FIELD_F32(v5, 584);
    v8 = (float *)(v5 + 588);
    v9 = (float *)(v5 + 112);
  }
  else
  {
    v6 = FIELD_F32(a1, 108);
    v7 = FIELD_F32(a1, 584);
    v8 = (float *)(a1 + 588);
    v9 = (float *)(a1 + 112);
  }
  v24 = v6 - v7;
  v25 = *v9 - *v8;
  ((void (__fastcall *)(int, int *, int))loc_605C5FA8)(a1, &v26, a1 + 108);
  if ( a3 < 1 )
    return 0;
  v10 = v26;
  v11 = (_DWORD *)(a1 + 8076);
  v12 = (int *)(a1 + 8068);
  v13 = (int *)(a1 + 8072);
  v14 = (int *)(a1 + 8080);
  do
  {
    v15 = *v13;
    v16 = *v14;
    result = 0;
    if ( *v14 < *v13 )
    {
      *v14 = v16 + 1;
      v18 = *v11 + v16;
      v19 = __OFSUB__(v18, v15);
      v20 = v18 - v15;
      if ( v20 < 0 != v19 )
        v20 = *v11 + v16;
      v21 = *v12;
      *(_DWORD *)(*v12 + 16 * v20) = a2;
      v22 = v21 + 16 * v20;
      FIELD_F32(v22, 4) = v24;
      FIELD_F32(v22, 8) = v25;
      FIELD_U32(v22, 12) = v10;
      result = 1;
    }
    --a3;
  }
  while ( a3 );
  return result;
}
