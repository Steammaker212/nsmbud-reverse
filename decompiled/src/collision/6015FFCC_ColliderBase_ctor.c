/* ColliderBase_ctor
 * address: 0x6015FFCC   size: 272   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderBase *__fastcall ColliderBase_ctor(ColliderBase *this)
{
  sead_IDisposer_ctor(&FIELD_U32(this, 0x0));
  FIELD_U32(this, 0x0) = (int)ColliderBase_vtable;
  FIELD_U32(this, 0x10)[0].owner = this;
  FIELD_U32(this, 0x10)[0].next = 0;
  FIELD_U32(this, 0x10)[0].prev = 0;
  FIELD_U32(this, 0x10)[1].owner = this;
  FIELD_U32(this, 0x10)[1].next = 0;
  FIELD_U32(this, 0x10)[1].prev = 0;
  FIELD_U32(this, 0x10)[2].owner = this;
  FIELD_U32(this, 0x10)[2].next = 0;
  FIELD_U32(this, 0x10)[2].prev = 0;
  FIELD_U32(this, 0x10)[3].owner = this;
  FIELD_U32(this, 0x10)[3].next = 0;
  FIELD_U32(this, 0x10)[3].prev = 0;
  FIELD_U32(this, 0x10)[4].owner = this;
  FIELD_U32(this, 0x10)[4].next = 0;
  FIELD_U32(this, 0x10)[4].prev = 0;
  FIELD_U32(this, 0x10)[5].owner = this;
  FIELD_U32(this, 0x10)[5].next = 0;
  FIELD_U32(this, 0x10)[5].prev = 0;
  FIELD_U32(this, 0x10)[6].owner = this;
  FIELD_U32(this, 0x10)[6].next = 0;
  FIELD_U32(this, 0x10)[6].prev = 0;
  FIELD_U32(this, 0x10)[7].owner = this;
  FIELD_U32(this, 0x10)[7].next = 0;
  FIELD_U32(this, 0x10)[7].prev = 0;
  FIELD_F32(this, 0x70) = 3.4028e38;
  FIELD_F32(this, 0x74) = 3.4028e38;
  FIELD_F32(this, 0x78) = -3.4028e38;
  FIELD_F32(this, 0x7C) = -3.4028e38;
  memset(&FIELD_U32(this, 0x80), 0, 0x5D);
  FIELD_U32(this, 0xE0) = 3;
  FIELD_U32(this, 0xE4) = 0;
  FIELD_U32(this, 0xE8) = 0;
  FIELD_U32(this, 0xEC) = 0;
  FIELD_U32(this, 0xF0) = 0;
  FIELD_U32(this, 0xF4) = 0;
  FIELD_U32(this, 0xF8) = 0;
  FIELD_U32(this, 0xFC) = (int)off_60BD49A0;
  FIELD_U32(this, 0x120) = (int)off_60BD49A0;
  FIELD_U32(this, 0x100) = 0;
  FIELD_U32(this, 0x104) = 0;
  FIELD_U32(this, 0x108) = (int)off_60BD49A0;
  FIELD_U32(this, 0x10C) = 0;
  FIELD_U32(this, 0x110) = 0;
  FIELD_U32(this, 0x114) = (int)off_60BD49A0;
  FIELD_U32(this, 0x118) = 0;
  FIELD_U32(this, 0x11C) = 0;
  memset(&FIELD_U32(this, 0x124), 0, 0x30);
  return this;
}
