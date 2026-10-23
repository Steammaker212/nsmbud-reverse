/* sub_60799358
 * address: 0x60799358   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60799358(int a1)
{
  _BOOL4 v2; // r1
  int result; // r0
  int v4; // r0

  v2 = sub_60766AA0(a1);
  result = 0;
  if ( v2 )
  {
    if ( sub_6079D894(a1) )
    {
      v4 = sub_6079D894(a1);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 252))(v4);
    }
    sub_60798E94(a1);
    return 1;
  }
  return result;
}
