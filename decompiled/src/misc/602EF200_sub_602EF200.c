/* sub_602EF200
 * address: 0x602EF200   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EF200(int a1)
{
  int v2; // r5
  unsigned int v3; // r1

  if ( (FIELD_U8(a1, 22) & 0x10) == 0 && !FIELD_U8(a1, 7529) )
  {
    SE_EMY_DOWN_SYNC_ref(FIELD_U32(EnemyCounterMaybe_instance, 240), (float *)(a1 + 108));
    sub_6000A454(EnemyCounterMaybe_instance);
    v2 = FIELD_U32(EnemyCounterMaybe_instance, 240);
    if ( v2 >= 0 )
    {
      if ( v2 >= 8 )
        SE_SYS_NICE_S_ref();
      sub_600229B0(0.0, 24.0, dword_60C7F52C, a1, v2);
    }
  }
  v3 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
  return sub_602EE7D8(a1, v3, 0xFFFFFFFF, 0);
}
