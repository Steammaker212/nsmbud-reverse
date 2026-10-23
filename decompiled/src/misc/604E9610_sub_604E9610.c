/* sub_604E9610
 * address: 0x604E9610   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E9610(int a1)
{
  float v2; // s0
  int result; // r0
  int v4; // s0

  v2 = sub_603FC760(dword_60C99DE4);
  result = 99999;
  v4 = (int)(float)(v2 * 100.0);
  if ( v4 < 99999 )
    result = v4;
  if ( FIELD_U32(a1, 552) != result )
  {
    FIELD_U32(a1, 552) = result;
    sub_6047DEC8(*(_DWORD **)(a1 + 4), **(_DWORD **)(a1 + 12), 2);
    return SE_SYS_CH_TARGET_MEDAL_ref(a1, (FIELD_U32(a1, 552) + 99) / 100);
  }
  return result;
}
