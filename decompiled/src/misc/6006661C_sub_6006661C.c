/* sub_6006661C
 * address: 0x6006661C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006661C(int a1)
{
  int v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  int v5; // r5
  int *v6; // r2
  unsigned int v7; // r3
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int *v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  int (**v16)(); // [sp+0h] [bp-18h] BYREF
  const char *v17; // [sp+4h] [bp-14h]

  sub_6006677C();
  v2 = dword_60C81284;
  FIELD_U32(a1, 144) = 1089470464;
  FIELD_U32(a1, 148) = 1089470464;
  FIELD_U32(a1, 152) = 1089470464;
  FIELD_U32(a1, 156) = v2;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C8121C);
  if ( (FIELD_U8(dword_60C99DD4, 848) & 2) != 0 )
  {
    v16 = &sead__SafeStringBase__vtable;
    v17 = "boss_shutter_peach";
    v3 = LoadResource(ResourceMgrRelated_instance, &v16);
    v5 = a1 + 6100;
    v4 = *(_DWORD **)(a1 + 6100);
    v6 = (int *)v4[3];
    v7 = v4[2];
    v8 = v4[17];
    if ( v7 > v8 )
      v6 += v8;
    v9 = *v6;
    v16 = &sead__SafeStringBase__vtable;
    v17 = "shutout2";
    SkeletalAnim_play(v9, v3, (int)&v16);
    v10 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v11 )
      v10 += 4 * v11;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
    v12 = *(int **)(*(_DWORD *)v5 + 12);
    v13 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v13 )
      v12 += v13;
    v14 = *v12;
    FIELD_U32(v14, 20) = *(_DWORD *)(*v12 + 8);
    FIELD_U32(v14, 28) |= 2u;
  }
  sub_600668C4((float *)a1);
  return 1;
}
