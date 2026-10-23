/* Fuzzy__splashWater
 * address: 0x602782F0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000EC0
// 
// Overridden by: None
int __fastcall Fuzzy__splashWater(StageActor *a1, Vec2 *a2)
{
  int result; // r0
  int v5; // r3
  int v6; // [sp+4h] [bp-14h] BYREF

  ((void (__fastcall *)(int *, _DWORD, _DWORD, Vec3 *, _DWORD))physics_21893E8)(
    &v6,
    0,
    0,
    &FIELD_U32(a1, 0x6C),
    (unsigned __int8)FIELD_U8(a1, 0x56));
  result = v6;
  if ( v6 != 2 )
  {
    v5 = 4;
    if ( !a1[10]._.field_3C )
      v5 = 6;
    return StageActor__createWaterSplash(a1, a2, 995, v5, "SE_OBJ_CMN_SPLASH");
  }
  return result;
}
