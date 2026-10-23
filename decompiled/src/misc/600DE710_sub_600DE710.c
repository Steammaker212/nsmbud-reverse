/* sub_600DE710
 * address: 0x600DE710   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DE710(int a1)
{
  _BYTE *v2; // r6
  _BYTE *v3; // r5
  char v4; // r12
  ActorBuildInfo v6; // [sp+0h] [bp-40h] BYREF

  memset(&v6, 0, sizeof(v6));
  v6.parentId = FIELD_U32(a1, 8);
  v6.profile = Profile__get(0x160u);
  v2 = 0;
  v6.position = *(Vec3 *)(a1 + 108);
  v6.field_1C = FIELD_U32(a1, 80);
  v6.field_20 = FIELD_U8(a1, 86);
  v3 = ActorMgr__create((void *)ActorMgr__instance, &v6, 0);
  if ( ((unsigned int)&dword_60C84B5C & ~(1611524000 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B5C) )
  {
    dword_60C84B58 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B5C);
  }
  if ( v3 )
  {
    v2 = v3;
    if ( !(**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C84B58) )
      v2 = 0;
  }
  FIELD_F32(a1, 8128) = sub_600E4E3C(v2);
  return *((_DWORD *)v3 + 2);
}
