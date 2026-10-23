/* sub_607FDBC0
 * address: 0x607FDBC0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FDBC0(_DWORD *a1)
{
  int result; // r0

  *a1 = 0;
  a1[1] = 0;
  result = sub_604B2014((unsigned __int8 *)dword_60CA1910);
  if ( !result )
  {
    result = FIELD_U8(AreaTask_intance, 1874) | FIELD_U8(AreaTask_intance, 1873);
    if ( !FIELD_U16(AreaTask_intance, 1873) )
    {
      ((void (__fastcall *)(_DWORD *))loc_607FDC2C)(a1);
      JUMPOUT(0x607FE284);
    }
  }
  return result;
}
