/* SE_VOC_YS_YOSHI_ref_2_helper
 * address: 0x607C7294   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_YS_YOSHI_ref_2_helper(int result, int a2)
{
  if ( !FIELD_U32(result, 9952) )
  {
    FIELD_U32(result, 9952) = FIELD_U32(a2, 8);
    FIELD_U32(result, 1216) |= 0x80000u;
    return Player_changeState(result, (StateBase *)&dword_60CC4FEC, 0);
  }
  return result;
}
