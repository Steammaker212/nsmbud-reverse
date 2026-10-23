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
  FIELD_U32(a1, 0x0).vtable = (int)ActiveCollider_vtable;
  FIELD_U32(a1, 0x10).owner = a1;
  FIELD_U32(a1, 0x10).next = 0;
  FIELD_U32(a1, 0x10).prev = 0;
  FIELD_U32(a1, 0x1C).owner = a1;
  FIELD_U32(a1, 0x1C).next = 0;
  FIELD_U32(a1, 0x1C).prev = 0;
  FIELD_U32(a1, 0x28).owner = a1;
  FIELD_U32(a1, 0x28).next = 0;
  FIELD_U32(a1, 0x28).prev = 0;
  FIELD_U32(a1, 0x34).owner = a1;
  memset(&FIELD_U32(a1, 0x34).next, 0, 0x34);
  FIELD_U8(a1, 0x6C) = 1;
  FIELD_U8(a1, 0x6D) = 0;
  FIELD_U8(a1, 0x6E) = 0;
  memset(&FIELD_U32(a1, 0x70), 0, 0xC0);
  return a1;
}
