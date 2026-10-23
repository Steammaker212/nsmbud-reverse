/* sub_60486E74
 * address: 0x60486E74   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60486E74(int a1)
{
  int result; // r0
  int v3; // r1

  result = sub_6048F3CC();
  if ( !result )
  {
    if ( !FIELD_U8(a1, 4814) )
    {
      result = FIELD_U8(a1, 4810);
      if ( FIELD_U8(a1, 4810) )
        return result;
      FIELD_U8(a1, 4811) = 0;
      if ( !sub_6048F910(a1) )
      {
        v3 = FIELD_U32(a1, 47764);
        if ( v3 != -1 && (FIELD_U32(a1, 14096) & v3) == 0 )
          FIELD_U32(a1, 47764) = -1;
      }
    }
    return sub_604900BC(a1);
  }
  return result;
}
