/* sub_607EF794
 * address: 0x607EF794   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EF794(int a1)
{
  int v2; // r7
  _DWORD *v3; // r1
  _DWORD *v4; // r1
  int v5; // r5
  int v6; // r6
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int (**v12)(); // [sp+0h] [bp-28h] BYREF
  const char *v13; // [sp+4h] [bp-24h]

  v2 = dword_60CD0B40;
  v12 = &sead__SafeStringBase__vtable;
  v13 = "HelpMenuSceneBack2D";
  FIELD_U32(a1, 2292) = a1;
  FIELD_U32(a1, 2296) = sub_607EF984;
  FIELD_U32(a1, 2300) = 0;
  FIELD_U32(a1, 2288) = off_60C270D8;
  sead__SafeStringBase__operator_assign(a1 + 2268, (int)&v12);
  FIELD_U32(a1, 2276) = 1;
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_6095537C(*v3, 1, a1 + 2252);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "HelpMenuSceneFront2D";
  FIELD_U32(a1, 2360) = a1;
  FIELD_U32(a1, 2364) = sub_607EF990;
  FIELD_U32(a1, 2368) = 0;
  FIELD_U32(a1, 2356) = off_60C270D8;
  sead__SafeStringBase__operator_assign(a1 + 2336, (int)&v12);
  FIELD_U32(a1, 2344) = 1;
  v4 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v4 += 6;
  sub_6095537C(*v4, 1, a1 + 2320);
  v5 = a1 + 2476;
  sub_6090C9A0(a1 + 2476);
  FIELD_U32(a1, 2624) = 0;
  FIELD_U32(a1, 2628) = 1184645120;
  FIELD_U8(a1, 2480) = 1;
  v6 = a1 + 2388;
  sub_6090A7D4(a1 + 2388, (float *)(a1 + 2476));
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 2388) + 16))(a1 + 2388, a1 + 2392);
  v7 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v7 += 20;
  *(_DWORD *)(*(_DWORD *)v7 + 72) = v6;
  v8 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v8 += 20;
  *(_DWORD *)(*(_DWORD *)v8 + 76) = v5;
  v9 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v9 += 24;
  *(_DWORD *)(*(_DWORD *)v9 + 72) = v6;
  v10 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v10 += 24;
  *(_DWORD *)(*(_DWORD *)v10 + 76) = v5;
  return sub_604ECC44((_DWORD *)(a1 + 2648));
}
