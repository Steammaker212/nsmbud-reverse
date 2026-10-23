/* sub_603F564C
 * address: 0x603F564C   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F564C(int a1)
{
  int result; // r0
  int v3; // r3
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r1
  int (__fastcall ***v7)(_DWORD, int *); // r5
  char v8; // r12
  int v9; // r7
  int v10; // r5
  int i; // r9
  unsigned int v12; // r1
  int (__fastcall ***v13)(_DWORD, int *); // r6
  char v14; // r12
  int v15; // r1
  __int16 v16; // r2
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf
  bool v20; // zf
  bool v21; // cc
  int v22; // r1
  ActorBuildInfo v23; // [sp+10h] [bp-50h] BYREF

  result = sub_6040E274(LevelInfo_instance);
  if ( result != 1 )
    return result;
  result = dword_60C9CF0C;
  if ( FIELD_S8(dword_60C9CF0C, 1404) < 0 )
    return result;
  result = FIELD_U8(dword_60C9CF0C, 1406);
  if ( FIELD_U8(dword_60C9CF0C, 1406) )
    return result;
  result = sub_6078A030(PlayerMgr_instance);
  if ( result == 1 )
    return result;
  result = FIELD_U8(EnemyCounterMaybe_instance, 20);
  if ( FIELD_U8(EnemyCounterMaybe_instance, 20) )
    return result;
  if ( !FIELD_U8(a1, 28) )
    return sub_603F5A08(a1);
  v4 = FIELD_U32(a1, 16);
  v5 = v4 + 1;
  if ( v4 > 1798 )
    v5 = 1800;
  FIELD_U32(a1, 16) = v5;
  v6 = FIELD_U32(a1, 36);
  if ( !v6 )
    goto LABEL_17;
  v7 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614763820 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v7 || (result = (**v7)(v7, &StageActor_RTTI)) == 0 )
  {
    FIELD_U32(a1, 36) = 0;
LABEL_17:
    v9 = a1 + 40;
    v10 = 0;
    for ( i = 0; i != 5; ++i )
    {
      v12 = *(_DWORD *)(v9 + 4 * i);
      result = 0;
      if ( v12 )
      {
        v13 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v12);
        if ( ((unsigned int)&dword_60C7B364 & ~(1614764060 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v13 && (**v13)(v13, &StageActor_RTTI) == 1 )
        {
          result = *(_DWORD *)(v9 + 4 * i);
        }
        else
        {
          result = 0;
          *(_DWORD *)(v9 + 4 * i) = 0;
        }
      }
      if ( result )
        ++v10;
    }
    if ( v10 != 5 )
    {
      v15 = PlayerMgr_instance;
      result = 0;
      v16 = FIELD_U16(PlayerMgr_instance, 66);
      v17 = (v16 & 1) == 0;
      if ( (v16 & 1) != 0 )
      {
        v3 = FIELD_U32(PlayerMgr_instance, 32);
        v17 = v3 == 0;
      }
      if ( !v17 )
      {
        v3 = FIELD_U32(v3, 1320);
        result = v3 == 0;
      }
      v18 = (v16 & 2) == 0;
      if ( (v16 & 2) != 0 )
      {
        v3 = FIELD_U32(PlayerMgr_instance, 36);
        v18 = v3 == 0;
      }
      if ( !v18 )
      {
        v3 = FIELD_U32(v3, 1320);
        if ( !v3 )
          ++result;
      }
      v19 = (v16 & 4) == 0;
      if ( (v16 & 4) != 0 )
      {
        v3 = FIELD_U32(PlayerMgr_instance, 40);
        v19 = v3 == 0;
      }
      if ( !v19 && !FIELD_U32(v3, 1320) )
        ++result;
      v20 = (v16 & 8) == 0;
      if ( (v16 & 8) != 0 )
      {
        v15 = FIELD_U32(PlayerMgr_instance, 44);
        v20 = v15 == 0;
      }
      if ( !v20 && !FIELD_U32(v15, 1320) )
        ++result;
      if ( result )
      {
        v17 = result == 2;
        v21 = result <= 2;
        result = FIELD_U32(a1, 16);
        v22 = 1200;
        if ( v17 )
          v22 = 900;
        if ( !v21 )
          v22 = 600;
        if ( result >= v22 )
        {
          memset(&v23.settings2, 0, 40);
          v23.settings1 = 256;
          v23.profile = Profile__get(0x1B9u);
          v23.field_20 = 0;
          result = (int)ActorMgr__create((void *)ActorMgr__instance, &v23, 0);
          if ( result )
          {
            result = FIELD_U32(result, 8);
            FIELD_U32(a1, 36) = result;
            FIELD_U8(a1, 28) = 0;
          }
        }
      }
    }
  }
  return result;
}
