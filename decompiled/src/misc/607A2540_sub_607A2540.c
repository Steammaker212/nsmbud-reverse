/* sub_607A2540
 * address: 0x607A2540   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A2540(int a1)
{
  unsigned int v2; // r6
  int v3; // r0
  int result; // r0
  _DWORD v5[2]; // [sp+8h] [bp-48h] BYREF
  _BYTE v6[64]; // [sp+10h] [bp-40h] BYREF

  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "spin";
  (*(void (__fastcall **)(_DWORD, _BYTE *, _DWORD *))(**(_DWORD **)(a1 + 11360) + 144))(FIELD_U32(a1, 11360), v6, v5);
  v2 = FIELD_S8(a1, 84);
  v3 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320));
  sub_60236F24(v2, a1 + 10040, dword_60B0C894[v3], (int)v6, 1);
  result = FIELD_U32(a1, 9944);
  if ( !result )
  {
    Player_changeState(a1, (StateBase *)&dword_60CC4BBC, 1);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1424))(a1);
  }
  return result;
}
