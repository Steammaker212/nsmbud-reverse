/* sub_605B5A3C
 * address: 0x605B5A3C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5)
{
  int *v9; // r5
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r3
  int *v15; // r6
  int v16; // r2
  _DWORD v18[3]; // [sp+4h] [bp-64h] BYREF
  char v19; // [sp+10h] [bp-58h]
  char v20; // [sp+11h] [bp-57h]
  int v21; // [sp+18h] [bp-50h]
  int v22; // [sp+1Ch] [bp-4Ch]
  int v23; // [sp+20h] [bp-48h]
  int v24; // [sp+24h] [bp-44h]
  int v25; // [sp+28h] [bp-40h]
  int v26; // [sp+2Ch] [bp-3Ch]
  int v27; // [sp+34h] [bp-34h]
  int v28; // [sp+3Ch] [bp-2Ch]
  int v29; // [sp+40h] [bp-28h]
  int v30; // [sp+44h] [bp-24h]

  v9 = (int *)(a1 + 6860);
  if ( sub_6078A3DC(PlayerMgr_instance, FIELD_U32(a1, 6860)) == 1 && Actor__getProfileId((Actor *)a1) != 321 )
  {
    v10 = FIELD_U32(a1, 6856);
    if ( v10 == 2 )
    {
      v11 = 11;
    }
    else
    {
      if ( v10 != 10 )
        goto LABEL_8;
      v11 = 22;
    }
    FIELD_U32(a1, 6856) = v11;
  }
LABEL_8:
  v12 = FIELD_U32(a1, 6872);
  if ( v12 == 1 )
  {
    v13 = 3;
    if ( a5 )
      goto LABEL_17;
  }
  else
  {
    if ( v12 == 2 )
    {
      v13 = 5;
      if ( FIELD_U32(a1, 6864) == 2 )
        v13 = 4;
      if ( !a5 )
        goto LABEL_18;
LABEL_17:
      v14 = FIELD_U32(a1, 8);
      goto LABEL_19;
    }
    v13 = 0;
    if ( a5 )
      goto LABEL_17;
  }
LABEL_18:
  v14 = 0;
LABEL_19:
  v15 = (int *)(a1 + 6864);
  if ( FIELD_U8(a1, 6868) )
  {
    v16 = 2;
    *v15 = 2;
  }
  else
  {
    v16 = *v15;
  }
  v18[0] = a2;
  v19 = FIELD_U8(a1, 86);
  v18[2] = 1;
  v20 = FIELD_U8(a1, 6877);
  v21 = v16;
  v22 = a4;
  v23 = a3;
  v24 = *v9;
  v25 = v16;
  v26 = a5;
  v27 = v13;
  v28 = FIELD_U8(a1, 6851);
  v29 = FIELD_U32(a1, 80);
  v30 = FIELD_U32(a1, 6908);
  return sub_60466328(dword_60C9D3E4, (int)v18, FIELD_U32(a1, 6856), v14);
}
