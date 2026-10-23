/* sub_608B95A0
 * address: 0x608B95A0   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B95A0(int a1)
{
  unsigned int v2; // r7
  int *v3; // r5
  char v4; // r10
  int v5; // r4
  int v6; // r2
  unsigned int v7; // r6
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  unsigned int v12; // r5
  int result; // r0
  int v14; // [sp+4h] [bp-44h] BYREF
  int v15; // [sp+8h] [bp-40h] BYREF
  int v16; // [sp+Ch] [bp-3Ch]
  int v17; // [sp+10h] [bp-38h]
  int v18; // [sp+14h] [bp-34h]
  int v19; // [sp+18h] [bp-30h]
  int v20; // [sp+1Ch] [bp-2Ch]
  int v21; // [sp+20h] [bp-28h]
  int v22; // [sp+24h] [bp-24h]

  sub_608D4178(FIELD_U32(a1, 144), FIELD_U32(a1, 48));
  if ( !FIELD_U32(a1, 64) )
  {
    v12 = FIELD_U32(a1, 60);
    if ( v12 != -1 )
    {
      if ( !sub_608B2C3C(FIELD_U32(a1, 144) + 12, FIELD_U32(a1, 60), FIELD_U32(a1, 140), 1, 0) )
      {
        result = FIELD_U32(a1, 140);
        FIELD_U8(result, 20) = 2;
        FIELD_U8(a1, 148) = 0;
        return result;
      }
      FIELD_U32(a1, 64) = sub_608B4094((_DWORD *)(FIELD_U32(a1, 144) + 12), v12);
    }
  }
  v2 = 0;
  v3 = &v15;
  v4 = 0;
  v15 = -1;
  v16 = 0;
  v17 = -1;
  v18 = 0;
  v19 = -1;
  v20 = 0;
  v21 = -1;
  v22 = 0;
  v14 = 0;
  while ( 1 )
  {
    v5 = a1 + 8 * v2;
    v6 = FIELD_U32(v5, 72);
    if ( !v6 )
    {
      v7 = FIELD_U32(v5, 68);
      if ( v7 == -1 )
      {
        v6 = 0;
      }
      else
      {
        if ( !sub_608B2C3C(FIELD_U32(a1, 144) + 12, FIELD_U32(v5, 68), FIELD_U32(a1, 140), 4, 0) )
          goto LABEL_23;
        v6 = sub_608B4094((_DWORD *)(FIELD_U32(a1, 144) + 12), v7);
        FIELD_U32(v5, 72) = v6;
      }
    }
    v8 = FIELD_U32(v5, 68);
    v9 = v8 == -1;
    if ( v8 != -1 )
      v9 = v6 == 0;
    if ( v9 )
      goto LABEL_17;
    v10 = sub_608C6D44(v3, (char *)&v14 + v2);
    v11 = v10 == 2;
    if ( v10 != 2 )
      v11 = v10 == -1;
    if ( !v11 )
      goto LABEL_17;
    if ( sub_608B417C((int *)(FIELD_U32(a1, 144) + 12), FIELD_U32(v5, 72), FIELD_U32(a1, 140)) != 1 )
      break;
    sub_608C6D44(v3, (char *)&v14 + v2);
LABEL_17:
    ++v2;
    v3 += 2;
    if ( v2 >= 4 )
    {
      v4 = 1;
      FIELD_U32(a1, 100) = FIELD_U32(a1, 64);
      FIELD_U32(a1, 104) = FIELD_U32(a1, 72);
      FIELD_U32(a1, 120) = v16;
      FIELD_U8(a1, 136) = v14;
      FIELD_U32(a1, 108) = FIELD_U32(a1, 80);
      FIELD_U32(a1, 124) = v18;
      FIELD_U8(a1, 137) = BYTE1(v14);
      FIELD_U32(a1, 112) = FIELD_U32(a1, 88);
      FIELD_U32(a1, 128) = v20;
      FIELD_U8(a1, 138) = BYTE2(v14);
      FIELD_U32(a1, 116) = FIELD_U32(a1, 96);
      FIELD_U32(a1, 132) = v22;
      FIELD_U8(a1, 139) = HIBYTE(v14);
      goto LABEL_23;
    }
  }
  v4 = 0;
LABEL_23:
  result = FIELD_U32(a1, 140);
  FIELD_U8(result, 20) = 2;
  FIELD_U8(a1, 148) = v4;
  return result;
}
