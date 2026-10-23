/* Goomba__vf2C4
 * address: 0x6033B3A0   size: 56   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033DCA0
// 
// Overridden by: None
int __fastcall Goomba__vf2C4(int a1)
{
  int result; // r0

  GoombaBase__vf2C4(a1);
  result = FIELD_U8(a1, 6705);
  if ( FIELD_U8(a1, 6705) )
  {
    FIELD_U8(a1, 6840) = 0;
    return sub_6033A26C((unsigned int)a1 | 0x100000000LL);
  }
  return result;
}
