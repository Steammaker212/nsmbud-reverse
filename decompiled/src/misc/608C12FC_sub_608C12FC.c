/* sub_608C12FC
 * address: 0x608C12FC   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C12FC(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v6; // r6
  int v9; // r0
  _DWORD *v10; // r5
  int v11; // r1
  _DWORD *v12; // r10
  _DWORD *v13; // r11
  _DWORD *v14; // r6
  signed int v15; // r7
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  int v18; // t1
  _DWORD *v19; // r0
  _DWORD *v20; // r1
  int v21; // r0
  unsigned int v24; // [sp+0h] [bp-30h]
  char v25; // [sp+4h] [bp-2Ch] BYREF
  char v26; // [sp+5h] [bp-2Bh]
  int v27; // [sp+8h] [bp-28h]

  v6 = 0;
  if ( (a5 & 0x3F) == 0 )
  {
    v25 = byte_60CC8D12;
    v26 = byte_60CC8D13;
    v27 = dword_60C5AF24;
    v9 = sub_608B0CEC((int)&v25);
    v10 = a1;
    v25 = byte_60CC8D12;
    v26 = byte_60CC8D13;
    v27 = dword_60C5AF24;
    v11 = 2 * v9 + 57112;
    if ( !v9 )
      v11 = 57088;
    sub_608C1500(a1, a5, (v11 * a2 + 63) & 0xFFFFFFC0, &v25);
    v12 = (_DWORD *)*a3;
    if ( (*a3 & 0x3F) == 0 )
    {
      v13 = &v12[2512 * a2];
      if ( (int)v13 - a4 <= 0 )
      {
        v24 = 10048 * a2;
        if ( (unsigned int)(10048 * a2) >= 0x2740 )
        {
          v14 = v10 + 13;
          v15 = 0;
          v16 = (_DWORD *)*a3;
          do
          {
            v17 = (_DWORD *)sub_608D70DC(v16);
            v18 = v17[2498];
            v17 += 2498;
            ++v15;
            *v17 = *v14;
            FIELD_U32(v18, 4) = v14;
            *(_DWORD *)(*v14 + 4) = v17;
            v16 = v17 + 14;
            *v14 = v18;
          }
          while ( v15 < (int)(v24 / 0x2740) );
        }
        v10[11] = v12;
        v10[12] = v24;
        *a3 = v13;
        v19 = v10 + 6;
        v20 = (_DWORD *)v10[7];
        if ( v20 != v10 + 6 )
        {
          do
          {
            v20[103] = v10 + 8;
            v20 = (_DWORD *)v20[1];
          }
          while ( v20 != v19 );
        }
        v21 = sub_608C3C60(v19);
        sub_608C406C(v21, v10 + 8);
        return 1;
      }
    }
  }
  return v6;
}
