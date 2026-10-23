/* sub_607AFD98
 * address: 0x607AFD98   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AFD98(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = 1;
  if ( !sub_607C16A0(a1, 0) && !sub_607AEA48((_BYTE *)a1) && !sub_607AC8CC(a1) )
  {
    if ( (FIELD_U8(a1, 6900) & 0x60) != 0 )
      sub_607865BC(a1 + 688, 2);
    if ( FIELD_F32(a1, 124) <= 0.0 )
      sub_607865BC(a1 + 688, 5);
    v2 = 0;
    v3 = FIELD_U32(a1, 9940);
    if ( v3 == 1 )
    {
      ((void (__fastcall *)(int))loc_607B0140)(a1);
    }
    else if ( !v3 )
    {
      sub_607AFF5C(a1);
      return 0;
    }
  }
  return v2;
}
