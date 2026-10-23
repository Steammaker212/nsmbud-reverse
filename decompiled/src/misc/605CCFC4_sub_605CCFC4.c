/* sub_605CCFC4
 * address: 0x605CCFC4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CCFC4(int a1, int a2)
{
  int v2; // r9
  int v4; // r10
  int v5; // r6
  char i; // r7

  v2 = FIELD_U8(a1, 29);
  if ( !FIELD_U8(a1, 29) )
    return sub_605CDC78(a1 + 648, a2);
  v4 = FIELD_U32(ActorMgr__instance, 27180);
  v5 = sub_60008598(ActorMgr__instance, 40, FIELD_U32(ActorMgr__instance, 27172));
  for ( i = 0; v5 != v4; v5 = sub_60008598(ActorMgr__instance, 40, v5 + 4) )
  {
    if ( *(unsigned __int8 *)(*(_DWORD *)v5 + 29) == v2 )
    {
      if ( sub_605CDC78(*(_DWORD *)v5 + 648, a2) )
        i = 1;
    }
  }
  return i & 1;
}
