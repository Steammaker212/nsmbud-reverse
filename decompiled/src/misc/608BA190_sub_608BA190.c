/* sub_608BA190
 * address: 0x608BA190   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608BA190(int *a1, int *a2, int a3, int a4, int a5, int *a6)
{
  _DWORD *v9; // r4
  int v10; // r1
  signed int result; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r2
  _DWORD v15[10]; // [sp+18h] [bp-98h] BYREF
  int v16[6]; // [sp+40h] [bp-70h] BYREF
  int v17; // [sp+58h] [bp-58h] BYREF
  int v18; // [sp+5Ch] [bp-54h]
  int v19; // [sp+60h] [bp-50h]
  _DWORD v20[2]; // [sp+64h] [bp-4Ch] BYREF
  int v21; // [sp+6Ch] [bp-44h] BYREF
  int v22; // [sp+70h] [bp-40h]
  int v23; // [sp+74h] [bp-3Ch]
  int v24; // [sp+78h] [bp-38h]
  int v25; // [sp+7Ch] [bp-34h]
  int v26; // [sp+80h] [bp-30h]
  int v27; // [sp+84h] [bp-2Ch]
  int v28; // [sp+88h] [bp-28h]
  int v29; // [sp+8Ch] [bp-24h]
  int v30; // [sp+90h] [bp-20h]
  int v31; // [sp+94h] [bp-1Ch]
  int v32; // [sp+98h] [bp-18h]
  int v33; // [sp+9Ch] [bp-14h]
  int v34; // [sp+A0h] [bp-10h]
  int v35; // [sp+A4h] [bp-Ch]
  int v36; // [sp+A8h] [bp-8h]
  int v37; // [sp+ACh] [bp-4h]
  __int16 v38; // [sp+B0h] [bp+0h]
  int v39; // [sp+B4h] [bp+4h] BYREF
  int v40; // [sp+B8h] [bp+8h]
  int v41; // [sp+BCh] [bp+Ch]
  int v42; // [sp+C0h] [bp+10h]
  int v43; // [sp+C4h] [bp+14h]
  int v44; // [sp+C8h] [bp+18h]
  __int16 v45; // [sp+CCh] [bp+1Ch]

  v39 = 0;
  v44 = 0;
  v45 = 0;
  v43 = -1;
  v42 = -1;
  v41 = -1;
  v40 = -1;
  v9 = (_DWORD *)a6[8];
  v10 = sub_608A9C24(a2[2], (int)&v39, a3);
  result = 3;
  if ( v10 == 1 )
  {
    if ( v9 )
    {
      if ( v9[2] != -1 )
        v40 = v9[2];
      if ( v9[3] != -1 )
        v41 = v9[3];
      if ( v9[4] != -1 )
        v42 = v9[4];
      if ( v9[5] != -1 )
        v43 = v9[5];
    }
    v20[0] = -1;
    v20[1] = 0;
    v21 = -1;
    v22 = 0;
    v23 = -1;
    v24 = 0;
    v25 = -1;
    v26 = 0;
    v27 = -1;
    v28 = 0;
    v29 = -1;
    v30 = 0;
    v31 = -1;
    v32 = 0;
    v33 = -1;
    v34 = 0;
    v35 = -1;
    v17 = 0;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    LOBYTE(v38) = *(_DWORD *)(FIELD_U32(a4, 16) + 40) != 0;
    v18 = v39;
    v19 = v44;
    result = sub_608BA460(a1, &v17, a4, a2[2], a2[3], a5, a6[8]);
    if ( !result )
    {
      result = sub_608BA5BC((int)a1, (int)&v17, a4, (int)&v39, a2, a6[8]);
      if ( !result )
      {
        sub_608B6FA4(a4, a1[17], v19, (int)(a1 + 24), v45, SHIBYTE(v45), a1[26], a1[27]);
        v12 = *a6;
        v13 = a6[1];
        if ( *a6 )
        {
          if ( v12 == 2 )
          {
            v13 = 0;
          }
          else if ( v12 != 1 )
          {
            v13 = 0;
          }
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
        v16[0] = v18;
        v16[1] = v14;
        v16[2] = v13;
        v16[3] = a6[2];
        v16[4] = a6[3];
        v16[5] = a6[4];
        if ( HIBYTE(v38) )
        {
          sub_608B94E8(v15, a2[2], a2[3], (int)v20, (int)&v21, FIELD_U32(a4, 16));
          sub_608B73D0(a4, v15, v16);
        }
        else
        {
          v15[0] = v17;
          v15[1] = v22;
          v15[5] = v30;
          v15[9] = v37;
          v15[2] = v24;
          v15[6] = v32;
          v15[3] = v26;
          v15[7] = v34;
          v15[4] = v28;
          v15[8] = v36;
          sub_608B7018(a4, (int)v15, v16);
        }
        return 0;
      }
    }
  }
  return result;
}
