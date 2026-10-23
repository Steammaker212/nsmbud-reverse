/* sub_6047643C
 * address: 0x6047643C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6047643C(_DWORD *a1)
{
  int v2; // r0

  *a1 = off_60BFCA78;
  if ( a1[4] )
  {
    sub_60855B70(sub_604793E0, sub_604793FC);
    sub_60855C88(a1[4], FIELD_U32(dword_60CCFC8C, 24));
    v2 = a1[4];
    if ( v2 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    a1[4] = 0;
    a1[5] = 0;
  }
  return sead__IDisposer__dtor(a1);
}
