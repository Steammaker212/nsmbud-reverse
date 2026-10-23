/* sub_60304738
 * address: 0x60304738   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60304738(int a1)
{
  _BYTE *v2; // r5
  char v3; // r12
  char v4; // r12
  ActorBuildInfo v5; // [sp+0h] [bp-40h] BYREF

  memset(&v5, 0, 40);
  v5.profile = Profile__get(0x19Au);
  v5.position = *(Vec3 *)(a1 + 108);
  v5.field_20 = 0;
  v5.eventId1 = 0;
  v5.eventId2 = 0;
  v5.field_28 = 0;
  v2 = ActorMgr__create((void *)ActorMgr__instance, &v5, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613776832 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (**(int (__fastcall ***)(_BYTE *, int *))v2)(v2, &StageActor_RTTI) == 1 )
  {
    if ( ((unsigned int)&dword_60C92F0C & ~(1613776948 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F0C) )
    {
      dword_60C92F08 = (int)&off_60BD48EC;
      _cxa_guard_release(&dword_60C92F0C);
    }
    if ( (**(int (__fastcall ***)(_BYTE *, int *))v2)(v2, &dword_60C92F08) == 1 )
    {
      *((_DWORD *)v2 + 1897) = FIELD_U32(a1, 8);
      v2[7592] = 1;
      FIELD_U32(a1, 6988) = *((_DWORD *)v2 + 2);
    }
  }
}
