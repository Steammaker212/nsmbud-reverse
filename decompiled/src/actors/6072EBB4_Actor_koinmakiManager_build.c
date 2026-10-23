/* Actor_koinmakiManager_build
 * address: 0x6072EBB4   size: 136   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_koinmakiManager_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r4
  char *p_y; // r5
  int i; // r1
  char *v5; // r2

  v2 = (StateActor *)operator_new(0x18E0u);
  StateActor_ctor(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60C22374;
  p_y = (char *)&v2[1]._._.maxSpeed.y;
  memset(&v2[1], 0, 264);
  for ( i = 0; i != 120; i += 8 )
  {
    v5 = &p_y[i];
    *((_DWORD *)v5 - 30) = 0;
    *(_DWORD *)&p_y[i] = 0;
    *((_DWORD *)v5 - 29) = 0;
    *((_DWORD *)v5 + 1) = 0;
  }
  v2[1]._._.aCollider.field_48 = 0;
  v2[1]._._.aCollider.field_44 = 0;
  return v2;
}
