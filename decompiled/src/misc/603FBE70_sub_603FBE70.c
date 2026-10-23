/* sub_603FBE70
 * address: 0x603FBE70   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FBE70(int a1)
{
  int result; // r0
  _BYTE *v2; // r4

  result = FIELD_U32(a1, 196);
  if ( result )
  {
    v2 = (_BYTE *)(result + 4512);
    if ( !FIELD_U8(result, 4512) )
    {
      sub_60481E9C(result + 840);
      *v2 = 1;
      return 1;
    }
  }
  return result;
}
