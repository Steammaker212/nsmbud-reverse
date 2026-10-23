/* sub_60174C98
 * address: 0x60174C98   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60174C98(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5
  float v9; // r1
  float v10; // r2
  float v11; // r1
  float v12; // r2
  int (**v14)(); // [sp+8h] [bp-28h] BYREF
  const char *v15; // [sp+Ch] [bp-24h]
  Vec3 v16; // [sp+10h] [bp-20h] BYREF

  v2 = (StateMgr *)(a1 + 284);
  FIELD_U8(a1, 586) = 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C88D58 + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60C88CD8 + 8))() )
      FIELD_F32(a1, 84) = FIELD_F32(a1, 496) + 80.0;
  }
  if ( FIELD_U8(a1, 629) )
  {
    FIELD_U8(a1, 587) = 0;
    v7 = StateMgr__getCurrentState(v2);
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
    if ( v8 == (*(int (**)(void))(dword_60C88CD8 + 8))() )
    {
      v9 = FIELD_F32(a1, 84);
      v10 = FIELD_F32(a1, 88);
      v16.x = FIELD_F32(a1, 80);
      v16.y = v9;
      v16.z = v10;
      EffectData_create(1137, &v16, 0, 0);
      if ( sub_601E4F7C(dword_60C8B13C, 199) == 1 )
      {
        v14 = &sead__SafeStringBase__vtable;
        v15 = "K276";
        sub_601A02B0(dword_60C89E00, &v16, 6, 0, &v14);
        sub_601E4C88(dword_60C8B13C, 199, &v16, 1);
      }
    }
  }
  else
  {
    FIELD_U8(a1, 587) = 1;
    v11 = FIELD_F32(a1, 84);
    v12 = FIELD_F32(a1, 88);
    v16.x = FIELD_F32(a1, 80);
    v16.y = v11;
    v16.z = v12;
    EffectData_create(1137, &v16, 0, 0);
    if ( sub_601E4F7C(dword_60C8B13C, 199) == 1 )
    {
      v14 = &sead__SafeStringBase__vtable;
      v15 = "K276";
      sub_601A02B0(dword_60C89E00, &v16, 6, 0, &v14);
      sub_601E4C88(dword_60C8B13C, 199, &v16, 1);
    }
    FIELD_U32(a1, 608) = 25;
    FIELD_U32(a1, 612) = 1065353216;
    FIELD_U32(a1, 616) = 1032805417;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = 0;
    FIELD_U32(a1, 596) = 0;
    FIELD_U32(a1, 600) = 0;
    FIELD_U32(a1, 604) = 0;
  }
  FIELD_U32(a1, 620) = 210;
  return 210;
}
