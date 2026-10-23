/* sub_60218650
 * address: 0x60218650   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60218650(int a1)
{
  int v2; // r0

  v2 = **(_DWORD **)(FIELD_U32(a1, 304) + 12);
  if ( FIELD_F32(v2, 20) > 10.0 )
    FIELD_U8(a1, 533) = 1;
  if ( (FIELD_U8(v2, 28) & 0x20) != 0 )
    StateMgr__changeState((StateMgr *)(a1 + 288), &stru_60C8D368);
  return EffectWrapper_update((EffectWrapper *)(a1 + 428), 980, (Vec3 *)(a1 + 308), 0, 0);
}
