/* sub_606E9F24
 * address: 0x606E9F24   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_606E9F24(int a1, int *a2, int a3, int a4)
{
  int v6; // r1
  float *v7; // r6
  int v8; // r1
  int v9; // r0
  int v10; // r7
  float v11; // r6
  int v12; // r4
  _BYTE *v13; // r5
  char v14; // r12
  ActorBuildInfo v16; // [sp+4h] [bp-44h] BYREF

  if ( a4 )
  {
    v7 = (float *)(a2 + 1);
    v6 = a2[1];
    v16.settings1 = *a2;
    v16.settings2 = v6;
    v16.parentId = 1166843904;
    v8 = FIELD_U8(a1, 148);
    v9 = 1116;
    if ( v8 )
      v9 = 1117;
    EffectData_create(v9, (Vec3 *)&v16, 0, 0);
  }
  else
  {
    v7 = (float *)(a2 + 1);
  }
  v10 = *a2;
  v11 = *v7;
  memset(&v16.settings2, 0, 36);
  v16.settings1 = a3;
  v16.profile = Profile__get(0x1A7u);
  LODWORD(v16.position.x) = v10;
  v16.position.y = v11;
  v12 = 0;
  v16.position.z = 550.0;
  v16.field_20 = 0;
  v16.eventId1 = 0;
  v16.eventId2 = 0;
  v16.field_28 = 0;
  v13 = ActorMgr__create((void *)ActorMgr__instance, &v16, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1617862664 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v13 )
  {
    v12 = (**(int (__fastcall ***)(_BYTE *, int *))v13)(v13, &StageActor_RTTI);
    if ( v12 )
      return v13;
  }
  return (_BYTE *)v12;
}
