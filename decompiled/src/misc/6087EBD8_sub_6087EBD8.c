/* sub_6087EBD8
 * address: 0x6087EBD8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087EBD8(int result, int a2, int a3, int a4)
{
  int v4; // r12

  FIELD_U32(result, 8) = a3;
  v4 = (a2 + 31) >> 5;
  FIELD_U32(result, 12) = v4;
  FIELD_U32(result, 16) = a2;
  if ( a2 < 1 )
  {
    a4 = 0;
    *(_DWORD *)result = 0;
  }
  else
  {
    *(_DWORD *)result = a4;
    if ( a3 != 1 )
      a4 += 4 * v4;
  }
  FIELD_U32(result, 4) = a4;
  FIELD_U16(result, 20) = 0;
  return result;
}
