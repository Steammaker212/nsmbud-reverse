/* BlockBase__vf160
 * address: 0x60563E44   size: 140   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BlockBase__vf160(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1

  v2 = sub_605B9FEC(dword_60CB061C, a1 + 6980, FIELD_U8(LevelInfo_instance, 18));
  if ( v2 == 3 )
  {
    if ( !FIELD_U32(a1, 7372) )
    {
      v3 = 6856;
      v4 = 12;
      goto LABEL_7;
    }
    return 1;
  }
  if ( v2 != 2 )
  {
    if ( v2 == 1 )
    {
      FIELD_U32(a1, 7368) = 2;
      v3 = 7296;
      v4 = 50;
LABEL_7:
      *(_DWORD *)(a1 + v3) = v4;
      return 1;
    }
    return 1;
  }
  return 0;
}
