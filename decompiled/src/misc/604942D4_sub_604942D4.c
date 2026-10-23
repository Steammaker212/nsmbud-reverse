/* sub_604942D4
 * address: 0x604942D4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604942D4(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 5944);
  result = dword_60CC6E04;
  if ( !FIELD_U32(dword_60CC6E04, 24) )
  {
    FIELD_U32(dword_60CC6E04, 24) = 1;
    FIELD_U32(result, 36) = v1;
    return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(result + 20) + 12))(FIELD_U32(result, 20), 3, 1);
  }
  return result;
}
