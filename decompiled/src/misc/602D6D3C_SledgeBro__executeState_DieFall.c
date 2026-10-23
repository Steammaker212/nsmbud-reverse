/* SledgeBro__executeState_DieFall
 * address: 0x602D6D3C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF8
// 
// Overridden by: None
float __fastcall SledgeBro__executeState_DieFall(int a1)
{
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6856));
  return Enemy__executeState_DieFall((CollisionActor *)a1);
}
