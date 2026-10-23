/* sub_6081B4A4
 * address: 0x6081B4A4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081B4A4(int a1)
{
  *(_DWORD *)a1 = off_60C2A448;
  sub_6045C0A0(a1 + 1256);
  sead__CriticalSection__dtor((_DWORD *)(a1 + 692));
  sub_6045C0A0(a1 + 288);
  sub_60954610(a1 + 196);
  if ( FIELD_U8(a1, 192) )
    dword_60CC6C2C = 0;
  return sead__CalculateTask__dtor((_DWORD *)a1);
}
