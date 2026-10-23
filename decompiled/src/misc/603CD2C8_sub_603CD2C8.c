/* sub_603CD2C8
 * address: 0x603CD2C8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CD2C8(int a1)
{
  return EffectData_create(dword_60AF2118[FIELD_U32(a1, 6300)], (Vec3 *)(a1 + 108), 0, 0);
}
