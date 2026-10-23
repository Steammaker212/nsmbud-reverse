/* sub_60731290
 * address: 0x60731290   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60731290(int a1)
{
  int result; // r0

  T_Kinopio_ref(a1 + 20);
  result = sub_6040E394(FIELD_U8(LevelInfo_instance, 16), FIELD_U8(LevelInfo_instance, 17));
  if ( result == 1 )
    return sub_6052EDB4(a1 + 4144);
  return result;
}
