/* sub_60553130
 * address: 0x60553130   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60553130(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r0

  result = sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    if ( FIELD_U8(a1, 70260) )
    {
      v3 = a1 + 44;
      sub_6047459C(v3, 2u);
      v4 = v3;
      return sub_6047459C(v4, 3u);
    }
    if ( sub_60502D80(a1 + 17840) == 1 )
    {
      if ( (*(_DWORD *)(sub_608DE61C(a1 + 17892, 0) - FIELD_U32(a1, 17904) + 4) | 2) == 3 )
        return sub_6047459C(a1 + 44, 2u);
      if ( (*(_DWORD *)(sub_608DE61C(a1 + 17892, 1) - FIELD_U32(a1, 17904) + 4) | 2) == 3 )
      {
        v4 = a1 + 44;
        return sub_6047459C(v4, 3u);
      }
    }
    return sub_605540F4(a1);
  }
  return result;
}
