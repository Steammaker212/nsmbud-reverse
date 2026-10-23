/* sub_60596ED8
 * address: 0x60596ED8   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_60596ED8(int a1)
{
  float v2; // r6
  float v3; // r7
  float v4; // r5
  ColliderListNode *result; // r0
  char v6; // r12
  ColliderListNode *v7; // r5
  ActorBuildInfo v8; // [sp+4h] [bp-44h] BYREF

  v2 = FIELD_F32(a1, 7808);
  v3 = FIELD_F32(a1, 7804);
  v4 = FIELD_F32(a1, 7800);
  memset(&v8.settings2, 0, 36);
  v8.settings1 = FIELD_U32(a1, 20) & 0xFF00 | 0x20000;
  v8.parentId = FIELD_U32(a1, 8);
  v8.profile = Profile__get(0x159u);
  v8.position.x = v4;
  v8.position.y = v3;
  v8.position.z = v2;
  v8.field_20 = FIELD_U8(a1, 86);
  v8.eventId1 = 0;
  v8.eventId2 = 0;
  v8.field_28 = 0;
  result = (ColliderListNode *)ActorMgr__create((void *)ActorMgr__instance, &v8, 1);
  v7 = result;
  if ( result )
  {
    if ( ((unsigned int)&dword_60C83FB4 & ~(1616473996 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C83FB4) )
    {
      dword_60C83FB0 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C83FB4);
    }
    result = (ColliderListNode *)((int (__fastcall *)(ColliderListNode *, int *))FIELD_U32(v7, 0x0))(
                                   v7,
                                   &dword_60C83FB0);
    if ( result == (ColliderListNode *)1 )
    {
      if ( (FIELD_U8(a1, 20) & 0xF0) != 0 || FIELD_U8(a1, 30) )
        return ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)&v7[514].prev);
      else
        return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)&v7[514].prev);
    }
  }
  return result;
}
