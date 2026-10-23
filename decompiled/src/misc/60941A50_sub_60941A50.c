/* sub_60941A50
 * address: 0x60941A50   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60941A50(_DWORD *a1, int *a2, int a3, int a4)
{
  *a1 = &off_60C5E40C;
  a1[2] = 0;
  (*(void (__fastcall **)(int *))(*a2 + 12))(a2);
  a1[1] = sub_6090FEB4(a2[1]);
  if ( a4 )
    sub_60947BFC(a4, a1);
  return a1;
}
