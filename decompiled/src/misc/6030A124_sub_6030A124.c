/* sub_6030A124
 * address: 0x6030A124   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030A124(int result)
{
  if ( !FIELD_U8(result, 6309) )
  {
    FIELD_U32(result, 6312) = -201326592;
    FIELD_U32(result, 136) = -1065353216;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)result + 192))(result, &unk_60C930AC);
  }
  return result;
}
