/* sub_605CAB0C
 * address: 0x605CAB0C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CAB0C(int a1, int a2)
{
  int result; // r0
  int v4; // r2
  bool v5; // zf

  result = FIELD_U32(a1, 144);
  if ( result )
  {
    v4 = FIELD_U32(a2, 2196);
    v5 = v4 == 0;
    if ( v4 )
      v5 = (FIELD_U8(a2, 2550) & 1) == 0;
    if ( !v5 )
    {
      FIELD_U32(a2, 2224) |= 0x4000u;
      SE_OBJ_TARU_BREAK_ref(result, 0);
      FIELD_U8(a1, 220) = 1;
      return 1;
    }
  }
  return result;
}
