/* sub_608CF998
 * address: 0x608CF998   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF998(int a1, int a2, int a3, int *a4)
{
  int v8; // r0
  int v9; // r1
  int result; // r0
  _BYTE v11[28]; // [sp+Ch] [bp-1Ch] BYREF

  sub_608CF75C(a1);
  v8 = nn__fs__WriteFile(FIELD_U32(a1, 4), v11, FIELD_U32(a1, 16), FIELD_S32(a1, 16) >> 31, a2, a3, v11);
  v9 = -2130706432;
  if ( !v8 )
  {
    v9 = 0;
    FIELD_U32(a1, 16) += a3;
  }
  result = a3;
  if ( a4 )
    *a4 = v9;
  return result;
}
