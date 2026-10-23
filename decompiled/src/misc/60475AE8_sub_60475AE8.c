/* sub_60475AE8
 * address: 0x60475AE8   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60475AE8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0

  *a1 = off_60BFCA94;
  if ( a1[4] )
  {
    sub_6047A05C();
    v2 = a1[4];
    *a1 = off_60BFCA78;
    if ( v2 )
    {
      sub_60855B70(sub_604793E0, sub_604793FC);
      sub_60855C88(a1[4], FIELD_U32(dword_60CCFC8C, 24));
      v3 = a1[4];
      if ( v3 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      a1[4] = 0;
      a1[5] = 0;
    }
  }
  else
  {
    *a1 = off_60BFCA78;
  }
  return sead__IDisposer__dtor(a1);
}
