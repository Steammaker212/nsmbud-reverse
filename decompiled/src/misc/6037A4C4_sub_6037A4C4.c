/* sub_6037A4C4
 * address: 0x6037A4C4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037A4C4(int a1)
{
  int result; // r0

  result = ShellEnemy__vf314((ShellEnemy *)a1);
  if ( FIELD_F32(a1, 132) == 0.0 )
  {
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
    {
      result = dword_60B00650[FIELD_U32(a1, 80)];
      FIELD_U32(a1, 120) = result;
      FIELD_U32(a1, 132) = result;
    }
  }
  return result;
}
