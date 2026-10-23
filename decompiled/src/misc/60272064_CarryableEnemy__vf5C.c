/* CarryableEnemy__vf5C
 * address: 0x60272064   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x6000279C
// 
// Overridden by: None
int __fastcall CarryableEnemy__vf5C(CarryableEnemy *this, StageActor *other)
{
  int v4; // r1
  int v5; // r2
  int *v6; // r6

  v4 = dword_60C8EB18;
  v5 = dword_60C8EB1C;
  FIELD_U32(this, 0x18A4) = dword_60C8EB20;
  FIELD_U32(this, 0x18A0) = v5;
  FIELD_U32(this, 0x189C) = v4;
  FIELD_U8(this, 0x18CD) = 1;
  FIELD_U8(this, 0x18C4) = FIELD_U8(other, 0x54);
  v6 = &FIELD_U32(this, 0x18C8);
  (*(void (__fastcall **)(CarryableEnemy *, _DWORD))(FIELD_U32(this, 0x0)._._._._.vtable + 68))(this, FIELD_U8(other, 0x54));
  *v6 = FIELD_U32(other, 0x0).id;
  return (*(int (__fastcall **)(CarryableEnemy *, State *))(FIELD_U32(this, 0x0)._._._._.vtable + 0xC0))(this, &stru_60C8EA70);
}
