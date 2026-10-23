/* sub_6058BF88
 * address: 0x6058BF88   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058BF88(int a1)
{
  int *v2; // r1

  FIELD_U8(a1, 7402) = 1;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - 7.0;
  FIELD_U32(a1, 7484) = 0;
  FIELD_U32(a1, 7352) = 0;
  FIELD_U32(a1, 7356) = 1090519040;
  FIELD_U32(a1, 7372) = 1;
  obj_coin_ref(a1);
  FIELD_U16(a1, 7376) = 1;
  FIELD_U32(a1, 7288) = 0;
  sub_60579AE4(a1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  sub_6057A360((StateActor *)a1, 3u);
  sub_6057A2D0(a1, 0);
  sub_6057A210((_DWORD *)a1);
  sub_6057A1D8((_DWORD *)a1);
  FIELD_U32(a1, 7388) = 0;
  sub_6057A4C4(a1);
  FIELD_U32(a1, 3200) |= 0x40000000u;
  FIELD_U32(a1, 3192) |= 0x40000000u;
  FIELD_U32(a1, 3176) |= 0x40000000u;
  FIELD_U32(a1, 3184) |= 0x40000000u;
  if ( (FIELD_U8(a1, 20) & 0xF0) != 0 )
    v2 = &dword_60CAF3F4;
  else
    v2 = &dword_60CAF3D4;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v2);
  return 1;
}
