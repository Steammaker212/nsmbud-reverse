/* sub_608CFBB4
 * address: 0x608CFBB4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CFBB4(int a1, int a2, int a3, int *a4)
{
  int v4; // r6
  int v8; // r0
  int v9; // r1
  _BOOL4 v10; // r4
  int v12; // [sp+Ch] [bp-1Ch] BYREF

  v4 = FIELD_U32(a1, 4);
  sub_608CF75C(v4);
  v12 = 0;
  v8 = nn__fs__ReadFile_9AE510(&v12, FIELD_U32(v4, 4), FIELD_U32(v4, 16), FIELD_S32(v4, 16) >> 31, a2, a3);
  v9 = -2130706432;
  if ( !v8 )
  {
    v10 = v12 != a3;
    FIELD_U32(v4, 16) += v12;
    v9 = v10;
  }
  if ( a4 )
    *a4 = v9;
  return v12;
}
