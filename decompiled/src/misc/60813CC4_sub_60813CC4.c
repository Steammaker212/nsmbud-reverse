/* sub_60813CC4
 * address: 0x60813CC4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60813CC4(int a1, int a2, float *a3)
{
  int *result; // r0

  result = (int *)dword_60CC6B68;
  if ( (unsigned int)(FIELD_U32(dword_60CC6B68, 20) - 8) <= 9 )
  {
    result = (int *)sub_60817CA4(dword_60CC6B68, a2);
    if ( !result )
      return sub_608122D8(a1, a2, a3);
  }
  return result;
}
