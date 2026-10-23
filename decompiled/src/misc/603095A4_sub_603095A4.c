/* sub_603095A4
 * address: 0x603095A4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603095A4(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C93028 + 8))() )
    v4 = 347;
  else
    v4 = 358;
  return EffectData_create(v4, (Vec3 *)(a1 + 6516), 0, 0);
}
