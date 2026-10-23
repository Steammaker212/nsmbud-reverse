/* sub_6081AAE4
 * address: 0x6081AAE4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6081AAE4(int a1)
{
  void *v1; // r0

  *(_DWORD *)a1 = off_60C2A3A4;
  if ( FIELD_U8(a1, 192) )
    dword_60CC6C20 = 0;
  v1 = (void *)sead__CalculateTask__dtor((_DWORD *)a1);
  operator_delete(v1);
}
