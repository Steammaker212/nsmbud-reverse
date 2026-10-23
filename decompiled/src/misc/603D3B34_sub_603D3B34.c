/* sub_603D3B34
 * address: 0x603D3B34   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D3B34(int result)
{
  if ( (FIELD_U8(result, 2872) & 1) != 0 )
    FIELD_U32(result, 124) = 0;
  if ( FIELD_S32(result, 6340) <= 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60C98F00);
  return result;
}
