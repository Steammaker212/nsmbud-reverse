/* sub_608CF91C
 * address: 0x608CF91C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF91C(int a1, int a2, int a3, int *a4)
{
  int v8; // r0
  int v9; // r1
  _BOOL4 v10; // r4
  int v12; // [sp+Ch] [bp-1Ch] BYREF

  sub_608CF75C(a1);
  v12 = 0;
  v8 = nn__fs__ReadFile_9AE510(&v12, FIELD_U32(a1, 4), FIELD_U32(a1, 16), FIELD_S32(a1, 16) >> 31, a2, a3);
  v9 = -2130706432;
  if ( !v8 )
  {
    v10 = v12 != a3;
    FIELD_U32(a1, 16) += v12;
    v9 = v10;
  }
  if ( a4 )
    *a4 = v9;
  return v12;
}
