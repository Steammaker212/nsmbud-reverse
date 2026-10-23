/* sub_606DC8A4
 * address: 0x606DC8A4   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DC8A4(int a1)
{
  int v2; // r5
  _BYTE *v3; // r6
  char v4; // r12
  ActorBuildInfo v6; // [sp+0h] [bp-40h] BYREF

  memset(&v6, 0, sizeof(v6));
  v6.profile = Profile__get(0x1D0u);
  v2 = 0;
  v6.parentId = FIELD_U32(a1, 8);
  v6.position = *(Vec3 *)(a1 + 108);
  v6.field_1C = FIELD_U32(a1, 160);
  v6.field_20 = 0;
  v3 = ActorMgr__create((void *)ActorMgr__instance, &v6, 0);
  if ( ((unsigned int)&dword_60C906C0 & ~(1617807664 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C906C0) )
  {
    dword_60C906BC = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C906C0);
  }
  if ( v3 )
  {
    v2 = (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C906BC);
    if ( v2 )
      v2 = (int)v3;
  }
  FIELD_U32(a1, 6580) = v2;
  return 6580;
}
