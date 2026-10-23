/* sub_603CF0CC
 * address: 0x603CF0CC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603CF0CC(int *a1)
{
  float v2; // r6
  float v3; // s18
  float v4; // s20
  int v5; // r4
  float v6; // s16
  _BYTE *v7; // r5
  char v8; // r12
  ActorBuildInfo buildInfo; // [sp+4h] [bp-54h] BYREF

  v2 = *((float *)a1 + 28);
  v3 = FIELD_F32(dword_60CC6484, 104);
  v4 = FIELD_F32(dword_60CC6484, 112);
  v5 = 0;
  v6 = sub_60007178(dword_60C7B3F8);
  memset(&buildInfo.field_1C, 0, 16);
  buildInfo.settings1 = a1[5] & 0xF1000000 | ((unsigned int)a1[5] >> 4) & 0xF000 | (32 * a1[5]) & 0x2000000 | 0x110;
  buildInfo.settings2 = a1[6];
  buildInfo.profile = Profile__get(0x26Du);
  buildInfo.parentId = a1[2];
  buildInfo.position.x = (float)(v4 + v3) + 8.0;
  buildInfo.position.y = v2;
  buildInfo.position.z = v6;
  v7 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614606776 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v7 )
  {
    v5 = (**(int (__fastcall ***)(_BYTE *, int *))v7)(v7, &StageActor_RTTI);
    if ( v5 )
      return v7;
  }
  return (_BYTE *)v5;
}
