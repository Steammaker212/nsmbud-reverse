/* sub_608A8428
 * address: 0x608A8428   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A8428(int a1, int a2)
{
  int v2; // r7
  int v3; // r9
  int v5; // r6
  int v6; // r5
  unsigned int v7; // r8
  int v8; // r10
  int v9; // r8
  int v10; // r6
  int v11; // r0
  unsigned int v12; // r11
  int v13; // r8
  int v14; // r0
  bool v15; // zf
  int v17; // [sp+0h] [bp-68h]
  unsigned int v18; // [sp+4h] [bp-64h]
  int v19; // [sp+Ch] [bp-5Ch]
  int v20; // [sp+10h] [bp-58h] BYREF
  int v21; // [sp+14h] [bp-54h]
  _DWORD v22[3]; // [sp+18h] [bp-50h] BYREF
  int v23; // [sp+24h] [bp-44h] BYREF
  int v24; // [sp+28h] [bp-40h]
  int v25; // [sp+2Ch] [bp-3Ch]
  _DWORD v26[2]; // [sp+30h] [bp-38h] BYREF
  int v27; // [sp+38h] [bp-30h] BYREF
  int v28; // [sp+3Ch] [bp-2Ch]
  int v29; // [sp+40h] [bp-28h]

  v2 = a1;
  v3 = 0;
  v27 = -1;
  v28 = -1;
  v29 = 0;
  if ( sub_608AA048(a1, a2, &v27) == 1 )
  {
    v5 = v28;
    if ( v28 != -1 )
    {
      v6 = FIELD_U32(v2, 656);
      return v6 + sub_608B1608(v2 + 660) + v5;
    }
  }
  v7 = sub_608A99EC(v2);
  if ( !v7 )
    return v3;
  v8 = 0;
  v19 = v2 + 660;
  v17 = v2;
  v18 = v7;
  while ( 1 )
  {
    v26[0] = -1;
    v26[1] = 0;
    if ( sub_608A9FE4(v2, v26, v8 | 0x6000000) != 1 )
      goto LABEL_17;
    v23 = -1;
    v24 = -1;
    v25 = 0;
    if ( sub_608AA048(v2, v26[0], &v23) != 1 )
      goto LABEL_17;
    v9 = FIELD_U32(v2, 656);
    v10 = v24;
    v11 = sub_608B1608(v19);
    sub_608B0B70(v22, v9 + v11 + v10);
    v12 = *(_DWORD *)v22[0];
    if ( *(_DWORD *)v22[0] )
      break;
LABEL_16:
    v7 = v18;
    v2 = v17;
LABEL_17:
    if ( ++v8 >= v7 )
      return 0;
  }
  v13 = 0;
  while ( 1 )
  {
    v14 = sub_608B0C4C(v22, &v20, v13);
    v15 = v14 == 1;
    if ( v14 == 1 )
      v15 = v20 == a2;
    if ( v15 )
    {
      v3 = v21;
      if ( v21 )
        return v3;
    }
    if ( ++v13 >= v12 )
      goto LABEL_16;
  }
}
