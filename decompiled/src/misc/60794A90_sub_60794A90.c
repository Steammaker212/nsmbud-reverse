/* sub_60794A90
 * address: 0x60794A90   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60794A90(int result, int a2)
{
  int v2; // r4

  v2 = result;
  FIELD_U32(result, 8) = a2;
  switch ( a2 )
  {
    case 2:
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(result + 4) + 68))(FIELD_U32(result, 4), 3);
      return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v2 + 4) + 64))(FIELD_U32(v2, 4), 0, 0);
    case 1:
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(result + 4) + 68))(FIELD_U32(result, 4), 6);
      return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v2 + 4) + 64))(FIELD_U32(v2, 4), -2, 8);
    case 0:
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(result + 4) + 68))(FIELD_U32(result, 4), 3);
      return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v2 + 4) + 64))(FIELD_U32(v2, 4), -2, -2);
  }
  return result;
}
