/* sub_603A24A8
 * address: 0x603A24A8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603A24A8(int a1, int a2, int a3)
{
  int v3; // r12
  int v4; // r2
  int v5; // r3
  int v7; // r2
  bool v8; // nf
  bool v9; // vf

  v3 = FIELD_U32(a1, 160);
  if ( v3 <= a2 )
  {
    if ( v3 < a2 )
    {
      v7 = v3 + a3;
      v9 = __OFSUB__(v7, a2);
      v8 = v7 - a2 < 0;
      if ( v7 < a2 )
        a2 = v7;
      FIELD_U32(a1, 160) = a2;
      return v8 == v9;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v4 = v3 - a3;
    v5 = 0;
    if ( v4 <= a2 )
      v5 = 1;
    else
      a2 = v4;
    FIELD_U32(a1, 160) = a2;
    return v5;
  }
}
