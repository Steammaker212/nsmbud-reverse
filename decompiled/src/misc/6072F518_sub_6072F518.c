/* sub_6072F518
 * address: 0x6072F518   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072F518(int result)
{
  if ( FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60CBDB20);
  return result;
}
