/* sub_608B9BD8
 * address: 0x608B9BD8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608B9BD8(int a1, _DWORD *a2, unsigned int a3)
{
  signed int v3; // r11
  _DWORD *v4; // r6
  signed int v5; // r10
  int v6; // r5
  _DWORD *v7; // r0

  v3 = a3 / 0x370;
  if ( a3 >= 0x370 )
  {
    v4 = a2;
    v5 = 0;
    v6 = a1 + 20;
    do
    {
      sub_608C4D44(v4);
      *v4 = off_60C5B0F0;
      v4[12] = 0;
      v4[13] = 0;
      v4[14] = 0;
      v4[15] = -1;
      v4[16] = 0;
      v4[17] = -1;
      v4[18] = 0;
      v4[19] = -1;
      v4[20] = 0;
      v4[21] = -1;
      v4[22] = 0;
      v4[23] = -1;
      memset(v4 + 24, 0, 44);
      sub_608C4D44(v4 + 38);
      v4[38] = off_60C5B110;
      v4[50] = 0;
      v4[51] = 0;
      v4[52] = 0;
      v4[53] = -1;
      v4[54] = 0;
      v4[55] = -1;
      v4[56] = 0;
      v4[57] = -1;
      v4[58] = 0;
      v4[59] = -1;
      v4[60] = 0;
      v4[61] = -1;
      v4[62] = 0;
      sub_608D3F88(v4 + 65);
      v7 = v4 + 218;
      ++v5;
      v4[218] = v4 + 218;
      v4[219] = v4 + 218;
      v4[218] = *(_DWORD *)v6;
      v4[219] = v6;
      v4 += 220;
      *(_DWORD *)(*(_DWORD *)v6 + 4) = v7;
      *(_DWORD *)v6 = v7;
    }
    while ( v5 < v3 );
  }
  FIELD_U32(a1, 12) = a2;
  FIELD_U32(a1, 16) = a3;
  return v3;
}
