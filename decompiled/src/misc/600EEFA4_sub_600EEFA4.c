/* sub_600EEFA4
 * address: 0x600EEFA4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EEFA4(int result)
{
  FIELD_U32(result, 156) += 429496729;
  if ( !FIELD_U16(result, 6276) )
  {
    FIELD_U32(result, 156) = 0;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)result + 192))(result, &unk_60C8556C);
  }
  return result;
}
