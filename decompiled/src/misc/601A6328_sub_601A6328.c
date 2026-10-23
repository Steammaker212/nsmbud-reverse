/* sub_601A6328
 * address: 0x601A6328   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A6328(int result)
{
  FIELD_U32(result, 200) = 0;
  if ( FIELD_U8(result, 452) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 72))(result);
  return result;
}
