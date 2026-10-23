/* PlantFireball_ctor
 * address: 0x60139918   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

FireballBase *__fastcall PlantFireball_ctor(ActorBuildInfo *a1)
{
  FireballBase *v2; // r0
  FireballBase *result; // r0

  v2 = (FireballBase *)operator_new(0x1A80u);
  result = FireballBase_ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)PlantFireball_vtable;
  *(_DWORD *)&result[1]._._._._.field_10 = 0;
  result[1]._._._._.profile = 0;
  result[1]._._._._.id = 0;
  result[1]._._._._.vtable = 0;
  result[1]._._._._.heap = 0;
  FIELD_U32(result, 0x1870) = FIELD_U32(a1, 0x1C);
  return result;
}
