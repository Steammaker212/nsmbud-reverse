/* sub_609813A8
 * address: 0x609813A8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609813A8(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD v7[7]; // [sp+0h] [bp-38h] BYREF
  char v8; // [sp+1Ch] [bp-1Ch]

  result = FIELD_U32(a1, 12);
  if ( result )
  {
    v8 = 0;
    memset(v7, 0, sizeof(v7));
    sub_60859A1C((int)v7, a2, a1);
    FIELD_U32(a2, 188) = a1;
    result = (*(int (__fastcall **)(_DWORD, int, _DWORD *, int))(**(_DWORD **)(a1 + 12) + 76))(
               FIELD_U32(a1, 12),
               a2,
               v7,
               a3);
    FIELD_U32(a2, 188) = 0;
  }
  return result;
}
