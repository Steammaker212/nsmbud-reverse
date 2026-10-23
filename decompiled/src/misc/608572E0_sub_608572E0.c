/* sub_608572E0
 * address: 0x608572E0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608572E0(int a1, int a2, int a3)
{
  int result; // r0
  _BYTE v7[52]; // [sp+4h] [bp-34h] BYREF

  result = FIELD_U32(a1, 12);
  if ( result )
  {
    sub_60859A1C(v7, a2, a1);
    FIELD_U32(a2, 188) = a1;
    (*(void (__fastcall **)(_DWORD, int, _BYTE *, int))(**(_DWORD **)(a1 + 12) + 76))(FIELD_U32(a1, 12), a2, v7, a3);
    FIELD_U32(a2, 188) = 0;
    return 0;
  }
  return result;
}
