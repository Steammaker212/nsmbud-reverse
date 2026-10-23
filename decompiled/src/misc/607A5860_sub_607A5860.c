/* sub_607A5860
 * address: 0x607A5860   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_607A5860(_DWORD *a1)
{
  float *result; // r0
  float v3; // r2
  int v4; // r3
  int v5; // r0
  float v6; // s0
  int v7; // [sp+0h] [bp-20h] BYREF
  float v8; // [sp+4h] [bp-1Ch]
  int v9; // [sp+8h] [bp-18h]

  (*(void (__fastcall **)(_DWORD *))(*a1 + 1216))(a1);
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 624))(a1, 3);
  a1[307] |= 0x2000000u;
  a1[306] |= 0x100000u;
  a1[2471] = 1065353216;
  Player_changeState((int)a1, (StateBase *)&dword_60CC4BBC, 1);
  PlayerBase_dispatchVirtual3(a1[162], 139, 0.0);
  a1[40] = 0;
  (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1084))(a1, 2800.0);
  a1[2393] = 35;
  a1[2426] = 0;
  result = (float *)sub_6077AFCC(dword_60CBFBC0);
  if ( result )
  {
    v3 = result[28];
    v4 = *((_DWORD *)result + 29);
    v7 = *((_DWORD *)result + 27);
    v8 = v3;
    v9 = v4;
    v5 = *((_DWORD *)result + 1579);
    if ( v5 == 1 )
    {
      v6 = 26.0;
    }
    else
    {
      if ( v5 )
        return (float *)sub_60766B08(a1, (int)&v7);
      v6 = 16.0;
    }
    v8 = v6 + v8;
    return (float *)sub_60766B08(a1, (int)&v7);
  }
  return result;
}
