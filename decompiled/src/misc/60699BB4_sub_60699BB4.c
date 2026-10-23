/* sub_60699BB4
 * address: 0x60699BB4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60699BB4(int result, int a2, int a3)
{
  if ( !a3 )
    return (*(int (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)a2 + 100))(
             a2,
             FIELD_U32(result, 60),
             result,
             result + 48);
  return result;
}
