/* sub_607A950C
 * address: 0x607A950C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A950C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r0
  int result; // r0

  a1[2393] = 0;
  a1[2394] = 0;
  a1[2395] = 0;
  sub_607B7008(a1);
  a1[303] |= 0x20000000u;
  v2 = sub_607C70B0(a1);
  if ( v2 )
  {
    v3 = FIELD_U32(v2, 108);
    v4 = a1[29];
    v5 = FIELD_U32(v2, 112);
    a1[27] = v3;
    a1[28] = v5;
    a1[146] = v3;
    a1[147] = v5;
    a1[148] = v4;
    a1[152] = v3;
    a1[153] = v5;
    a1[154] = v4;
  }
  sub_607780C4(dword_60CBFA90, 0);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1080))(a1);
  a1[1725] |= 1u;
  Player_changeState((int)a1, (StateBase *)&dword_60CC4BBC, 0);
  a1[301] &= ~0x10u;
  sub_60766314((int)a1, &stru_60CBF37C, 0);
  result = a1[307] | 0x20000;
  a1[307] = result;
  return result;
}
