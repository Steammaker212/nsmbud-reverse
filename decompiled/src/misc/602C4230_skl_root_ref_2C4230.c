/* skl_root_ref_2C4230
 * address: 0x602C4230   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_2C4230(int a1)
{
  float *v2; // r4
  int *v3; // t1
  int v4; // r0
  int (__fastcall *v5)(int, _DWORD *); // r2
  char v6; // r0
  float v7; // s0
  _DWORD v9[14]; // [sp+0h] [bp-38h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( !FIELD_U8(a1, 6324) )
    StageActor__cullCheck((StageActor *)a1, 0);
  ActorScaler_execute((ActorScaler *)(a1 + 6340));
  sub_602A33AC((_BYTE *)a1);
  v3 = *(int **)(a1 + 6304);
  v2 = (float *)(a1 + 6304);
  v4 = *v3;
  v5 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v3 + 84);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "skl_root";
  v6 = v5(v4, v9);
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *))(***(_DWORD ***)v2 + 108))(**(_DWORD **)v2, v6, v9);
  v7 = *(float *)&v9[7] - *(v2 - 1548);
  *(v2 - 1499) = v7;
  v2[829] = v7;
  return 1;
}
