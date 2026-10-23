/* SE_VOC_LAR_INTO_WATERPILLAR_ref
 * address: 0x600D728C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_VOC_LAR_INTO_WATERPILLAR_ref(int a1)
{
  _DWORD *v2; // r5
  int v3; // r7
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  sub_608134CC(a1 + 6332, "SE_VOC_LAR_INTO_WATERPILLAR", FIELD_S16(a1, 6640), 0);
  v3 = a1 + 7096;
  v2 = *(_DWORD **)(a1 + 7096);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "swim";
  sub_60421938(v2, ResArchiveById, (int)v9);
  v5 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
  v6 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1077936128;
  FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.1;
  FIELD_U32(a1, 104) = 0;
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
}
