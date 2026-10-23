/* sub_606F140C
 * address: 0x606F140C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606F140C(int a1, Vec3 *a2)
{
  _BYTE *v3; // r4
  char v4; // r12
  ActorBuildInfo v5; // [sp+0h] [bp-40h] BYREF

  memset(&v5.position, 0, 28);
  v5.parentId = 0;
  v5.settings1 = 0x10000000;
  v5.settings2 = 0;
  v5.profile = Profile__get(0x1D3u);
  v5.position = *a2;
  v3 = ActorMgr__create((void *)ActorMgr__instance, &v5, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1617892528 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 )
    (**(void (__fastcall ***)(_BYTE *, int *))v3)(v3, &StageActor_RTTI);
}
