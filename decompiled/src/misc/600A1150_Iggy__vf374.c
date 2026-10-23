/* Iggy__vf374
 * address: 0x600A1150   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600AB700
// 
// Overridden by: None
int __fastcall Iggy__vf374(int a1)
{
  char v2; // r2
  int result; // r0

  v2 = FIELD_U8(a1, 7176);
  result = 1;
  if ( (v2 & 2) == 0 )
  {
    result = FIELD_U8(a1, 8160);
    if ( FIELD_U8(a1, 8160) )
      return 1;
  }
  return result;
}
