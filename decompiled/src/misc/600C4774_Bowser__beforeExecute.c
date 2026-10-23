/* Bowser__beforeExecute
 * address: 0x600C4774   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60024CEC
// 
// Overridden by: None
int __fastcall Bowser__beforeExecute(int a1)
{
  signed int v2; // r1
  int result; // r0

  v2 = BossBase__beforeExecute((BossBase *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    FIELD_U8(a1, 7154) = 0;
    return 1;
  }
  return result;
}
