/* sub_60393AA0
 * address: 0x60393AA0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60393AA0(int a1)
{
  int result; // r0

  sub_6039AF5C(a1, 0, 0.0);
  result = *(unsigned __int8 *)(FIELD_U32(a1, 6432) + 24);
  if ( *(_BYTE *)(FIELD_U32(a1, 6432) + 24) )
  {
    FIELD_U32(a1, 6436) = 1;
    FIELD_U8(a1, 6440) = 0;
    return 6440;
  }
  return result;
}
