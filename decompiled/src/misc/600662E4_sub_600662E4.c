/* sub_600662E4
 * address: 0x600662E4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600662E4(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  StateMethodExecuter *result; // r0

  v2 = a1 + 6100;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6100));
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  result = (StateMethodExecuter *)*(unsigned __int8 *)(*(_DWORD *)v3 + 28);
  if ( ((unsigned __int8)result & 0x20) != 0 )
  {
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 3, 0, 0);
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C8121C);
  }
  return result;
}
