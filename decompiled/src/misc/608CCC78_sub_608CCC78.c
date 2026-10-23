/* sub_608CCC78
 * address: 0x608CCC78   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CCC78(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  int v8; // r6
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r5
  unsigned int v12; // r1
  _DWORD *v13; // r6
  signed int v14; // r4
  _DWORD *v15; // r7
  _DWORD *v16; // r0
  _DWORD *v17; // r4
  _DWORD *i; // r1
  int *v19; // r0
  unsigned int v21; // [sp+0h] [bp-40h]
  unsigned int v22; // [sp+4h] [bp-3Ch]
  _BYTE v23[4]; // [sp+14h] [bp-2Ch] BYREF
  int v24; // [sp+18h] [bp-28h]

  v8 = 0;
  if ( (*(_BYTE *)a3 & 0x3F) == 0 )
  {
    v23[0] = byte_60CC8D12;
    v23[1] = byte_60CC8D13;
    v24 = dword_60C5AF24;
    v9 = sub_608B0CEC((int)v23);
    v10 = 2 * v9 + 792;
    if ( !v9 )
      v10 = 768;
    v11 = *a3 + ((v10 * a2 + 63) & 0xFFFFFFC0);
    if ( (int)(v11 - a4) <= 0 )
    {
      sub_608CCE8C(a1);
      *a3 = v11;
      v12 = (792 * a2 + 63) & 0xFFFFFFC0;
      if ( (int)(v11 + v12 - a4) <= 0 )
      {
        v21 = v11 + v12;
        v22 = (792 * a2 + 63) & 0xFFFFFFC0;
        if ( v12 >= 0x318 )
        {
          v13 = (_DWORD *)v11;
          v14 = 0;
          v15 = a1 + 13;
          do
          {
            sub_608C4D44(v13);
            *v13 = off_60C5BA48;
            v13[12] = 0;
            v13[13] = 0;
            v13[14] = 0;
            v13[15] = -1;
            v13[16] = 0;
            v13[17] = 0;
            v13[18] = 0;
            v13[19] = 0;
            sub_608C4D44(v13 + 23);
            v13[23] = off_60C5BA68;
            v13[35] = 0;
            v13[36] = 0;
            v13[37] = 0;
            v13[38] = -1;
            v13[39] = 0;
            v13[40] = 0;
            sub_608D3F88(v13 + 43);
            v16 = v13 + 196;
            ++v14;
            v13[196] = v13 + 196;
            v13[197] = v13 + 196;
            v13[196] = *v15;
            v13[197] = v15;
            v13 += 198;
            *(_DWORD *)(*v15 + 4) = v16;
            *v15 = v16;
          }
          while ( v14 < (int)(v22 / 0x318) );
        }
        a1[11] = v11;
        v17 = a1 + 8;
        a1[12] = v22;
        *a3 = v21;
        for ( i = (_DWORD *)a1[7]; i != a1 + 6; i = (_DWORD *)i[1] )
          i[77] = v17;
        v19 = sub_608C3C60();
        sub_608C406C(v19, v17);
        return 1;
      }
    }
  }
  return v8;
}
