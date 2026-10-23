/* sub_605710B4
 * address: 0x605710B4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605710B4(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 7488));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CAE93C + 8))();
  if ( v3 != result )
    return EffectData_create(981, (Vec3 *)(a1 + 108), 0, 0);
  return result;
}
