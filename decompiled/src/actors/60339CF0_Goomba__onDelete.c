/* Goomba__onDelete
 * address: 0x60339CF0   size: 76   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033C7A8
// 
// Overridden by: None
int __fastcall Goomba__onDelete(int a1)
{
  int v1; // r1
  bool v2; // cc
  int v3; // r1
  int v5; // r1
  int v6; // r1

  if ( FIELD_U8(a1, 6705) )
  {
    v1 = FIELD_U32(EnemyCounterMaybe_instance, 176);
    v2 = v1 < 1;
    v3 = v1 - 1;
    if ( v2 )
      v3 = 0;
    FIELD_U32(EnemyCounterMaybe_instance, 176) = v3;
    return 1;
  }
  else
  {
    v5 = FIELD_U32(EnemyCounterMaybe_instance, 172);
    v2 = v5 < 1;
    v6 = v5 - 1;
    if ( v2 )
      v6 = 0;
    FIELD_U32(EnemyCounterMaybe_instance, 172) = v6;
    return 1;
  }
}
