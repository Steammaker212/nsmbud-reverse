/* sub_60582BA8
 * address: 0x60582BA8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60582BA8(int a1, unsigned __int8 *a2, Vec3 *a3, int a4, int a5, int a6)
{
  int v7; // r4
  _BYTE *v9; // r5
  char v10; // r12
  ActorBuildInfo v12; // [sp+0h] [bp-48h] BYREF

  v7 = 0;
  memset(&v12.field_20, 0, 12);
  memset(&v12.position, 0, 16);
  v12.profile = 0;
  v12.parentId = 0;
  v12.settings1 = a4 | (16 * a5) | (a6 << 24) | (a2[18] << 8) | (a2[19] << 12) | (a2[20] << 16) | (a2[21] << 20);
  v12.settings2 = a2[22] << 12;
  v12.profile = Profile__get(0x191u);
  v12.position = *a3;
  *(_WORD *)&v12.field_20 = a2[17];
  v9 = ActorMgr__create((void *)ActorMgr__instance, &v12, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616391304 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v9 )
  {
    v7 = (**(int (__fastcall ***)(_BYTE *, int *))v9)(v9, &StageActor_RTTI);
    if ( v7 )
      return v9;
  }
  return (_BYTE *)v7;
}
