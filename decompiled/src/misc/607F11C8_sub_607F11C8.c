/* sub_607F11C8
 * address: 0x607F11C8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607F11C8(int a1)
{
  void *v1; // r0

  *(_DWORD *)a1 = off_60C27344;
  if ( FIELD_U8(a1, 192) )
    dword_60CC5E58 = 0;
  v1 = (void *)sead__CalculateTask__dtor((_DWORD *)a1);
  operator_delete(v1);
}
