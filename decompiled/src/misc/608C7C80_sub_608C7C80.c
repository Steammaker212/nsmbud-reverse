/* sub_608C7C80
 * address: 0x608C7C80   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C7C80(int a1, int a2)
{
  int result; // r0

  if ( !FIELD_U8(a1, 177) )
    return 0;
  result = sub_608CAD8C(FIELD_U32(a1, 364));
  if ( a2 == 1 && FIELD_U8(a1, 840) && result > FIELD_U32(a1, 836) - FIELD_U32(a1, 832) + FIELD_U32(a1, 380) )
    result -= FIELD_U32(a1, 380) - FIELD_U32(a1, 832);
  return result;
}
