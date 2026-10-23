/* sub_603E5E9C
 * address: 0x603E5E9C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E5E9C(int a1)
{
  int result; // r0

  FIELD_U32(a1, 48) = 45;
  result = FIELD_U32(dword_60C99DD4, 220);
  if ( result )
    FIELD_U8(result, 3592) = 1;
  return result;
}
