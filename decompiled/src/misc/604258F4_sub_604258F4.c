/* sub_604258F4
 * address: 0x604258F4   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604258F4(int a1)
{
  void *v2; // r0

  *(_DWORD *)a1 = off_60BFA3A4;
  sub_60924350(a1 + 17144);
  sub_6095A0BC(a1 + 6896);
  sub_60954610(a1 + 6828);
  sub_60954610(a1 + 6760);
  if ( FIELD_U8(a1, 192) )
    dword_60C9BBD4 = 0;
  v2 = (void *)sead__CalculateTask__dtor((_DWORD *)a1);
  operator_delete(v2);
}
