/* sub_6054555C
 * address: 0x6054555C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054555C(int a1, int a2, float a3)
{
  _DWORD *v4; // r0
  char v5; // r0
  int result; // r0
  bool v7; // zf

  FIELD_U32(a1, 33480) = a2;
  v4 = (_DWORD *)(a1 + 3672);
  if ( a2 > 2 )
  {
    sub_6047F01C(v4, 10);
    v5 = 1;
  }
  else
  {
    sub_6047EEC4((int)v4, 10, a3);
    v5 = 0;
  }
  FIELD_U8(a1, 4142) = v5;
  FIELD_U8(a1, 33496) = 1;
  result = *(_DWORD *)(FIELD_U32(a1, 33468) + 492);
  v7 = result == 4;
  if ( result != 4 )
    v7 = result == 1;
  if ( v7 )
  {
    FIELD_U32(a1, 33472) = 6;
    return 33472;
  }
  return result;
}
