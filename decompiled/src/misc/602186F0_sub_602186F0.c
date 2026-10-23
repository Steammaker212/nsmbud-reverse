/* sub_602186F0
 * address: 0x602186F0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602186F0(int a1)
{
  if ( !FIELD_U8(a1, 532) && (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 304) + 12) + 28) & 4) != 0 )
    StateMgr__changeState((StateMgr *)(a1 + 288), &stru_60C8D38C);
  return EffectWrapper_update((EffectWrapper *)(a1 + 428), 980, (Vec3 *)(a1 + 308), 0, 0);
}
