/* sub_6080A3DC
 * address: 0x6080A3DC   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A3DC(int a1, int a2, int a3)
{
  int result; // r0

  result = FIELD_U32(a1, 68);
  if ( result )
    return sub_608AF328(result, a2, a3);
  return result;
}
