/* sub_608195A8
 * address: 0x608195A8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608195A8(int a1)
{
  *(_DWORD *)a1 = off_60C2A208;
  sub_60954610(a1 + 224);
  if ( FIELD_U8(a1, 192) )
    dword_60CC6BE4 = 0;
  return sead__CalculateTask__dtor((_DWORD *)a1);
}
