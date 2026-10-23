/* sub_608AAC68
 * address: 0x608AAC68   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AAC68(int a1, int a2, unsigned int *a3, int a4)
{
  int v8; // r6
  int v9; // r11
  unsigned int v10; // r4
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r2
  int v14; // r0
  int v15; // r5
  unsigned int v16; // r1
  int v17; // r9
  unsigned int v18; // r11
  unsigned int v19; // r10
  char *v20; // r7
  char *v21; // r4
  int v22; // r8
  int v23; // r6
  unsigned int v24; // r9
  int v25; // r7
  unsigned int v26; // r0
  unsigned int v27; // r1
  unsigned int v28; // r0
  int v29; // r0
  unsigned int i; // r9
  int v31; // r7
  unsigned int v32; // r4
  int v33; // r8
  unsigned int v34; // r0
  unsigned int v35; // r1
  unsigned int v36; // r0
  int v37; // r0
  int v39; // [sp+0h] [bp-50h]
  int v40; // [sp+4h] [bp-4Ch]
  unsigned int v41; // [sp+8h] [bp-48h]
  unsigned int *v42; // [sp+Ch] [bp-44h]
  unsigned int v43; // [sp+10h] [bp-40h]
  int v44; // [sp+14h] [bp-3Ch]
  int v45; // [sp+18h] [bp-38h]
  int v46; // [sp+1Ch] [bp-34h] BYREF
  int v47; // [sp+20h] [bp-30h]
  __int16 v48; // [sp+24h] [bp-2Ch] BYREF
  int v49; // [sp+28h] [bp-28h]

  v8 = 0;
  if ( (*(_WORD *)a3 & 0xFFF) != 0 )
    return v8;
  v8 = 0;
  v49 = dword_60C5AF24;
  v48 = 0;
  v9 = sub_608B0CEC(&v48);
  v10 = sub_608A99E4(a2);
  v11 = sub_608B0CEC(&v48);
  v12 = v11 + 104;
  v13 = *a3;
  if ( !v11 )
    v12 = 92;
  v15 = v9;
  if ( v9 )
    v15 = 12;
  v14 = v12 * v10 + 4095;
  v16 = v13 + (v14 & 0xFFFFF000);
  if ( (int)(v16 - a4) > 0 )
    return v8;
  v44 = a2;
  v41 = v13 + (v14 & 0xFFFFF000);
  v42 = a3;
  *a3 = v16;
  v40 = a1;
  FIELD_U32(a1, 32) = v10;
  FIELD_U32(a1, 36) = v13;
  v17 = v9;
  v18 = v13;
  v45 = a4;
  if ( !v10 )
  {
LABEL_40:
    if ( *v42 == v41 )
      return 1;
    sub_608AE1F0(v40 + 392, v41, *v42 - v41);
    v8 = 1;
    FIELD_U8(v40, 396) = 1;
    return v8;
  }
  v43 = v10;
  if ( !v17 )
  {
    for ( i = 0; i < v10; ++i )
    {
      sub_608AC5F8(v18, 0);
      v46 = 0;
      v47 = 0;
      if ( sub_608A9DAC(v44, (int)&v46, i | 0x4000000) == 1 )
      {
        sub_608ACE64(v18, v46);
        v31 = v47;
        if ( v47 )
        {
          if ( v46 >= 1 )
          {
            v32 = *v42;
            if ( (*v42 & 0xFFF) != 0 )
              return 0;
            v33 = 0;
            while ( 1 )
            {
              v34 = (v32 + 4135) & 0xFFFFF000;
              if ( (int)(v34 - a4) > 0 )
                return 0;
              *v42 = v34;
              sub_608B12C8(v32);
              v35 = *v42;
              v36 = *v42 + ((v31 + 4095) & 0xFFFFF000);
              if ( (int)(v36 - a4) > 0 )
                return 0;
              *v42 = v36;
              v37 = sub_608B1378(v32, v35, v31);
              if ( !v32 || v37 != 1 )
                return 0;
              sub_608ACF78(v18, v32);
              if ( ++v33 >= v46 )
                break;
              v32 = *v42;
              v31 = v47;
              if ( (*v42 & 0xFFF) != 0 )
                return 0;
            }
          }
          sub_608ACED0(v18);
          v10 = v43;
        }
      }
      v18 += 92;
    }
    goto LABEL_40;
  }
  v19 = 0;
  v39 = v15;
  v20 = (char *)(v13 + 92 * v10);
  while ( 1 )
  {
    *(_DWORD *)v20 = 0;
    *((_DWORD *)v20 + 1) = 0;
    *((_DWORD *)v20 + 2) = 0;
    v21 = &v20[v15];
    sub_608B0D44(v20, &v20[v15], v17, &v48);
    sub_608AC5F8(v18, v20);
    v46 = 0;
    v47 = 0;
    if ( sub_608A9DAC(v44, (int)&v46, v19 | 0x4000000) != 1 )
      goto LABEL_23;
    sub_608ACE64(v18, v46);
    v22 = v47;
    if ( !v47 )
      goto LABEL_23;
    v23 = v17;
    if ( v46 >= 1 )
      break;
LABEL_22:
    sub_608ACED0(v18);
    v15 = v39;
    v17 = v23;
LABEL_23:
    v20 = &v21[v17];
    ++v19;
    v18 += 92;
    if ( v19 >= v43 )
      goto LABEL_40;
  }
  v24 = *v42;
  if ( (*v42 & 0xFFF) == 0 )
  {
    v25 = 0;
    do
    {
      v26 = (v24 + 4135) & 0xFFFFF000;
      if ( (int)(v26 - v45) > 0 )
        break;
      *v42 = v26;
      sub_608B12C8(v24);
      v27 = *v42;
      v28 = *v42 + ((v22 + 4095) & 0xFFFFF000);
      if ( (int)(v28 - v45) > 0 )
        break;
      *v42 = v28;
      v29 = sub_608B1378(v24, v27, v22);
      if ( !v24 || v29 != 1 )
        break;
      sub_608ACF78(v18, v24);
      if ( ++v25 >= v46 )
        goto LABEL_22;
      v24 = *v42;
      v22 = v47;
    }
    while ( (*v42 & 0xFFF) == 0 );
  }
  return 0;
}
