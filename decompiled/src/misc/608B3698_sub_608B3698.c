/* sub_608B3698
 * address: 0x608B3698   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B3698(int *a1, unsigned int a2, int a3, int a4, int a5)
{
  int v9; // r11
  int v10; // r1
  int v11; // r9
  int v12; // r10
  int v13; // r0
  unsigned int v14; // r0
  unsigned int v15; // r8
  int v16; // r0
  int v18; // [sp+8h] [bp-68h]
  int v19; // [sp+Ch] [bp-64h]
  int v20; // [sp+10h] [bp-60h]
  int v21; // [sp+14h] [bp-5Ch]
  int v22; // [sp+18h] [bp-58h]
  int v23; // [sp+1Ch] [bp-54h]
  int v24; // [sp+20h] [bp-50h]
  int v25; // [sp+24h] [bp-4Ch]
  int v26; // [sp+28h] [bp-48h]
  int v27; // [sp+2Ch] [bp-44h]
  int v28; // [sp+30h] [bp-40h]
  int v29; // [sp+34h] [bp-3Ch]
  int v30; // [sp+38h] [bp-38h]
  _BYTE v31[52]; // [sp+3Ch] [bp-34h] BYREF

  v9 = sub_608A9A94(a1[1], a2);
  v10 = (*(int (__fastcall **)(int *, int))(*a1 + 16))(a1, v9);
  if ( !v10 )
  {
    v10 = sub_608B3814(a1, a2, a4, a5);
    if ( !v10 )
      return 0;
  }
  v11 = 1;
  sub_608B4894(v31, v10, 1);
  if ( !v31[12] || !sub_608B4A8C(v31, a3) )
  {
    v12 = sub_608B4AEC(v31, a3);
    v13 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a4 + 8))(a4, (v12 + 4223) & 0xFFFFF000);
    v11 = 0;
    if ( v13 )
    {
      v14 = (v13 + 63) & 0xFFFFFFC0;
      *(_DWORD *)v14 = 1448560966;
      v15 = v14 + 64;
      FIELD_U32(v14, 4) = v9;
      FIELD_U32(v14, 8) = a3;
      v14 |= 0xCu;
      *(_DWORD *)v14 = v18;
      FIELD_U32(v14, 4) = v19;
      FIELD_U32(v14, 8) = v20;
      FIELD_U32(v14, 12) = v21;
      v14 += 16;
      *(_DWORD *)v14 = v22;
      FIELD_U32(v14, 4) = v23;
      FIELD_U32(v14, 8) = v24;
      FIELD_U32(v14, 12) = v25;
      v14 += 16;
      *(_DWORD *)v14 = v26;
      FIELD_U32(v14, 4) = v27;
      FIELD_U32(v14, 8) = v28;
      FIELD_U32(v14, 12) = v29;
      FIELD_U32(v14, 16) = v30;
      v16 = sub_608B4B10(v31, a3);
      if ( sub_608B3984(a1, v9, v15, v12, v16, a5) == v12 )
      {
        sub_608B4B54(v31, a3, v15);
        nullsub_100(v15, v12);
        return 1;
      }
    }
  }
  return v11;
}
