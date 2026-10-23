/* ParaGoomba__collisionGroundPound
 * address: 0x60363B68   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6454
// 
// Overridden by: None
signed int __fastcall ParaGoomba__collisionGroundPound(int a1, int a2, int a3)
{
  if ( !FIELD_U8(a1, 6843) )
    sub_603FFD60(dword_60C99DD4 + 852);
  return Enemy__collisionGroundPound((int *)a1, a2, a3);
}
