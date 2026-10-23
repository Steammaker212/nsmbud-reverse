/* sub_609802E0
 * address: 0x609802E0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609802E0(int a1, int a2, int a3)
{
  int result; // r0
  bool v7; // zf

  result = FIELD_U32(a1, 232);
  v7 = result == 0;
  if ( result )
    v7 = FIELD_U32(result, 216) == 0;
  if ( !v7 )
  {
    sub_6098E754(a1, result + 192, FIELD_U8(a1, 236));
    return sub_608620F4(a1, a2, a3);
  }
  return result;
}
