/* sub_601602F8
 * address: 0x601602F8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601602F8(int result, int a2)
{
  if ( !FIELD_U32(a2, 2176) && !FIELD_U32(a2, 2180) && FIELD_U32(result, 280) != a2 + 2172 )
    return (*(int (__fastcall **)(int))(FIELD_U32(result, 276) + 8))(result + 276);
  return result;
}
