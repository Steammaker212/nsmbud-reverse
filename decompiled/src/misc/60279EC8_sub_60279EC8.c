/* sub_60279EC8
 * address: 0x60279EC8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_60279EC8(int a1)
{
  float v2; // s0
  float v3; // s0

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    (*(void (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EE98, v3);
  }
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
}
