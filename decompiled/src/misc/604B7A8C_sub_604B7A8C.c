/* sub_604B7A8C
 * address: 0x604B7A8C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B7A8C(int a1)
{
  _DWORD *v2; // r0
  int result; // r0
  int v4; // r0
  int v5; // [sp+4h] [bp-14h] BYREF

  sub_604B7B70(a1);
  v2 = *(_DWORD **)(a1 + 3652);
  if ( v2 )
  {
    result = sub_604B7320(v2);
    FIELD_U8(a1, 3721) = result;
    if ( result )
    {
      FIELD_U32(a1, 3716) = 14;
      if ( sub_6047467C((_DWORD *)(a1 + 4), 0, &dword_60CA24B0, (int)&dword_60CA2480, 1.0, 0) == 1 )
      {
        v4 = sub_6047482C(a1 + 4, 0);
        if ( v4 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
      }
      v5 = 1;
      sub_604751FC(a1 + 4, a1 + 3656, &dword_60CA2454, &v5);
      result = T_Btn_00_ref(a1);
      FIELD_U8(a1, 3720) = 0;
    }
  }
  else
  {
    FIELD_U8(a1, 3721) = 0;
    return 0;
  }
  return result;
}
