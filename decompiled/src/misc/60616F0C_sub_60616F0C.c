/* sub_60616F0C
 * address: 0x60616F0C   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60616F0C(int a1)
{
  _BYTE *v2; // r4
  char v3; // r12
  _BYTE *v4; // r4
  char v5; // r12
  _BYTE *v6; // r4
  char v7; // r12
  ActorBuildInfo v8; // [sp+4h] [bp-44h] BYREF

  memset(&v8.settings2, 0, 36);
  v8.settings1 = FIELD_U32(a1, 20) & 0xF00000;
  v8.parentId = FIELD_U32(a1, 8);
  v8.profile = Profile__get(0x78u);
  v8.position = *(Vec3 *)(a1 + 108);
  v8.field_20 = 0;
  v8.eventId1 = 0;
  v8.eventId2 = 0;
  v8.field_28 = 0;
  v2 = ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616998320 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 )
    (**(void (__fastcall ***)(_BYTE *, int *))v2)(v2, &StageActor_RTTI);
  memset(&v8.settings2, 0, 40);
  v8.settings1 = FIELD_U32(a1, 20) & 0xF00000 | 0x10000000;
  v8.parentId = FIELD_U32(a1, 8);
  v8.profile = Profile__get(0x78u);
  v8.position = *(Vec3 *)(a1 + 108);
  v8.field_20 = 0;
  v8.eventId1 = 0;
  v8.eventId2 = 0;
  v8.field_28 = 0;
  v4 = ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616998548 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v4 )
    (**(void (__fastcall ***)(_BYTE *, int *))v4)(v4, &StageActor_RTTI);
  memset(&v8.settings2, 0, 40);
  v8.settings1 = FIELD_U32(a1, 20) & 0xF00000 | 0x20000000;
  v8.parentId = FIELD_U32(a1, 8);
  v8.profile = Profile__get(0x78u);
  v8.position = *(Vec3 *)(a1 + 108);
  v8.field_20 = 0;
  v8.eventId1 = 0;
  v8.eventId2 = 0;
  v8.field_28 = 0;
  v6 = ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616998776 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v6 )
    (**(void (__fastcall ***)(_BYTE *, int *))v6)(v6, &StageActor_RTTI);
}
