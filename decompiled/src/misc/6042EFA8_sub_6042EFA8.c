/* sub_6042EFA8
 * address: 0x6042EFA8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042EFA8(int a1, int a2)
{
  bool v3; // cc
  int result; // r0
  int v5; // r0

  v3 = a2 <= 0;
  result = 100663296;
  if ( a2 >= 0 )
    v3 = FIELD_U32(a1, 52) <= a2;
  if ( !v3 )
  {
    v5 = sub_608DE61C(a1 + 60, a2);
    if ( v5 )
      v5 -= 92;
    return *(_DWORD *)v5;
  }
  return result;
}
