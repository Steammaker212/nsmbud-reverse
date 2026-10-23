/* sub_608DE7F0
 * address: 0x608DE7F0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DE7F0(int a1, int a2, int a3, int (__fastcall *a4)(int, int))
{
  int v8; // r8
  int v9; // r5

  v8 = 0;
  v9 = FIELD_U32(a1, 4);
  if ( v9 != a1 )
  {
    while ( a4(v9 - a3, a2) )
    {
      v9 = FIELD_U32(v9, 4);
      if ( v9 == a1 )
        return v8;
    }
    return v9;
  }
  return v8;
}
