/* Player_executeState_Stunned
 * address: 0x607A214C   size: 252   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_executeState_Stunned(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  unsigned int v6; // r6
  int v7; // r0
  int result; // r0
  _DWORD v9[2]; // [sp+8h] [bp-48h] BYREF
  _BYTE v10[64]; // [sp+10h] [bp-40h] BYREF

  v4 = a1[3200];
  v2 = a1 + 3200;
  v3 = v4;
  if ( !v4 || (v5 = v3 - 1, (*v2 = v5) == 0) )
  {
    *v2 = 5;
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 1056))(a1, 9);
  }
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "spin";
  (*(void (__fastcall **)(_DWORD, _BYTE *, _DWORD *))(*(_DWORD *)a1[2840] + 144))(a1[2840], v10, v9);
  v6 = *((char *)a1 + 84);
  v7 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330]);
  sub_60236F24(v6, (int)(a1 + 2510), dword_60B0C888[v7], (int)v10, 1);
  result = a1[2487];
  if ( result == 1 )
  {
    result = a1[2486];
    if ( !result )
      return Player_changeState((int)a1, (StateBase *)&dword_60CC4BBC, 1);
  }
  return result;
}
