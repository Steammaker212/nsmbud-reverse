/* sub_602EEF20
 * address: 0x602EEF20   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EEF20(int a1, StageActor *a2, int a3)
{
  unsigned int playerId; // r4
  int v7; // r1
  int *v8; // r7
  signed int v9; // r8

  playerId = FIELD_U8(a2, 0x54);
  if ( playerId >= 4 )
  {
    v8 = *(int **)(a1 + 56);
  }
  else
  {
    sub_60000A18(a2);
    v7 = FIELD_U32(a2, 0x234);
    v8 = *(int **)(a1 + 56);
    if ( v7 >= 0 )
    {
      v9 = sub_602856EC(v8 + 1573, v7);
      if ( v9 >= 8 )
        SE_SYS_NICE_S_ref();
      sub_60022760(0.0, 24.0, dword_60C7F52C, a1, v9, playerId);
    }
  }
  sub_602EE7D8(a1, a3, 0xFFFFFFFF, 0);
  return (*(int (__fastcall **)(int *, unsigned int))(*v8 + 68))(v8, playerId);
}
