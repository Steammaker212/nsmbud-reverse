/* sub_604C5C04
 * address: 0x604C5C04   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 **__fastcall sub_604C5C04(unsigned __int8 **result)
{
  char v1; // r12
  int v2; // r11
  unsigned __int8 **v3; // r9
  unsigned __int8 *v4; // r7
  int v5; // r0
  bool v6; // zf
  int *v7; // [sp+4h] [bp-34h]
  _DWORD *v8; // [sp+8h] [bp-30h]
  _DWORD *v9; // [sp+Ch] [bp-2Ch]

  v9 = result + 1602;
  result[3533] = (unsigned __int8 *)((unsigned int)result[1602] & 0x10D00);
  result[3534] = 0;
  v8 = result + 3534;
  v2 = dword_60CCF448;
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v7 = (int *)(result + 3533);
    v3 = *(unsigned __int8 ***)(dword_60CCF448 + 220);
    while ( 1 )
    {
      v4 = *v3;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615617200 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v5 = (**(int (__fastcall ***)(unsigned __int8 *, int *))v4)(v4, &dword_60C8C220);
      v6 = v4 == 0;
      if ( v4 )
        v6 = (v5 ^ 1) == 1;
      if ( !v6 )
        break;
      ++v3;
      result = (unsigned __int8 **)(FIELD_U32(v2, 220) + 4 * FIELD_U32(v2, 212));
      if ( v3 == result )
        return result;
    }
    result = (unsigned __int8 **)(*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v4 + 20))(v4);
    if ( result == (unsigned __int8 **)1 )
    {
      result = (unsigned __int8 **)(v4[353] - 3);
      if ( (unsigned int)result <= 1 )
      {
        *v7 = *v9 & 0x10100;
        *v8 = 0;
        return 0;
      }
    }
  }
  return result;
}
