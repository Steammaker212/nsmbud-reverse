/* sub_602A9A2C
 * address: 0x602A9A2C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A9A2C(int a1, bool *a2, int a3, int a4)
{
  int v4; // r2
  bool v5; // r0

  v4 = *(_DWORD *)(FIELD_U32(a4, 4) + 64);
  v5 = 0;
  if ( (FIELD_U8(v4, 6900) & 1) == 0 )
    v5 = FIELD_F32(v4, 124) < 0.0;
  *a2 = v5;
  return 1;
}
