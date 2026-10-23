/* sub_60295D10
 * address: 0x60295D10   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60295D10(int *a1)
{
  int *v2; // r5
  int result; // r0
  bool v4; // cc

  v2 = a1 + 1666;
  if ( sub_60299268(a1) == 1 )
  {
    *v2 = 71;
    return 71;
  }
  else
  {
    v4 = *v2 <= 1;
    result = *v2 - 1;
    *v2 = result;
    if ( v4 )
    {
      result = (*(int (__fastcall **)(int *))(*a1 + 764))(a1);
      if ( result == 1 )
        return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C8FC18);
    }
  }
  return result;
}
