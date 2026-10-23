/* sub_605AD9C8
 * address: 0x605AD9C8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605AD9C8(int a1)
{
  unsigned int result; // r0
  int v2; // r0
  int v3; // r1

  result = FIELD_U32(a1, 24) & 0xF;
  if ( !FIELD_U8(dword_60CC6D78, 20) )
  {
    if ( result == 2 )
      return AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 7, 2, 0, 0);
    if ( result == 1 )
    {
      v3 = 7;
    }
    else
    {
      if ( result )
        return result;
      v3 = 0;
    }
    v2 = AreaRumbleMgr_instance;
    return AreaRumbleMgr_rumble(v2, v3, 1, 0, 0);
  }
  if ( result == 2 )
    return AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 25, 2, 0, 0);
  if ( result <= 1 )
  {
    v2 = AreaRumbleMgr_instance;
    v3 = 25;
    return AreaRumbleMgr_rumble(v2, v3, 1, 0, 0);
  }
  return result;
}
