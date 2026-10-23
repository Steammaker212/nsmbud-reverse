/* sub_603F18C0
 * address: 0x603F18C0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F18C0(int a1)
{
  *(_DWORD *)a1 = off_60BF93C0;
  sub_60954610(a1 + 2488);
  sub_60954610(a1 + 2420);
  sub_60954610(a1 + 2352);
  sub_60954610(a1 + 2284);
  sub_60954610(a1 + 2216);
  sub_60954610(a1 + 2148);
  sub_60954610(a1 + 2080);
  sub_60954610(a1 + 2012);
  sub_60954610(a1 + 1944);
  sub_60954610(a1 + 1876);
  sub_6045C0A0(a1 + 1408);
  sub_6045C0A0(a1 + 1004);
  sub_6045C0A0(a1 + 600);
  sub_6045C0A0(a1 + 196);
  if ( FIELD_U8(a1, 192) )
    AreaTask_intance = 0;
  return sead__CalculateTask__dtor((_DWORD *)a1);
}
