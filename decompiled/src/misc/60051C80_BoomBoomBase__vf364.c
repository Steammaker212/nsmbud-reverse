/* BoomBoomBase__vf364
 * address: 0x60051C80   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268BC
// 
// Overridden by: None
int __fastcall BoomBoomBase__vf364(StateActor *a1)
{
  _DWORD v3[5]; // [sp+0h] [bp-28h] BYREF
  char v4; // [sp+14h] [bp-14h]
  signed int v5; // [sp+18h] [bp-10h]
  char v6; // [sp+1Ch] [bp-Ch]

  v3[0] = 0;
  v3[1] = 1077936128;
  v3[2] = -1065353216;
  v3[3] = -1103101952;
  v3[4] = &stru_60C7F63C;
  v4 = -1;
  v5 = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
  v6 = -1;
  return sub_602A852C((int)&a1[1]._._._.heap, v3);
}
