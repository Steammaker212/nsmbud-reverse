/* sub_601C16F0
 * address: 0x601C16F0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C16F0(int a1, int a2)
{
  int result; // r0
  int v4; // r0
  int v5; // r0

  if ( !sub_601C4774(a1, a2) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  if ( (FIELD_U32(a1, 264) | 1) == 7 )
  {
    if ( sub_601C6678(a1) == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 120))(a1);
      if ( result != 1 )
        return result;
    }
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  result = FIELD_U32(a1, 1052);
  if ( result == 10 )
  {
    result = sub_601860F8(a1);
    if ( result != 1 )
      return result;
    sub_601C6044(a1, a1 + 1084);
    sub_601B69E0(a1);
    FIELD_U32(a1, 1096) = 6;
    sub_601B69F4(a1, &stru_60C8ABD4);
    FIELD_U8(a1, 328) = 1;
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  if ( result == 1 )
  {
    v5 = FIELD_U32(a1, 1044);
    if ( v5 >= 1 )
    {
      result = v5 - 1;
      FIELD_U32(a1, 1044) = result;
      return result;
    }
LABEL_18:
    sub_601C2E80(a1);
    FIELD_U32(a1, 1052) = 10;
    return 10;
  }
  if ( result )
    return result;
  v4 = sub_601D05D4(dword_60C8AEF0);
  if ( !v4 )
    goto LABEL_18;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 68))(v4);
  if ( result == 1 )
  {
    FIELD_U32(a1, 1044) = 10;
    FIELD_U32(a1, 1052) = 1;
    return 1;
  }
  return result;
}
