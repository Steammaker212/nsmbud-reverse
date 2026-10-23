/* SE_OBJ_FIRE_CANNON_BLAZE_ref_2
 * address: 0x60813BE0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FIRE_CANNON_BLAZE_ref_2(_DWORD *a1, const char *a2, int a3, float *a4, float *a5)
{
  int *v6; // r4
  int result; // r0
  _DWORD v8[5]; // [sp+4h] [bp-14h] BYREF

  v6 = SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(a1, (int)a2, a3, a4, a5);
  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = LevelInfo_instance;
    if ( !FIELD_U8(LevelInfo_instance, 16) )
    {
      result = FIELD_U8(LevelInfo_instance, 17);
      if ( result == 20 )
      {
        result = strcmp(a2, "SE_OBJ_FIRE_CANNON_BLAZE");
        if ( v6 )
        {
          if ( !result )
          {
            sub_608A8604(v8, v6);
            if ( v8[0] )
              sub_608B7240(v8[0], 0xFFFF, 0.7);
            return sub_608A86F0(v8);
          }
        }
      }
    }
  }
  return result;
}
