/* sub_60353564
 * address: 0x60353564   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60353564(int a1)
{
  bool v2; // zf

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  v2 = FIELD_U8(a1, 6416) == 0;
  if ( FIELD_U8(a1, 6416) )
    v2 = FIELD_U8(a1, 6329) == 0;
  if ( !v2 )
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 6412) + 12));
  return Enemy__executeState_DieFumi((CollisionActor *)a1);
}
