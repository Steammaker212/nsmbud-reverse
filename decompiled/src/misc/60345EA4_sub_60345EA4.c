/* sub_60345EA4
 * address: 0x60345EA4   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60345EA4(int a1)
{
  int v1; // r6
  _BYTE *v3; // r5
  char v4; // r12
  int result; // r0
  ActorBuildInfo v6; // [sp+0h] [bp-40h] BYREF

  v1 = 0;
  memset(&v6.position, 0, 28);
  v6.profile = 0;
  v6.parentId = 0;
  v6.settings1 = FIELD_U32(a1, 80) & 1 ^ 0x11;
  v6.settings2 = 0;
  v6.profile = Profile__get(0x26Au);
  v6.position = *(Vec3 *)(a1 + 7040);
  v3 = ActorMgr__create((void *)ActorMgr__instance, &v6, 0);
  if ( !v3 )
  {
LABEL_9:
    FIELD_U32(a1, 7116) = v1;
    return 7116;
  }
  if ( ((unsigned int)&dword_60C881F4 & ~(1614045024 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C881F4) )
  {
    dword_60C881F0 = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C881F4);
  }
  result = (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C881F0);
  if ( result == 1 )
  {
    if ( !*((_DWORD *)v3 + 2968) )
      *((_DWORD *)v3 + 2968) = FIELD_U32(a1, 8);
    v1 = *((_DWORD *)v3 + 2);
    goto LABEL_9;
  }
  return result;
}
