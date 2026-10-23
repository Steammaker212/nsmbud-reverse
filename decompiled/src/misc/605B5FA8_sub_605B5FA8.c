/* sub_605B5FA8
 * address: 0x605B5FA8   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B5FA8(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  char *v8; // r10
  int *v9; // r7
  int v10; // r1
  int v11; // r2
  int v12; // r8
  int v13; // r0
  int v14; // r6
  int v15; // r7
  unsigned int v16; // r0
  unsigned int v17; // r1
  int v18; // r0
  unsigned int v19; // r0
  unsigned int v20; // r3
  unsigned int v21; // r3
  int v22; // [sp+8h] [bp-90h]
  int v24; // [sp+10h] [bp-88h]
  _DWORD v25[3]; // [sp+14h] [bp-84h] BYREF
  char v26; // [sp+20h] [bp-78h]
  char v27; // [sp+21h] [bp-77h]
  int v28; // [sp+28h] [bp-70h]
  int v29; // [sp+2Ch] [bp-6Ch]
  int v30; // [sp+30h] [bp-68h]
  int v31; // [sp+34h] [bp-64h]
  int v32; // [sp+38h] [bp-60h]
  int v33; // [sp+3Ch] [bp-5Ch]
  int v34; // [sp+44h] [bp-54h]
  int v35; // [sp+4Ch] [bp-4Ch]
  int v36; // [sp+50h] [bp-48h]
  _DWORD v37[3]; // [sp+58h] [bp-40h] BYREF
  _DWORD v38[13]; // [sp+64h] [bp-34h] BYREF

  v8 = (char *)(a1 + 6877);
  v9 = (int *)(a1 + 6856);
  sub_604660AC(dword_60C9D3E4, v38, FIELD_U32(a1, 6856), FIELD_U8(a1, 6877));
  v10 = a2[1];
  v11 = a2[2];
  v12 = 4;
  v37[0] = *a2;
  v37[1] = v10;
  v37[2] = v11;
  if ( FIELD_U32(a1, 6864) == 3 )
    v12 = 5;
  if ( a5 )
    v13 = FIELD_U32(a1, 8);
  else
    v13 = 0;
  v22 = v13;
  v14 = sub_60465D48();
  v24 = v14 + 1;
  if ( sub_6078A168(PlayerMgr_instance) == 1 && Actor__getProfileId((Actor *)a1) != 321 )
  {
    v15 = sub_60466074(dword_60C9D3E4, *v9);
    if ( sub_60466088(dword_60C9D3E4, v15) == 1 )
    {
      if ( v14 >= 0 )
      {
        v16 = -1;
        while ( 1 )
        {
          v17 = ++v16;
          if ( v16 >= 4 )
            v17 = 0;
          if ( v38[v17] == 8 )
            break;
          if ( (int)v16 >= v14 )
            goto LABEL_8;
        }
        v38[v17] = 10;
      }
    }
    else if ( v15 == 7 )
    {
      v18 = sub_6078A3DC(PlayerMgr_instance, FIELD_U32(a1, 6860));
      if ( v14 >= 0 && v18 == 1 )
      {
        v19 = 0;
        if ( (v24 & 1) != 0 )
        {
          v38[0] = 9;
          v19 = 1;
        }
        if ( v14 )
        {
          do
          {
            v20 = 0;
            if ( v19 < 4 )
              v20 = v19;
            v38[v20] = 9;
            v21 = v19 + 1;
            v19 += 2;
            if ( v21 >= 4 )
              v21 = 0;
            v38[v21] = 9;
          }
          while ( v19 != v24 );
        }
      }
    }
  }
LABEL_8:
  v25[0] = v37;
  v25[1] = v38;
  v26 = FIELD_U8(a1, 86);
  v25[2] = v14 + 1;
  v27 = *v8;
  v28 = FIELD_U32(a1, 6864);
  v29 = a4;
  v30 = a3;
  v31 = FIELD_U32(a1, 6860);
  v32 = v28;
  v33 = a5;
  v34 = v12;
  v35 = FIELD_U8(a1, 6851);
  v36 = FIELD_U32(a1, 80);
  sub_60466620(dword_60C9D3E4, (int)v25, v22);
}
