/* sub_60165934
 * address: 0x60165934   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60165934(int result, int a2)
{
  int v3; // r3
  int v4; // r1

  v3 = FIELD_U32(a2, 5352);
  v4 = a2 + 5348;
  if ( v3 || FIELD_U32(a2, 5356) || FIELD_U32(result, 344) == v4 )
    return (*(int (__fastcall **)(int, int))(FIELD_U32(result, 340) + 4))(result + 340, v4);
  return result;
}
