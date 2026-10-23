/* sub_603A2430
 * address: 0x603A2430   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A2430(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  _DWORD *v6; // lr
  int result; // r0
  int v8; // r2
  int v9; // r1

  v6 = (_DWORD *)(a1 + 6440);
  v5 = FIELD_U32(a1, 6440);
  result = 0;
  if ( v5 == 2 )
  {
    if ( a3 == 1 && a4 == 1 )
    {
      FIELD_U8(a1, 6386) = 0;
      return 1;
    }
  }
  else if ( v5 == 1 )
  {
    v8 = FIELD_U32(a1, 156);
    v9 = v8 + a2;
    FIELD_U32(a1, 156) = v9;
    if ( v8 < 0 && v9 >= 0 )
    {
      FIELD_U32(a1, 156) = 0;
      *v6 = 2;
      return 0;
    }
  }
  return result;
}
