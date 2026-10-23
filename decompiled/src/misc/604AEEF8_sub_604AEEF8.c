/* sub_604AEEF8
 * address: 0x604AEEF8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AEEF8(int a1)
{
  int v2; // r0
  int result; // r0
  bool v4; // zf

  v2 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 9u )
    v2 += 36;
  result = *(_DWORD *)(*(_DWORD *)v2 + 72);
  v4 = result == 0;
  if ( result )
  {
    result = FIELD_U8(a1, 3664);
    v4 = result == 0;
  }
  if ( !v4 )
  {
    StateMgr__execute((StateMgr *)(a1 + 20));
    return sub_60473B58((_DWORD *)(a1 + 36), 9u, 0);
  }
  return result;
}
