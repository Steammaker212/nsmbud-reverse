/* sub_606B1F50
 * address: 0x606B1F50   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B1F50(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 156);
  if ( v1 != -1 )
  {
    result = sub_606B3830(dword_60CBA43C, v1);
    if ( result )
      --FIELD_U32(result, 44);
  }
  return result;
}
