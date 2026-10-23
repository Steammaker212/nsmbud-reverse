/* sub_604FDD28
 * address: 0x604FDD28   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FDD28(int result, unsigned int a2)
{
  int v3; // r5
  int v4; // r7
  _BYTE *v5; // r7
  int v6; // t1
  int v7; // r6
  unsigned int v8; // r1

  v3 = result;
  if ( (a2 & 0x80000000) == 0 )
  {
    v4 = result;
    if ( a2 < 0x36 )
      v4 = result + a2;
    v6 = FIELD_U8(v4, 40014);
    v5 = (_BYTE *)(v4 + 40014);
    result = v6;
    if ( v6 )
    {
      v7 = dword_60B035D8[a2 % 9];
      sub_6047EFCC(v3 + 35548, v7);
      *(_BYTE *)(v3 + v7 + 36008) = 1;
      if ( a2 <= 0x35 )
      {
        v8 = *(_DWORD *)(dword_60C99E1C + 4 * a2 + 16);
        if ( v8 <= 0x35 )
          *(_BYTE *)(dword_60C99E1C + 4424 * v8 + 244) = 0;
      }
      *v5 = 0;
      return 0;
    }
  }
  return result;
}
