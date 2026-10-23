/* sub_607A55B0
 * address: 0x607A55B0   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A55B0(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r6
  int v4; // r5
  float v5; // s16
  float v6; // s0
  bool v7; // zf
  float v8; // s0

  v3 = a1 + 2426;
  result = a1[2426];
  switch ( result )
  {
    case 2:
      JUMPOUT(0x60763AD0);
    case 1:
      v8 = sub_60769BA8();
      result = ((int (__fastcall *)(_DWORD *, float, float))loc_6076A804)(a1, v8, -32.0);
      if ( result == 1 )
      {
        result = sub_603FBEA8(dword_60C99DD4);
        if ( !result )
        {
          a1[306] |= 0x100000u;
          result = 2;
          *v3 = 2;
        }
      }
      break;
    case 0:
      v4 = (*(int (__fastcall **)(_DWORD *))(*a1 + 736))(a1);
      v5 = sub_60769B94();
      v6 = sub_60769B9C();
      result = ((int (__fastcall *)(_DWORD *, float, float, float))loc_6076A75C)(a1, v5, v6, v6);
      v7 = v4 == 1;
      if ( v4 == 1 )
        v7 = result == 1;
      if ( v7 )
      {
        *v3 = 1;
        (*(void (__fastcall **)(_DWORD *))(*a1 + 1216))(a1);
        sub_6076AF84((int)a1);
        result = a1[3008];
        if ( result != 2 )
          return sub_607957D4((int)a1, 4);
      }
      break;
  }
  return result;
}
