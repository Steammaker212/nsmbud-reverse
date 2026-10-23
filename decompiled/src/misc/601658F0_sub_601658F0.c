/* sub_601658F0
 * address: 0x601658F0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601658F0(int result, int a2)
{
  if ( !FIELD_U32(a2, 5352) && !FIELD_U32(a2, 5356) && FIELD_U32(result, 344) != a2 + 5348 )
    return (*(int (__fastcall **)(int))(FIELD_U32(result, 340) + 8))(result + 340);
  return result;
}
