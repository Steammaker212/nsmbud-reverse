/* sub_6084409C
 * address: 0x6084409C   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084409C(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // r6
  int *v6; // r5
  int v7; // r8
  int v8; // r7
  int v9; // r4
  int v10; // r8
  int v11; // r0
  void *v12; // r6
  const void *v13; // r0
  int v14; // r0
  void *v15; // r8
  const void *v16; // r0
  int v19; // [sp+4h] [bp-54h]
  int v22; // [sp+14h] [bp-44h]
  int v23; // [sp+18h] [bp-40h]
  int v24; // [sp+1Ch] [bp-3Ch]
  int v25; // [sp+20h] [bp-38h]
  int v26; // [sp+28h] [bp-30h] BYREF
  int v27; // [sp+2Ch] [bp-2Ch]
  int v28; // [sp+30h] [bp-28h]
  int v29; // [sp+34h] [bp-24h]

  v5 = 0;
  do
  {
    v6 = (int *)(a1 + 296 * v5);
    v7 = sub_60847974(a5, v5);
    v24 = sub_60847984(a5, v5);
    sub_6083DE20((int)(v6 + 56), 2);
    v25 = (int)(v6 + 56);
    sub_6083DDE8(v6 + 56, 6);
    v8 = 0;
    v19 = v5;
    v23 = a5 + v7;
    v22 = a5 + 80 * v5 + 16;
    do
    {
      v9 = v8;
      if ( v8 != 1 )
        v9 = -1;
      if ( !v8 )
        v9 = 0;
      if ( v9 < 0 )
      {
        sub_6083DDF0(v25, v8, (int)(v6 + 2), *v6);
      }
      else
      {
        v29 = 0;
        v28 = 0;
        v27 = 0;
        v26 = 0;
        sub_6083D5B0(&v26);
        v27 = 4;
        v26 = sub_60847BD8(v22, v8);
        v10 = (int)&v6[18 * v9 + 2];
        sub_6083DDF0(v25, v8, v10, v26);
        v11 = sub_608352A0(a3, (int)&v26);
        sub_60847820(a4, v11);
        sub_60843650(v10, a4, a3, &v26);
        v12 = (void *)sub_608354C4(v10);
        v13 = (const void *)sub_60847BCC(v22, v23, v24, v8);
        qmemcpy(v12, v13, v26);
        nullsub_66();
        v6[v9] = v26;
      }
      ++v8;
    }
    while ( v8 != 5 );
    v29 = 0;
    v28 = 0;
    v27 = 0;
    v26 = 0;
    sub_6083D5B0(&v26);
    v27 = 8;
    v26 = 2 * sub_60847BF0(v22);
    v14 = sub_60847BF0(v22);
    sub_6083DE00(v25, (int)(v6 + 38), v14);
    sub_60843650((int)(v6 + 38), a4, a3, &v26);
    v15 = (void *)sub_608354C4((int)(v6 + 38));
    v16 = (const void *)sub_60847BE4(v22, v23, v24);
    qmemcpy(v15, v16, v26);
    nullsub_66();
    v5 = v19 + 1;
  }
  while ( v19 != 1 );
  return 0;
}
