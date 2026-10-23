/* SledgeBro__executeState_DieFumi
 * address: 0x602D6C20   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7F8C
// 
// Overridden by: None
float __fastcall SledgeBro__executeState_DieFumi(int a1)
{
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6856));
  return Enemy__executeState_DieFumi((CollisionActor *)a1);
}
