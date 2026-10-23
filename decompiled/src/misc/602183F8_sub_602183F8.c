/* sub_602183F8
 * address: 0x602183F8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602183F8(int a1)
{
  StateMethodExecuter *result; // r0

  if ( FIELD_U8(a1, 534) )
  {
    FIELD_U8(a1, 534) = 0;
    EffectData_create(978, (Vec3 *)(a1 + 308), 0, 0);
  }
  result = (StateMethodExecuter *)FIELD_U8(a1, 532);
  if ( FIELD_U8(a1, 532) )
    return StateMgr__changeState((StateMgr *)(a1 + 288), &stru_60C8D344);
  return result;
}
