/* CarryableEnemy__ctor
 * address: 0x60271D84   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CarryableEnemy *__fastcall CarryableEnemy__ctor(CarryableEnemy *a1, ActorBuildInfo *a2)
{
  Enemy__ctor(&FIELD_U32(a1, 0x0), a2);
  FIELD_U32(a1, 0x0)._._._._.vtable = (int)CarryableEnemy_vtable;
  FIELD_U32(a1, 0x18C8) = 0;
  *(_WORD *)&FIELD_U8(a1, 0x18CC) = 0;
  memset(&FIELD_U32(a1, 0x189C), 0, 41);
  return a1;
}
