/* ActiveCollider_ctor
 * address: 0x60158C7C   size: 120   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveCollider *__fastcall ActiveCollider_ctor(ActiveCollider *a1)
{
  sead_IDisposer_ctor(&FIELD_U32(a1, 0x0));
  FIELD_U32(a1, 0x0) = (int)ActiveCollider_vtable;
  FIELD_U32(a1, 0x10) = a1;
  FIELD_U32(a1, 0x14) = 0;
  FIELD_U32(a1, 0x18) = 0;
  FIELD_U32(a1, 0x1C) = a1;
  FIELD_U32(a1, 0x20) = 0;
  FIELD_U32(a1, 0x24) = 0;
  FIELD_U32(a1, 0x28) = a1;
  FIELD_U32(a1, 0x2C) = 0;
  FIELD_U32(a1, 0x30) = 0;
  FIELD_U32(a1, 0x34) = a1;
  memset(&FIELD_U32(a1, 0x38), 0, 0x34);
  FIELD_U8(a1, 0x6C) = 1;
  FIELD_U8(a1, 0x6D) = 0;
  FIELD_U8(a1, 0x6E) = 0;
  memset(&FIELD_U32(a1, 0x70), 0, 0xC0);
  return a1;
}
