/* sub_60819C54
 * address: 0x60819C54   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60819C54(int a1)
{
  int result; // r0

  sub_6016B0A0(dword_60C88AC0);
  FIELD_U8(a1, 33) = 0;
  result = FIELD_U32(a1, 20);
  if ( !result )
  {
    result = FIELD_U32(a1, 28);
    if ( !result )
    {
      FIELD_U32(a1, 20) = 1;
      FIELD_U32(a1, 24) = 0;
      return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 36) + 12))(FIELD_U32(a1, 36), 1, 0);
    }
  }
  return result;
}
