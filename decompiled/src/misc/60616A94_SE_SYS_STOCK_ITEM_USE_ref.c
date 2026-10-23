/* SE_SYS_STOCK_ITEM_USE_ref
 * address: 0x60616A94   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_STOCK_ITEM_USE_ref(int a1)
{
  int result; // r0
  __int16 v3; // r1
  int v4; // t1

  v4 = FIELD_U16(a1, 7090);
  result = a1 + 7090;
  v3 = v4;
  if ( v4 )
  {
    *(_WORD *)result = v3 - 1;
  }
  else
  {
    if ( !FIELD_U8(dword_60C9A1F0, 6515) )
    {
      sub_60807EF0(SoundSystem_instance, "SE_SYS_STOCK_ITEM_USE", 0, 1);
      sub_606C8974(a1);
    }
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
