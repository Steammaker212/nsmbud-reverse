/* Goomba__collisionPropellerDrill
 * address: 0x6033AD7C   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6128
// 
// Overridden by: None
int __fastcall Goomba__collisionPropellerDrill(int *a1, int a2, int a3)
{
  int v6; // r7

  v6 = FIELD_U32(a2, 64);
  if ( v6 && Actor__getProfileId(*(Actor **)(a2 + 64)) == 467 && !FIELD_U8(v6, 6705) )
    sub_603FFD60(dword_60C99DD4 + 852);
  return Enemy__collisionPropellerDrill(a1, a2, a3);
}
