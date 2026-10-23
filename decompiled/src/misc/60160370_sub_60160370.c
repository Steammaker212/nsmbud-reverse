/* sub_60160370
 * address: 0x60160370   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60160370(int result, int a2)
{
  if ( !FIELD_U32(a2, 2188) && !FIELD_U32(a2, 2192) && FIELD_U32(result, 292) != a2 + 2184 )
    return (*(int (__fastcall **)(int))(FIELD_U32(result, 288) + 8))(result + 288);
  return result;
}
