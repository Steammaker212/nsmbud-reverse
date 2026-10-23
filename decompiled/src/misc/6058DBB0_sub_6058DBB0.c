/* sub_6058DBB0
 * address: 0x6058DBB0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058DBB0(int a1, float a2, float a3)
{
  int v4; // r1
  int result; // r0

  v4 = sub_60716838(
         TileMgr_instance,
         (unsigned int)FIELD_F32(a1, 108),
         (unsigned int)(float)-FIELD_F32(a1, 112),
         FIELD_U8(a1, 86),
         COERCE_FLOAT((unsigned int)FIELD_F32(a1, 108)),
         a3,
         COERCE_FLOAT((unsigned int)(float)-FIELD_F32(a1, 112)));
  result = 2;
  if ( !v4 )
  {
    if ( (FIELD_U8(a1, 24) & 0x10) != 0 )
      FIELD_U8(a1, 6113) = 1;
    FIELD_U32(a1, 6104) = (FIELD_U32(a1, 20) & 0xF) + 1;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF4C4);
    return 1;
  }
  return result;
}
