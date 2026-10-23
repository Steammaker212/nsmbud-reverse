/* sub_60236E40
 * address: 0x60236E40   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60236E40(unsigned int a1, int a2, Vec3 *a3, Vec3i *a4, Vec3 *a5)
{
  int v8; // r8
  signed int result; // r0
  EffectData v10; // [sp+8h] [bp+0h] BYREF

  v8 = FIELD_U32(dword_60C8D9DC, 2308);
  if ( a1 <= 3 )
    FIELD_U32(dword_60C8D9DC, 2308) = a1;
  v10.field_34 = 0;
  v10.field_38 = -1;
  EffectData_ctor(&v10);
  result = sub_602375C4(&v10, a2, a3, a4, a5);
  FIELD_U32(dword_60C8D9DC, 2308) = v8;
  return result;
}
