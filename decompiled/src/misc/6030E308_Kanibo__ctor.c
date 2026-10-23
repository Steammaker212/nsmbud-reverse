/* Kanibo__ctor
 * address: 0x6030E308   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Kanibo__ctor(ActorBuildInfo *a1)
{
  Enemy *this; // r4

  this = (Enemy *)operator_new(0x1950u);
  Enemy__ctor(this, a1);
  FIELD_U32(this, 0x0)._._._.vtable = (int)off_60BE9A30;
  this[1]._._._._.vtable = 0;
  this[1]._._._._.heap = ((unsigned int)FIELD_U32(this, 0x0)._._._.settings1 >> 8) & 1;
  *(_DWORD *)&this[1]._._._._.field_10 = 0;
  this[1]._._._._.profile = 0;
  this[1]._._._._.id = 0;
  *(_DWORD *)&this[1]._._._._.movementId = 0;
  this[1]._._._._.settigns2 = 0;
  this[1]._._._._.settings1 = 0;
  this[1]._._._._.childCount = 0;
  this[1]._._._._.field_20.next = 0;
  this[1]._._._._.field_20.previous = 0;
  this[1]._._._._.field_2C = 5;
  this[1]._._._._.field_30 = 0;
  this[1]._._._._.field_34 = 0;
  LOBYTE(this[1]._._._._.parent) = 0;
  this[1]._._._._.field_3C = 0;
  sub_602A8564(&this[1]._._._._.field_40, FIELD_U32(this, 0x0)._._._.id);
  sub_602A40A0(&this[1]._._._.field_64, FIELD_U32(this, 0x0)._._._.id);
  LODWORD(this[1]._._._.maxSpeed.y) = &ActorScaler_vtable;
  this[1]._._._.maxSpeed.z = 1.0;
  this[1]._._._.scale.x = 1.0;
  this[1]._._._.scale.y = 1.0;
  this[1]._._._.scale.z = 1.0;
  this[1]._._._.rotation.x = 0;
  this[1]._._._.rotation.y = 0;
  this[1]._._._.rotation.z = (int)this;
  this[1]._._._.field_A8 = (int)&off_60BE9CD4;
  LOBYTE(this[1]._._._.field_AC) = 0;
  FIELD_U32(this, 0x0)._._.direction = (FIELD_U32(this, 0x0)._._._.settings1 & 1) == 0;
  FIELD_U8(this, 0x189A) = 4;
  return this;
}
