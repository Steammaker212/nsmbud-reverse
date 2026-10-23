/* sub_60774778
 * address: 0x60774778   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60774778(int a1)
{
  int result; // r0
  int v3; // [sp+4h] [bp-Ch] BYREF

  result = sub_607868D4(a1 + 688, &v3);
  if ( result == 1 )
  {
    result = v3;
    if ( !v3 )
    {
      result = FIELD_U8(a1, 6912);
      if ( (result & 0x40) == 0 )
        return result;
      result = 1060320051;
      goto LABEL_8;
    }
    if ( v3 == 1 )
    {
      result = FIELD_U8(a1, 6912);
      if ( (result & 0x20) != 0 )
      {
        result = -1087163597;
LABEL_8:
        FIELD_U32(a1, 88) = result;
      }
    }
  }
  return result;
}
