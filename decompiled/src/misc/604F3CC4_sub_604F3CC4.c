/* sub_604F3CC4
 * address: 0x604F3CC4   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F3CC4(int a1)
{
  int v2; // r4
  int v3; // r1
  unsigned int v4; // r0
  int v5; // r6
  _BOOL4 v6; // r0
  __int16 v7; // r1
  _BOOL4 v8; // r0
  _BOOL4 v9; // r0
  _BOOL4 v10; // r0
  _BOOL4 v11; // r0
  _BOOL4 v12; // r0

  v2 = 0;
  v3 = FIELD_U32(a1, 74456);
  v4 = FIELD_U32(a1, 47116) - 1;
  if ( v4 >= 0xA )
    v4 = 0;
  if ( v3 > 1 )
    return v2;
  v5 = *(_DWORD *)(dword_60CC6D78 + 4 * v4 + 98488);
  if ( !FIELD_U8(a1, 58813) || (v6 = sub_60405ADC(a1 + 56124), v7 = 0, !v6) )
  {
    if ( !FIELD_U8(a1, 61801) || (v8 = sub_60405ADC(a1 + 59112), v7 = 1, !v8) )
    {
      if ( !FIELD_U8(a1, 64789) || (v9 = sub_60405ADC(a1 + 62100), v7 = 2, !v9) )
      {
        if ( !FIELD_U8(a1, 67777) || (v10 = sub_60405ADC(a1 + 65088), v7 = 3, !v10) )
        {
          if ( !FIELD_U8(a1, 70765) || (v11 = sub_60405ADC(a1 + 68076), v7 = 4, !v11) )
          {
            if ( !FIELD_U8(a1, 73753) )
              return v2;
            v12 = sub_60405ADC(a1 + 71064);
            v7 = 5;
            if ( !v12 )
              return v2;
          }
        }
      }
    }
  }
  if ( v5 != 2 )
    return 1;
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(2988 * v7 + a1 + 56140) + 4) + 209) & 8) == 0 )
    return 1;
  return v2;
}
