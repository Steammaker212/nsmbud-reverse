/* SE_VCO_YS_DAMAGE_ref_2
 * address: 0x607D3814   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VCO_YS_DAMAGE_ref_2(int a1)
{
  int v2; // r0
  int result; // r0

  sub_607D001C(a1, 0);
  if ( !FIELD_U32(a1, 11356) )
  {
    v2 = sub_607CBC00(a1);
    if ( v2 )
      FIELD_U32(v2, 324) = 0;
  }
  PlayerBase_dispatchVirtual3(a1 + 11364, 148, 0.0);
  sub_607734E8((unsigned __int8 *)a1, (int)"SE_VCO_YS_DAMAGE", 0, 0);
  FIELD_U32(a1, 124) = 1077936128;
  FIELD_F32(a1, 88) = flt_60B0A898[FIELD_U32(a1, 80)];
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1084))(a1, 5500.0);
  result = FIELD_U32(a1, 1232) | 0x20000000;
  FIELD_U32(a1, 1232) = result;
  return result;
}
