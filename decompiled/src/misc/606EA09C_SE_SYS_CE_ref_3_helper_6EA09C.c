/* SE_SYS_CE_ref_3_helper_6EA09C
 * address: 0x606EA09C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_SYS_CE_ref_3_helper_6EA09C(int a1, float *a2, int a3)
{
  float v3; // r6
  float v4; // r7
  _BYTE *v6; // r4
  char v7; // r12
  ActorBuildInfo v8; // [sp+4h] [bp-44h] BYREF

  v3 = *a2;
  v4 = a2[1];
  memset(&v8.settings2, 0, 36);
  v8.settings1 = a3 | 0x30000;
  v8.profile = Profile__get(0xAu);
  v8.position.x = v3;
  v8.position.y = v4;
  v8.position.z = 0.0;
  v8.field_20 = 0;
  v8.eventId1 = 0;
  v8.eventId2 = 0;
  v8.field_28 = 0;
  v6 = ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1617862944 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v6 )
    (**(void (__fastcall ***)(_BYTE *, int *))v6)(v6, &StageActor_RTTI);
}
