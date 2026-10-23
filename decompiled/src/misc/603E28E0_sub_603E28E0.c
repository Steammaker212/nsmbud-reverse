/* sub_603E28E0
 * address: 0x603E28E0   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E28E0(int a1)
{
  signed int v2; // r0
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int *v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  _DWORD v13[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 6324) = 1008981770;
  FIELD_U32(a1, 6320) = 966609234;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = dword_60AF2158[v2];
  FIELD_U32(a1, 104) = 1008981770;
  FIELD_U8(a1, 8236) = 1;
  v3 = a1 + 7560;
  sub_60421938(*(_DWORD **)(a1 + 7560), FIELD_U32(a1, 7556), (int)&dword_60C995AC);
  v4 = *(_DWORD *)(FIELD_U32(a1, 7560) + 12);
  v5 = *(_DWORD *)(FIELD_U32(a1, 7560) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 7560) + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
  v6 = *(int **)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += v7;
  v8 = *v6;
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
  FIELD_U8(a1, 8237) = 2;
  v11 = FIELD_U32(a1, 112);
  v13[0] = FIELD_U32(a1, 108);
  v13[1] = v11;
  return TileMgr_splashRelated(TileMgr_instance, v13, 30);
}
