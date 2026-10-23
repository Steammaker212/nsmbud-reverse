/* sub_602628B4
 * address: 0x602628B4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602628B4(_DWORD *a1)
{
  double v2; // d0
  int v3; // r4
  double v4; // kr00_8
  float v5; // s2
  float v6; // s20
  int v7; // r0
  int v8; // r4
  _BYTE *v9; // r5
  char v10; // r12
  ActorBuildInfo v12; // [sp+4h] [bp-54h] BYREF

  v2 = ((double (__fastcall *)(_DWORD *))*(_DWORD *)(*a1 + 708))(a1);
  v3 = a1[20];
  v4 = v2;
  v6 = v5;
  memset(&v12.settings2, 0, 40);
  v7 = v3 | 0x40000;
  v8 = 0;
  v12.settings1 = v7;
  v12.parentId = 0;
  v12.profile = Profile__get(0x2F9u);
  v12.position.x = *(float *)&v4;
  v12.position.y = *((float *)&v4 + 1) + -4.0;
  v12.position.z = v6;
  v12.field_1C = a1[40];
  v12.field_20 = 0;
  v9 = ActorMgr__create((void *)ActorMgr__instance, &v12, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613113700 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v9 )
  {
    v8 = (**(int (__fastcall ***)(_BYTE *, int *))v9)(v9, &StageActor_RTTI);
    if ( v8 )
      return v9;
  }
  return (_BYTE *)v8;
}
