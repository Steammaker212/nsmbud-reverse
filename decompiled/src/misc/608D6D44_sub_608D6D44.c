/* sub_608D6D44
 * address: 0x608D6D44   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D6D44(int a1, int a2)
{
  int result; // r0

  if ( !sub_608C66DC((_DWORD **)(a1 + 8)) )
    return 0;
  result = sub_608DA050();
  FIELD_U32(result, 376) = a2;
  FIELD_U32(result, 384) = FIELD_U32(a1, 4);
  return result;
}
