/* sub_6008F9D4
 * address: 0x6008F9D4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008F9D4(int a1)
{
  int v2; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_getin";
  sub_60421AE4(v2, v4, 0);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  if ( FIELD_U8(a1, 15260) )
  {
    sub_6040810C(dword_60C9A1E8);
    FIELD_U8(a1, 15260) = 0;
  }
  return sub_60813430(a1 + 9476, "SE_BOSS_JR_CROWN_RIDE", 0);
}
