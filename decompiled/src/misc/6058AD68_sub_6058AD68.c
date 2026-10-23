/* sub_6058AD68
 * address: 0x6058AD68   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058AD68(int a1)
{
  int result; // r0
  bool v3; // zf

  sub_60716778(
    TileMgr_instance,
    (unsigned int)FIELD_F32(a1, 6980),
    (unsigned int)(float)-FIELD_F32(a1, 6984),
    FIELD_U8(a1, 86));
  result = FIELD_U32(a1, 7300);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U32(a1, 7304);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    result = FIELD_U32(a1, 7040);
    if ( result == 1 )
    {
      result = FIELD_U32(a1, 7060);
      if ( result != 1 )
        return sub_606B1F50(a1 + 6992);
    }
  }
  return result;
}
