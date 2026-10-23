/* sub_601CE14C
 * address: 0x601CE14C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CE14C(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0

  if ( !sub_601C4774(a1) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  result = FIELD_U32(a1, 1016);
  if ( result == 10 )
  {
    result = sub_601860F8(a1);
    if ( result != 1 )
      return result;
    sub_601C6044(a1, (_DWORD *)(a1 + 1032));
    (*(void (__fastcall **)(int, _DWORD, int, float))(*(_DWORD *)a1 + 336))(a1, 0, -1, 0.0);
    FIELD_U32(a1, 1100) = 6;
    FIELD_U32(a1, 92) = FIELD_U32(a1, 80);
    FIELD_U32(a1, 96) = FIELD_U32(a1, 84);
    FIELD_U32(a1, 100) = FIELD_U32(a1, 88);
    FIELD_U32(a1, 180) = 0;
    FIELD_U8(a1, 328) = 1;
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  if ( result == 1 )
  {
    v4 = FIELD_U32(a1, 1124);
    if ( v4 >= 1 )
    {
      result = v4 - 1;
      FIELD_U32(a1, 1124) = result;
      return result;
    }
LABEL_14:
    sub_601CEC00(a1);
    FIELD_U32(a1, 1016) = 10;
    return 10;
  }
  if ( result )
    return result;
  v3 = sub_601D05D4(dword_60C8AEF0);
  if ( !v3 )
    goto LABEL_14;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 68))(v3);
  if ( result == 1 )
  {
    FIELD_U32(a1, 1124) = 10;
    FIELD_U32(a1, 1016) = 1;
    return 1;
  }
  return result;
}
