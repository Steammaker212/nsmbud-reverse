/* sub_60559F20
 * address: 0x60559F20   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60559F20(int result)
{
  int v1; // r1

  if ( dword_60C99DD4 )
  {
    v1 = 300;
    if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
      v1 = 600;
    FIELD_U32(result, 3696) = v1;
  }
  else
  {
    FIELD_U32(result, 3696) = 300;
  }
  return result;
}
