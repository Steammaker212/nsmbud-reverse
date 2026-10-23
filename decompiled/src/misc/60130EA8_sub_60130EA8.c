/* sub_60130EA8
 * address: 0x60130EA8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60130EA8(StageActor *a1)
{
  if ( (FIELD_U8(AreaRumbleMgr_instance, 56) & 2) == 0 )
    return CollisionActor__beforeExecute(a1);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 104))(a1);
  FIELD_U32(a1, 0x0).isDeleted = 1;
  return 1;
}
