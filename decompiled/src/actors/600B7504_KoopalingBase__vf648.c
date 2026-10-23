/* KoopalingBase__vf648
 * address: 0x600B7504   size: 292   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf648(int a1)
{
  int v2; // r0
  int *v3; // r7
  _DWORD *v4; // r0
  int v5; // r6
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r5
  int ResArchiveById; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  signed int v15; // r0
  int v16; // r5

  v3 = (int *)(a1 + 7120);
  v2 = FIELD_U32(a1, 7120);
  if ( v2 && **(_BYTE **)(v2 + 4) )
  {
    v5 = a1 + 7096;
    v4 = *(_DWORD **)(a1 + 7096);
    v6 = (int *)v4[3];
    v7 = v4[2];
    v8 = v4[17];
    if ( v7 > v8 )
      v6 += v8;
    v9 = *v6;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    SkeletalAnim_play(v9, ResArchiveById, *v3);
    v11 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v12 )
      v11 += 4 * v12;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
    v13 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v14 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v14 )
      v13 += 4 * v14;
    *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  v15 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v15;
  v16 = byte_60AFE3F4[v15];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v16;
  FIELD_U32(a1, 7176) = 1;
  return 7176;
}
