/* sub_600DA948
 * address: 0x600DA948   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DA948(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r6
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r5
  int ResArchiveById; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  signed int v14; // r0
  int v15; // r5

  if ( FIELD_U8(dword_60C9A1F0, 6559) != 1 )
  {
    v2 = FIELD_U32(a1, 7120);
    if ( v2 )
    {
      if ( **(_BYTE **)(v2 + 4) )
      {
        v4 = a1 + 7096;
        v3 = *(_DWORD **)(a1 + 7096);
        v5 = (int *)v3[3];
        v6 = v3[2];
        v7 = v3[17];
        if ( v6 > v7 )
          v5 += v7;
        v8 = *v5;
        ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
        SkeletalAnim_play(v8, ResArchiveById, FIELD_U32(a1, 7120));
        v10 = *(_DWORD *)(*(_DWORD *)v4 + 12);
        v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
          v10 += 4 * v11;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 1);
        v12 = *(_DWORD *)(*(_DWORD *)v4 + 12);
        v13 = *(_DWORD *)(*(_DWORD *)v4 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v13 )
          v12 += 4 * v13;
        *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
      }
    }
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  v14 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v14;
  v15 = byte_60AFE3F4[v14];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v15;
  FIELD_U32(a1, 7176) = 1;
  return 7176;
}
