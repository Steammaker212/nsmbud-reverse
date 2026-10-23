/* sub_6098004C
 * address: 0x6098004C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098004C(int a1, int a2, int a3)
{
  int result; // r0
  bool v7; // zf

  result = FIELD_U32(a1, 200);
  v7 = result == 0;
  if ( result )
    v7 = FIELD_U32(result, 216) == 0;
  if ( !v7 )
  {
    sub_6098E754(a1, result + 192, FIELD_U8(a1, 204));
    return sub_6085B474(a1, a2, a3);
  }
  return result;
}
