/* sub_6079E8F8
 * address: 0x6079E8F8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079E8F8(int *a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1
  int v5; // r2

  v2 = (*(int (__fastcall **)(int *))(*a1 + 1064))(a1);
  result = 0;
  if ( v2 == 1 )
  {
    v4 = a1[3040];
    if ( v4 == 3 )
    {
      v5 = 2;
    }
    else
    {
      if ( v4 != 1 )
        return result;
      v5 = 0;
    }
    sub_6079E27C((int)a1, a1[2852], v5);
    return 1;
  }
  return result;
}
