/* sub_601330F8
 * address: 0x601330F8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601330F8(int result, int a2)
{
  int v3; // r5
  int v4; // r6
  bool v5; // zf

  v3 = result;
  v4 = FIELD_U32(a2, 64);
  v5 = v4 == 0;
  if ( v4 )
  {
    result = FIELD_U32(result, 64);
    v5 = result == 0;
  }
  if ( !v5 )
  {
    if ( Actor__getProfileId(*(Actor **)(a2 + 64)) != 761 )
      return sub_601349FC(v3, a2);
    result = FIELD_U8(v4, 6592);
    if ( !FIELD_U8(v4, 6592) )
      return sub_601349FC(v3, a2);
  }
  return result;
}
