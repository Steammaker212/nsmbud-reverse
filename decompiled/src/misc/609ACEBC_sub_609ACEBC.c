/* sub_609ACEBC
 * address: 0x609ACEBC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609ACEBC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // r5
  int v10; // r0
  int *v11; // r1

  if ( (FIELD_U8(a1, 4) & 1) != 0 )
  {
    v10 = FIELD_U32(a1, 8);
    if ( v10 < 1 )
    {
      return 0;
    }
    else
    {
      v11 = *(int **)(a1 + 16);
      v9 = *v11;
      memmove(v11, v11 + 1, 4 * v10 - 4);
      --FIELD_U32(a1, 8);
    }
  }
  else
  {
    v9 = sub_6093E338(dword_60CD09F8, a2, a3, a4, a5, a6, a7, a8);
    sub_609ACDC0((_DWORD *)a1, v9);
  }
  return v9;
}
