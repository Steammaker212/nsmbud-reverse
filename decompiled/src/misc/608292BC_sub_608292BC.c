/* sub_608292BC
 * address: 0x608292BC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608292BC(int result)
{
  if ( !FIELD_U32(result, 24) )
  {
    FIELD_U32(result, 24) = 1;
    return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(result + 20) + 12))(FIELD_U32(result, 20), 1, 1);
  }
  return result;
}
