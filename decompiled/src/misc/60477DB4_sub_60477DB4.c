/* sub_60477DB4
 * address: 0x60477DB4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60477DB4(int a1)
{
  int result; // r0

  if ( !FIELD_U8(a1, 188) )
    sub_60478680(FIELD_U32(a1, 172), FIELD_U32(a1, 192));
  result = FIELD_U32(a1, 116);
  if ( FIELD_U8(a1, 160) )
  {
    if ( !result )
      return result;
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 132) + 108))(FIELD_U32(a1, 132));
    sub_60477B30((_DWORD *)a1, FIELD_U32(a1, 116));
    result = FIELD_U32(a1, 116);
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 108))(result);
    sub_60477B30((_DWORD *)a1, 0);
    result = FIELD_U32(a1, 132);
    if ( !result )
      return result;
  }
  return (*(int (__fastcall **)(int, _DWORD, float))(*(_DWORD *)result + 84))(result, 0, 1.0);
}
