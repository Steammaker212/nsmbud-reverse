/* sub_608D9158
 * address: 0x608D9158   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9158(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  int v6; // r11
  int v9; // r10
  int v10; // r0
  int v11; // r9
  int v12; // r4
  int v13; // r7
  int v14; // r6
  _WORD *v15; // r10
  int v16; // r0
  int v17; // r9
  int v18; // r6
  int v19; // r11
  int v20; // r0
  int i; // r6
  int v23; // [sp+8h] [bp-50h]
  int v24; // [sp+Ch] [bp-4Ch]
  int v26; // [sp+1Ch] [bp-3Ch]
  int v27; // [sp+24h] [bp-34h]
  int v28; // [sp+2Ch] [bp-2Ch]
  char *v29; // [sp+30h] [bp-28h]

  v6 = a1;
  v9 = a2;
  v10 = FIELD_U32(a1, 48);
  if ( v10 < 1 )
    return 1;
  v11 = 0;
  v27 = v6;
  v24 = v6 + 832;
  v23 = v6 + 6400;
  while ( !*(_BYTE *)(FIELD_U32(v6, 20) + 178) )
  {
    v12 = 2;
    v13 = 0;
    if ( v11 + 2 > v10 )
      v12 = v10 - v11;
    v14 = *a3 * v12;
    if ( (*(int (__fastcall **)(_DWORD, unsigned __int8 *, int, _DWORD))(**(_DWORD **)(v6 + 24) + 16))(
           FIELD_U32(v6, 24),
           byte_60CC9900,
           v14,
           0) != v14 )
      return v13;
    if ( v12 >= 1 )
    {
      v26 = v11;
      if ( (a5 & a6) != 0 )
      {
        v28 = v9 + 4 * v11;
        v15 = (_WORD *)(v24 + (v11 << 6));
        v16 = 3 * v11;
        v17 = 0;
        v18 = v23 + (v16 << 6);
        do
        {
          v19 = *a3;
          v29 = (char *)&byte_60CC9900[*a3 * v17];
          qmemcpy((void *)(*(_DWORD *)(v28 + 4 * v17) + a4), &v29[a3[4]], a3[5]);
          nullsub_100();
          v20 = v19 * v17;
          v6 = v27;
          *v15 = byte_60CC9900[v20];
          sub_608CAE64((int)v15, v18, 14 * (a3[2] / 0xEu), (int)v29);
          ++v17;
          v18 += 192;
          v15 += 32;
          FIELD_U32(v27, 804) = FIELD_U32(v27, 788);
        }
        while ( v17 < v12 );
        v11 = v26 + v17;
      }
      else
      {
        for ( i = 0; i < v12; ++i )
        {
          qmemcpy((void *)(*(_DWORD *)(v9 + 4 * v11 + 4 * i) + a4), &byte_60CC9900[*a3 * i + a3[4]], a3[5]);
          nullsub_100();
        }
        v11 += i;
      }
      v9 = a2;
    }
    v10 = FIELD_U32(v6, 48);
    if ( v10 <= v11 )
      return 1;
  }
  return 0;
}
