/* Goomba__collisionGroundPound
 * address: 0x6033ACEC   size: 136   group: actors
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
int __fastcall Goomba__collisionGroundPound(int a1, int a2, int a3)
{
  int v6; // r7

  v6 = FIELD_U32(a2, 0x40);
  if ( v6 && Actor__getProfileId(*(Actor **)(a2 + 0x40)) == 467 && !FIELD_U8(v6, 6705) )
    sub_603FFD60(dword_60C99DD4 + 852);
  if ( FIELD_U8(a1, 6839) )
    return 1;
  else
    return Enemy__collisionGroundPound((int *)a1, a2, a3);
}
