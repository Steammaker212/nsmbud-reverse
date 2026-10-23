/* sub_60477D0C
 * address: 0x60477D0C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60477D0C(int a1)
{
  int v2; // r1
  int result; // r0
  bool v4; // zf

  v2 = FIELD_U32(a1, 128);
  if ( FIELD_F32(v2, 16) == 0.0 )
  {
    sub_60477B30((_DWORD *)a1, FIELD_U32(a1, 112));
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 112) + 108))(FIELD_U32(a1, 112));
    (*(void (__fastcall **)(_DWORD, _DWORD, float))(**(_DWORD **)(a1 + 112) + 92))(FIELD_U32(a1, 112), 0, -1.0);
    result = FIELD_U8(a1, 188);
    if ( !FIELD_U8(a1, 188) )
      return sub_60478680(FIELD_U32(a1, 180), FIELD_U32(a1, 200));
  }
  else
  {
    result = FIELD_U32(a1, 164);
    v4 = result == 4;
    if ( result == 4 )
    {
      result = FIELD_U8(a1, 8);
      v4 = (result & 0x10) == 0;
    }
    if ( !v4 )
    {
      sub_60477B30((_DWORD *)a1, v2);
      return (*(int (__fastcall **)(_DWORD, _DWORD, float))(**(_DWORD **)(a1 + 128) + 92))(
               FIELD_U32(a1, 128),
               0,
               -1.0);
    }
  }
  return result;
}
