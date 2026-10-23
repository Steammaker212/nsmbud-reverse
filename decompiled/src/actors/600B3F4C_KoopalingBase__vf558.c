/* KoopalingBase__vf558
 * address: 0x600B3F4C   size: 212   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall KoopalingBase__vf558(int a1)
{
  int *v2; // r7
  _DWORD *v3; // r5
  int v4; // r6
  int ResArchiveById; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  signed int result; // r0

  v2 = (int *)(a1 + 7108);
  if ( **(_BYTE **)(FIELD_U32(a1, 7108) + 4) )
  {
    v4 = a1 + 7096;
    v3 = *(_DWORD **)(a1 + 7096);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    sub_60421938(v3, ResArchiveById, *v2);
    v6 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v7 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
      v8 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = FIELD_U32(a1, 7760);
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  result = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = result;
  return result;
}
