/* sub_604140F8
 * address: 0x604140F8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604140F8(int result)
{
  int v1; // r8
  int v2; // r4
  int *v3; // r6
  _DWORD *v4; // r7
  int v5; // r5

  v1 = result + 172240;
  v2 = FIELD_U32(result, 172244);
  if ( v2 != result + 172240 )
  {
    v3 = (int *)(result + 172252);
    v4 = (_DWORD *)(result + 172248);
    do
    {
      v5 = FIELD_U32(v2, 4);
      sead__ListNode__erase(v2);
      --*v4;
      result = sub_60424294(v2 - 216);
      *(_DWORD *)(v2 - 216) = *v3;
      v2 = v5;
      *v3 = result;
    }
    while ( v5 != v1 );
  }
  return result;
}
