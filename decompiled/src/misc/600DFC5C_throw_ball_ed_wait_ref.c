/* throw_ball_ed_wait_ref
 * address: 0x600DFC5C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall throw_ball_ed_wait_ref(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r4
  char v3; // r12
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  KoopalingBase__vf5C4(a1);
  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8120));
  if ( ((unsigned int)&dword_60C84B4C & ~(1611529376 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
  {
    dword_60C84B48 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B4C);
  }
  if ( v2 )
  {
    if ( (**v2)(v2, &dword_60C84B48) == 1 )
    {
      v4[0] = &sead__SafeStringBase__vtable;
      v4[1] = "throw_ball_ed_wait";
      sub_600E36A4(v2, v4, 1, 3.0);
    }
  }
}
