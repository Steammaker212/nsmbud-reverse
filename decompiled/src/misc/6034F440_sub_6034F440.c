/* sub_6034F440
 * address: 0x6034F440   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6034F440(int a1)
{
  char v1; // r12
  unsigned __int8 *v3; // r4
  char v4; // r12
  float v6; // s16
  float v7; // r8
  char v8; // r6
  int v9; // r6
  float v10; // s16
  float v11; // r11
  ActorBuildInfo buildInfo; // [sp+4h] [bp-5Ch] BYREF

  v3 = *(unsigned __int8 **)(a1 + 56);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614083176 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 && (**(int (__fastcall ***)(unsigned __int8 *, int *))v3)(v3, &StageActor_RTTI) == 1 )
  {
    if ( ((unsigned int)&dword_60C94400 & ~(1614083292 << v4) & 1) == 0 )
    {
      if ( _cxa_guard_acquire(&dword_60C94400) )
      {
        dword_60C943FC = (int)&off_60BED0A0;
        _cxa_guard_release(&dword_60C94400);
      }
    }
    if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v3)(v3, &dword_60C943FC) == 1 )
      return sub_6033EDFC(v3, (float *)(a1 + 108));
  }
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_U8(a1, 87);
  memset(&buildInfo.settings2, 0, 40);
  v9 = ((v8 & 1) << 16) ^ 0x10000;
  buildInfo.settings1 = v9 | (FIELD_U8(a1, 6436) << 12) | 5;
  buildInfo.profile = Profile__get(0x1D3u);
  buildInfo.position.x = v6 + 9.0;
  buildInfo.position.y = v7;
  buildInfo.position.z = 1500.0;
  buildInfo.field_1C = FIELD_U32(a1, 160);
  buildInfo.field_20 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  v10 = FIELD_F32(a1, 108);
  v11 = FIELD_F32(a1, 112);
  memset(&buildInfo.settings2, 0, 40);
  buildInfo.settings1 = v9 | (FIELD_U8(a1, 6436) << 12) | 0x1000005;
  buildInfo.profile = Profile__get(0x1D3u);
  buildInfo.position.x = v10 + -9.0;
  buildInfo.position.y = v11;
  buildInfo.position.z = 1500.0;
  buildInfo.field_1C = FIELD_U32(a1, 160);
  buildInfo.field_20 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
}
