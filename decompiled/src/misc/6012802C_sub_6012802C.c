/* sub_6012802C
 * address: 0x6012802C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012802C(int *a1)
{
  int result; // r0

  KoopalingBase__vf36C(a1);
  result = (*(int (__fastcall **)(int *))(*a1 + 728))(a1);
  if ( result == 1 )
  {
    sub_60127E20((int)a1);
    result = (*(int (__fastcall **)(int *))(*a1 + 716))(a1);
    if ( !result )
    {
      result = (*(int (__fastcall **)(int *))(*a1 + 720))(a1);
      if ( !result )
      {
        a1[1940] = 1065353216;
        return 7760;
      }
    }
  }
  return result;
}
