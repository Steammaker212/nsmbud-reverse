/* sub_607663F4
 * address: 0x607663F4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607663F4(int result)
{
  int v1; // r1

  v1 = FIELD_S8(result, 84);
  if ( v1 >= 0 )
  {
    FIELD_U32(PlayerMgr_instance, 144) |= 1 << v1;
    FIELD_U8(dword_60C99DE4, 29) |= 1 << FIELD_U8(result, 84);
    FIELD_U32(result, 1204) |= 0x20u;
    FIELD_U32(result, 1228) |= 0x400000u;
  }
  return result;
}
