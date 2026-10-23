/* sub_603CD8AC
 * address: 0x603CD8AC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void sub_603CD8AC()
{
  float v0; // s18
  float v1; // s20
  float v2; // s22
  float v3; // s16
  _BYTE *v4; // r4
  char v5; // r12
  ActorBuildInfo v6[2]; // [sp+0h] [bp-60h] BYREF

  v0 = FIELD_F32(dword_60CC6484, 112);
  v1 = FIELD_F32(dword_60CC6484, 108);
  v2 = FIELD_F32(dword_60CC6484, 124);
  v3 = sub_60007178(dword_60C7B3F8);
  memset(&v6[0].field_1C, 0, 16);
  v6[0].parentId = 0;
  v6[0].settings1 = 268435457;
  v6[0].settings2 = 0;
  v6[0].profile = Profile__get(0x2A2u);
  v6[0].position.x = v0 + -48.0;
  v6[0].position.y = (float)(v2 - v1) + 48.0;
  v6[0].position.z = v3;
  v4 = ActorMgr__create((void *)ActorMgr__instance, v6, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614600580 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v4 )
    (**(void (__fastcall ***)(_BYTE *, int *))v4)(v4, &StageActor_RTTI);
}
