/* sub_60596D08
 * address: 0x60596D08   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60596D08(int a1)
{
  float v2; // r6
  float v3; // r7
  float v4; // r5
  ActiveColliderMgr *result; // r0
  char v6; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r5
  ActiveCollider *v8; // r5
  ActiveColliderMgr *v9; // r4
  ActiveCollider *v10; // r5
  ActiveColliderMgr *v11; // r4
  ActorBuildInfo v12; // [sp+4h] [bp-44h] BYREF

  v2 = FIELD_F32(a1, 7808);
  v3 = FIELD_F32(a1, 7804);
  v4 = FIELD_F32(a1, 7800);
  memset(&v12.settings2, 0, 36);
  v12.settings1 = 150994944;
  v12.parentId = FIELD_U32(a1, 8);
  v12.profile = Profile__get(0x255u);
  v12.position.x = v4;
  v12.position.y = v3;
  v12.position.z = v2;
  v12.field_20 = FIELD_U8(a1, 86);
  v12.eventId1 = 0;
  v12.eventId2 = 0;
  v12.field_28 = 0;
  result = (ActiveColliderMgr *)ActorMgr__create((void *)ActorMgr__instance, &v12, 1);
  v7 = (int (__fastcall ***)(_DWORD, int *))result;
  if ( result )
  {
    if ( ((unsigned int)&dword_60C7B418 & ~(1616473524 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
    {
      dword_60C7B414 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B418);
    }
    result = (ActiveColliderMgr *)(**v7)(v7, &dword_60C7B414);
    if ( result == (ActiveColliderMgr *)1 )
    {
      if ( (FIELD_U8(a1, 20) & 0xF0) != 0 || FIELD_U8(a1, 30) )
      {
        v8 = (ActiveCollider *)(v7 + 47);
        v9 = ActiveColliderMgr_instance;
        ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v8);
        ActiveColldierMgr_removeFromCreateList(v9, v8);
        return ActiveColldierMgr_removeFromList3(v9, (int)v8);
      }
      else
      {
        v10 = (ActiveCollider *)(v7 + 47);
        v11 = ActiveColliderMgr_instance;
        result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v10);
        if ( !result )
        {
          result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v11, v10);
          if ( !result )
            return ActiveColliderMgr_addToCreateList(v11, v10);
        }
      }
    }
  }
  return result;
}
