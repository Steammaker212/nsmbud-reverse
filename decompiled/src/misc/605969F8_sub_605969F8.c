/* sub_605969F8
 * address: 0x605969F8   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_605969F8(int a1)
{
  float v2; // r9
  float *v3; // r5
  float v4; // s18
  float v5; // s16
  float v6; // s16
  ColliderBase *v7; // r6
  char v8; // r12
  float v9; // s18
  ColliderListNode *result; // r0
  char v11; // r12
  ColliderListNode *v12; // r5
  ActorBuildInfo v13[2]; // [sp+0h] [bp-68h] BYREF

  v2 = FIELD_F32(a1, 7808);
  v3 = (float *)(a1 + 7800);
  v4 = FIELD_F32(a1, 7800);
  v5 = FIELD_F32(a1, 7804);
  memset(v13, 0, 40);
  v13[0].parentId = FIELD_U32(a1, 8);
  v6 = v5 + 6.0;
  v13[0].profile = Profile__get(0x19Cu);
  v13[0].position.x = v4 + -8.0;
  v13[0].position.y = v6;
  v13[0].position.z = v2;
  v13[0].field_20 = FIELD_U8(a1, 86);
  v13[0].eventId1 = 0;
  v13[0].eventId2 = 0;
  v13[0].linkId = FIELD_U8(a1, 29);
  v13[0].field_28 = 0;
  v7 = (ColliderBase *)ActorMgr__create((void *)ActorMgr__instance, v13, 1);
  if ( v7 )
  {
    if ( ((unsigned int)&dword_60CAEC60 & ~(1616472776 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEC60) )
    {
      dword_60CAEC5C = (int)&off_60BD48EC;
      _cxa_guard_release(&dword_60CAEC60);
    }
    if ( (*(int (__fastcall **)(ColliderBase *, int *))FIELD_U32(v7, 0x0))(v7, &dword_60CAEC5C) == 1 )
    {
      if ( (FIELD_U8(a1, 20) & 0xF0) != 0 || FIELD_U8(a1, 30) )
        ColliderMgr_removeRelated1(ColliderMgr_instance, v7 + 18);
      else
        ColliderMgr_add(ColliderMgr_instance, v7 + 18);
    }
  }
  v9 = *v3;
  memset(&v13[0].settings2, 0, 36);
  v13[0].settings1 = 1;
  v13[0].parentId = FIELD_U32(a1, 8);
  v13[0].profile = Profile__get(0x19Cu);
  v13[0].position.x = v9 + 8.0;
  v13[0].position.y = v6;
  v13[0].position.z = v2;
  v13[0].field_20 = FIELD_U8(a1, 86);
  v13[0].eventId1 = 0;
  v13[0].eventId2 = 0;
  v13[0].linkId = FIELD_U8(a1, 29);
  v13[0].field_28 = 0;
  result = (ColliderListNode *)ActorMgr__create((void *)ActorMgr__instance, v13, 1);
  v12 = result;
  if ( result )
  {
    if ( ((unsigned int)&dword_60CAEC60 & ~(1616473064 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEC60) )
    {
      dword_60CAEC5C = (int)&off_60BD48EC;
      _cxa_guard_release(&dword_60CAEC60);
    }
    result = (ColliderListNode *)((int (__fastcall *)(ColliderListNode *, int *))FIELD_U32(v12, 0x0))(
                                   v12,
                                   &dword_60CAEC5C);
    if ( result == (ColliderListNode *)1 )
    {
      if ( (FIELD_U8(a1, 20) & 0xF0) != 0 || FIELD_U8(a1, 30) )
        return ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)&v12[510]);
      else
        return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)&v12[510]);
    }
  }
  return result;
}
