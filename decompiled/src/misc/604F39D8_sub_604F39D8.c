/* sub_604F39D8
 * address: 0x604F39D8   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F39D8(int a1)
{
  int v2; // r10
  int v3; // r11
  int v4; // r8
  int v5; // r6
  int v6; // r9
  int v7; // r5
  int v8; // r7
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v13; // [sp+4h] [bp-44h]
  int v14; // [sp+8h] [bp-40h]
  int v15; // [sp+Ch] [bp-3Ch]
  int v16; // [sp+10h] [bp-38h]
  int v17; // [sp+14h] [bp-34h]
  _DWORD *v18; // [sp+18h] [bp-30h]
  int v19; // [sp+1Ch] [bp-2Ch]
  int v20; // [sp+20h] [bp-28h]

  v2 = 0;
  v3 = 56124;
  v4 = 56536;
  v5 = 56140;
  v6 = 0;
  v13 = a1 + 74092;
  v17 = a1 + 74080;
  v16 = a1 + 74076;
  v15 = a1 + 74072;
  v19 = a1 + 74060;
  v20 = a1 + 74084;
  v14 = a1 + 74052;
  v18 = (_DWORD *)(a1 + 74460);
  do
  {
    if ( !*(_DWORD *)(v20 + v2) )
      goto LABEL_14;
    v7 = *(_DWORD *)(v19 + v2);
    if ( *v18 != 14 )
    {
      v9 = a1 + v4;
      v10 = *(_DWORD *)(v17 + v2);
      v11 = *(_DWORD *)(v16 + v2);
      *(_DWORD *)(v9 - 8) = *(_DWORD *)(v15 + v2);
      *(_DWORD *)(v9 - 4) = v11;
      *(_DWORD *)(a1 + v4) = v10;
      sub_604056C4((_DWORD *)(a1 + v3), v7);
      v8 = 1;
      if ( v7 == 9 )
        goto LABEL_13;
LABEL_12:
      (*(void (**)(void))(**(_DWORD **)(*(_DWORD *)(a1 + v5) + 12) + 176))();
      goto LABEL_13;
    }
    if ( sub_6074F0C4(v14 + v2) == 1 )
    {
      v8 = 1;
      if ( sub_60405B94(a1 + v3) == 1 )
      {
        v8 = v6;
        *(_BYTE *)(v13 + v2) = 1;
        if ( v7 == 9 )
          goto LABEL_13;
        goto LABEL_12;
      }
    }
    else
    {
      v8 = v6;
    }
    if ( v7 != 9 )
      goto LABEL_12;
LABEL_13:
    v6 = v8;
LABEL_14:
    v2 += 44;
    v5 += 2988;
    v4 += 2988;
    v3 += 2988;
  }
  while ( v2 != 264 );
  return v6;
}
