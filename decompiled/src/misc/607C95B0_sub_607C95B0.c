/* sub_607C95B0
 * address: 0x607C95B0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C95B0(int a1)
{
  int *v2; // r5
  float v3; // s0
  float v4; // s2
  float v5; // s3

  if ( sub_607BA878((_BYTE *)a1) )
  {
    if ( FIELD_U32(a1, 15028) == 4 )
    {
      v2 = (int *)(a1 + 11360);
      if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11360) + 116))(FIELD_U32(a1, 11360)) == 1 )
      {
        sub_60794368(*v2);
        v3 = sub_60793184(*v2);
        sub_607BABC4(a1, v3, 10.0, v4, v5);
      }
    }
    return 0;
  }
  else
  {
    FIELD_U32(a1, 1228) &= ~0x40u;
    return 0;
  }
}
