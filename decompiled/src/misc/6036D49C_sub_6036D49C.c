/* sub_6036D49C
 * address: 0x6036D49C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036D49C(int a1)
{
  int result; // r0
  int v3; // r5

  result = FIELD_U8(a1, 7309);
  if ( !result )
  {
    result = FIELD_U8(a1, 7310);
    if ( !FIELD_U8(a1, 7310) )
    {
      SE_EMY_DOWN_SYNC_ref(FIELD_U32(EnemyCounterMaybe_instance, 240), (float *)(a1 + 108));
      sub_6000A454(EnemyCounterMaybe_instance);
      v3 = FIELD_U32(EnemyCounterMaybe_instance, 240);
      if ( v3 >= 0 )
      {
        if ( v3 >= 8 )
          SE_SYS_NICE_S_ref();
        sub_600229B0(0.0, 24.0, dword_60C7F52C, a1, v3);
      }
      return SE_OBJ_PNGN_ICE_BREAK_ref_36CFB4(a1, 0);
    }
  }
  return result;
}
