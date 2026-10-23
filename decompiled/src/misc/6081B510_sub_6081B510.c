/* sub_6081B510
 * address: 0x6081B510   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6081B510(int a1)
{
  void *v2; // r0

  *(_DWORD *)a1 = off_60C2A448;
  sub_6045C0A0(a1 + 1256);
  sead__CriticalSection__dtor((_DWORD *)(a1 + 692));
  sub_6045C0A0(a1 + 288);
  sub_60954610(a1 + 196);
  if ( FIELD_U8(a1, 192) )
    dword_60CC6C2C = 0;
  v2 = (void *)sead__CalculateTask__dtor((_DWORD *)a1);
  operator_delete(v2);
}
