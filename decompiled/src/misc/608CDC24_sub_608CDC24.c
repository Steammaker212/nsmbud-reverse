/* sub_608CDC24
 * address: 0x608CDC24   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CDC24(int a1, int a2)
{
  int result; // r0

  result = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = 1;
  FIELD_U32(a1, 56) = 2;
  FIELD_U32(a1, 60) = 3;
  FIELD_U32(a1, 64) = 4;
  FIELD_U32(a1, 68) = 5;
  if ( !FIELD_U8(a1, 32) )
  {
    FIELD_U32(a1, 28) = a2;
    return 1;
  }
  return result;
}
