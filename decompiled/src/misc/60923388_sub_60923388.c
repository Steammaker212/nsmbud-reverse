/* sub_60923388
 * address: 0x60923388   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_60923388(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v9; // r10
  _DWORD *v10; // r5
  int v11; // r2
  _WORD *v12; // r2
  int v13; // r2
  int v14; // r3
  int v15; // r4
  int v16; // r5
  int v17; // r6
  int *v18; // r12
  int *v19; // lr
  int v20; // r2
  int v21; // r5
  int v22; // r4
  char *v24; // [sp+0h] [bp-50h]
  int v25; // [sp+10h] [bp-40h]
  int v26; // [sp+14h] [bp-3Ch]
  int v27; // [sp+18h] [bp-38h]
  int v28; // [sp+1Ch] [bp-34h]
  int v29; // [sp+20h] [bp-30h]
  int v30; // [sp+24h] [bp-2Ch]

  v9 = word_60CD08A8++;
  dword_60CCFCA4 = word_60CD08A8;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  dword_60CCFCA8[6 * v9] = a1[1];
  v10 = &dword_60CCFCA8[6 * v9];
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v10[1] = a2[1];
  v10[2] = a3;
  v10[3] = a4;
  v10[4] = v9;
  v10[5] = a5;
  word_60CD08AA[v9] = v9;
  v24 = (char *)&word_60CD08AA[v9];
  if ( v9 >= 1 )
  {
    while ( 1 )
    {
      v18 = &dword_60CCFCA8[6 * v9];
      v19 = v18 - 6;
      v20 = *(v18 - 3);
      if ( a4 >= v20 )
      {
        if ( a4 != v20 )
          break;
        v21 = *v19;
        if ( *v18 == *v19 )
          break;
        v11 = 0;
        while ( 1 )
        {
          v22 = *(unsigned __int8 *)(*v18 + v11);
          if ( v22 != *(unsigned __int8 *)(v21 + v11) )
            break;
          if ( *(_BYTE *)(*v18 + v11) )
          {
            if ( ++v11 < 0x80000 )
              continue;
          }
          return v24;
        }
        if ( v22 - *(unsigned __int8 *)(v21 + v11) >= 0 )
          break;
      }
      --word_60CD08AA[dword_60CCFCA8[6 * v9 + 4]];
      v12 = &word_60CD08AA[dword_60CCFCA8[6 * v9 - 2]];
      ++*v12;
      v25 = *v19;
      v26 = *(v18 - 5);
      v27 = *(v18 - 4);
      v28 = *(v18 - 3);
      v29 = *(v18 - 2);
      v30 = *(v18 - 1);
      v13 = v18[1];
      v14 = v18[2];
      v15 = v18[3];
      v16 = v18[4];
      v17 = v18[5];
      *v19 = *v18;
      *(v18 - 5) = v13;
      *(v18 - 4) = v14;
      *(v18 - 3) = v15;
      *(v18 - 2) = v16;
      *(v18 - 1) = v17;
      *v18 = v25;
      v18[1] = v26;
      v18[2] = v27;
      v18[3] = v28;
      v18[4] = v29;
      v18[5] = v30;
      if ( v9 < 2 )
        break;
      a4 = *(v18 - 3);
      --v9;
    }
  }
  return v24;
}
