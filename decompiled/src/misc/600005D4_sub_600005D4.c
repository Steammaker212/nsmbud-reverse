/* sub_600005D4
 * address: 0x600005D4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600005D4(StageActor *this, signed int *smthOut)
{
  int v2; // r2
  signed int result; // r0
  signed int v4; // r2

  v2 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v2 && FIELD_U32(v2, 11408) == FIELD_U32(this, 0x0).id
    || (v2 = FIELD_U32(PlayerMgr_instance, 36)) != 0 && FIELD_U32(v2, 11408) == FIELD_U32(this, 0x0).id
    || (v2 = FIELD_U32(PlayerMgr_instance, 40)) != 0 && FIELD_U32(v2, 11408) == FIELD_U32(this, 0x0).id
    || (v2 = FIELD_U32(PlayerMgr_instance, 44)) != 0 && FIELD_U32(v2, 11408) == FIELD_U32(this, 0x0).id )
  {
    result = 1;
    if ( !smthOut )
      return result;
    v4 = FIELD_S8(v2, 84);
    goto LABEL_11;
  }
  result = 0;
  if ( smthOut )
  {
    v4 = -1;
LABEL_11:
    *smthOut = v4;
  }
  return result;
}
