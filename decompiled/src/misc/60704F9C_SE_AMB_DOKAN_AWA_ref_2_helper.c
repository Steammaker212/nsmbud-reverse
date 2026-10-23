/* SE_AMB_DOKAN_AWA_ref_2_helper
 * address: 0x60704F9C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_DOKAN_AWA_ref_2_helper(int result)
{
  int v1; // r2
  int v2; // r1
  int v3; // r3
  int v4; // r0
  int v5; // r2

  if ( !FIELD_U8(result, 6444) && (FIELD_U8(dword_60C99DD4, 1052) & 1) == 0 )
  {
    v1 = FIELD_U8(result, 6320);
    v2 = FIELD_U32(result, 6300) + 10;
    if ( FIELD_U32(result, 6300) == 4 )
    {
      v3 = FIELD_U32(result, 8);
      v4 = TileMgr_instance;
      v2 = 14;
      if ( v1 )
        v5 = 99;
      else
        v5 = 1;
    }
    else
    {
      v4 = TileMgr_instance;
      v3 = 0;
      if ( v1 )
        v5 = 99;
      else
        v5 = 1;
    }
    return sub_6071689C(v4, v2, v5, v3);
  }
  return result;
}
