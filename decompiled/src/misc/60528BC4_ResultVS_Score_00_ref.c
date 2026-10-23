/* ResultVS_Score_00_ref
 * address: 0x60528BC4   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ResultVS_Score_00_ref(_DWORD *a1)
{
  unsigned int v2; // r5
  int *v3; // r7
  unsigned int v4; // r4
  unsigned int v5; // r0
  int v6; // r6
  int v7; // r0
  unsigned int v8; // r7
  unsigned int v9; // r1
  unsigned int v10; // r3
  int v11; // r3
  int v12; // r4
  int v13; // r0
  int v14; // r5
  int v15; // r6
  int v16; // r0
  int v17; // r0
  int v18; // r4
  int v19; // r5
  int v20; // r0
  int (**v22)(); // [sp+0h] [bp-28h] BYREF
  const char *v23; // [sp+4h] [bp-24h]

  v2 = 0;
  sub_60473DE4(a1 + 11, 9u, &dword_60CA9994, 0);
  v3 = a1 + 1155;
  if ( (int)a1[1155] >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = 0;
      if ( v4 < 4 )
        v5 = v4;
      StateMgr__changeState((StateMgr *)(a1[v5 + 1038] + 3100), (StateBase *)&unk_60CAA2C4);
      ++v4;
    }
    while ( (int)v4 < *v3 );
  }
  v6 = 99999;
  *(_BYTE *)(a1[989] + 64) |= 1u;
  *(_BYTE *)(a1[991] + 64) |= 1u;
  v7 = *v3;
  v8 = 0;
  if ( v7 >= 1 )
  {
    v9 = 0;
    v8 = 0;
    v2 = 0;
    do
    {
      v10 = 0;
      if ( v9 < 4 )
        v10 = v9;
      ++v9;
      v11 = a1[v10 + 1038];
      v12 = FIELD_U32(v11, 3132);
      if ( *(_DWORD *)(FIELD_U32(v11, 3140) + 20) )
        v8 += v12;
      else
        v2 += v12;
    }
    while ( (int)v9 < v7 );
  }
  if ( v2 >= 0x1869F )
    v2 = 99999;
  v22 = &sead__SafeStringBase__vtable;
  v23 = "ResultVS_Score_00";
  sub_6047E0EC(&v22, a1[1027], 1, v2);
  v22 = &sead__SafeStringBase__vtable;
  v23 = "ResultVS_Score_00";
  if ( v8 < 0x1869F )
    v6 = v8;
  sub_6047E0EC(&v22, a1[1028], 1, v6);
  v13 = a1[1008];
  FIELD_U32(v13, 28) = 0;
  FIELD_U8(v13, 64) |= 0x10u;
  v14 = a1[1008];
  v15 = a1[dword_60B03968[a1[1171]] + 943];
  v16 = FIELD_U32(v14, 12);
  if ( v16 )
    sub_60858A34(v16);
  sub_608589FC(v15, v14);
  v17 = a1[1009];
  FIELD_U32(v17, 28) = 0;
  FIELD_U8(v17, 64) |= 0x10u;
  v18 = a1[1009];
  v19 = a1[dword_60B0397C[a1[1171]] + 943];
  v20 = FIELD_U32(v18, 12);
  if ( v20 )
    sub_60858A34(v20);
  return sub_608589FC(v19, v18);
}
