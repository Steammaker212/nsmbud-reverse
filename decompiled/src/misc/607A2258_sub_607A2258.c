/* sub_607A2258
 * address: 0x607A2258   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A2258(int a1, int a2, int a3)
{
  int v6; // r5
  int v7; // r0
  bool v8; // zf
  float v10; // r0
  int v11; // r1
  char *v12; // r0
  float v13; // r1
  int v14; // r2
  float v15; // r1
  int v16; // r2
  char *v17; // r0
  float v18; // s0
  int v19; // r0
  int v20; // r1
  float v21; // [sp+4h] [bp-2Ch] BYREF
  int v22; // [sp+8h] [bp-28h] BYREF
  float v23; // [sp+Ch] [bp-24h]
  int v24; // [sp+10h] [bp-20h]

  v6 = sub_6079D894(a1);
  if ( v6 )
  {
    if ( a3 == 1 )
      goto LABEL_16;
    v7 = FIELD_U32(a1, 1320);
    v8 = v7 == 3;
    if ( v7 != 3 )
      v8 = FIELD_U32(v6, 1320) == 3;
    if ( !v8 )
    {
      if ( FIELD_U8(dword_60CC6D8C, 17) )
      {
        v10 = FIELD_F32(v6, 112);
        v11 = FIELD_U32(v6, 116);
        v22 = FIELD_U32(a1, 108);
        v23 = v10;
        v24 = v11;
        if ( sub_60155C38(a1 + 1328, (float *)&v22, &v21, 0, 32.0) == 1 )
        {
          v12 = sub_60799A08(a1, FIELD_U32(a1, 1320), 0);
          v23 = (float)(v21 - *((float *)v12 + 5)) + -2.0;
          v13 = v23;
          v14 = v24;
          FIELD_U32(v6, 108) = v22;
          FIELD_F32(v6, 112) = v13;
          FIELD_U32(v6, 116) = v14;
        }
      }
      else
      {
        v15 = FIELD_F32(v6, 112);
        v16 = FIELD_U32(v6, 116);
        v22 = FIELD_U32(v6, 108);
        v23 = v15;
        v24 = v16;
        if ( sub_60155C38(a1 + 1328, (float *)&v22, &v21, 0, 64.0) == 1 )
        {
          v17 = sub_60799A08(a1, FIELD_U32(a1, 1320), 0);
          v23 = (float)(v21 - *((float *)v17 + 5)) + -2.0;
          v18 = v23;
          v19 = v22;
          FIELD_U32(v6, 108) = v22;
          FIELD_F32(v6, 112) = v18;
          v20 = v24;
          FIELD_U32(v6, 116) = v24;
          FIELD_U32(v6, 584) = v19;
          FIELD_F32(v6, 588) = v18;
          FIELD_U32(v6, 592) = v20;
          FIELD_U32(v6, 608) = v19;
          FIELD_F32(v6, 612) = v18;
          FIELD_U32(v6, 616) = v20;
        }
      }
      goto LABEL_16;
    }
    sub_60764270((char *)v6, a2);
  }
  if ( !sub_6079E090(a1) && (FIELD_U8(a1, 1221) & 0x80) == 0 )
    return sub_60764270((char *)a1, a2);
LABEL_16:
  sub_6079E724((_DWORD *)a1);
  return 0;
}
