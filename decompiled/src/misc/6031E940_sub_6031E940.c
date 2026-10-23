/* sub_6031E940
 * address: 0x6031E940   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031E940(float *a1)
{
  float v2; // s0
  int v3; // r4
  _BYTE *v4; // r5
  char v5; // r12
  ActorBuildInfo v7; // [sp+4h] [bp-3Ch] BYREF

  memset(&v7.settings2, 0, 40);
  v7.profile = Profile__get(0x22Fu);
  v7.position.x = a1[27];
  v7.position.y = a1[28];
  v2 = a1[29];
  v3 = 0;
  v7.position.z = v2 + -16.0;
  v7.settings1 = 0;
  v4 = ActorMgr__create((void *)ActorMgr__instance, &v7, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613883844 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v4 && (**(int (__fastcall ***)(_BYTE *, int *))v4)(v4, &StageActor_RTTI) == 1 )
    return *((_DWORD *)v4 + 2);
  return v3;
}
