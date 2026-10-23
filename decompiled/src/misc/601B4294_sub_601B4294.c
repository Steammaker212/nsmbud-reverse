/* sub_601B4294
 * address: 0x601B4294   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B4294(_DWORD *a1)
{
  int *v2; // r5
  int v3; // r7
  int v4; // r1
  int v5; // r0
  int v6; // r6
  int v7; // r1
  int v8; // r3
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  _BYTE *v12; // r0
  unsigned __int8 v13; // r2
  int v14; // r0
  int v15; // r0
  int v16; // r0
  char v18; // r0
  int v19; // r0
  unsigned __int8 v20[32]; // [sp+0h] [bp-20h] BYREF

  v2 = a1 + 258;
  v3 = dword_60CC6D78;
  FIELD_U8(dword_60CC6D78, 510) = 0;
  FIELD_U32(v3, 412) = a1[258];
  FIELD_U32(v3, 416) = a1[259];
  FIELD_U32(v3, 420) = a1[260];
  v4 = sub_601E02C4(a1 + 258);
  v5 = -1;
  if ( v4 >= 2 )
    v5 = sub_601A47DC(dword_60C89E18, *v2, v2[1], v2[2]);
  if ( FIELD_U8(v3, 511) )
    v5 = 34;
  FIELD_U32(dword_60C89E18, 20) = v5;
  sub_601E1A20(v2, &v20[4], v20);
  v6 = sub_601E1398(v2);
  if ( v6 == 1 )
  {
    v7 = *(_DWORD *)&v20[4];
    *(_DWORD *)v20 = 22;
    v8 = dword_60C99DEC;
    v9 = dword_60C99DEC + 16;
LABEL_8:
    FIELD_U8(v8, 592) = 0;
    goto LABEL_9;
  }
  v7 = *(_DWORD *)&v20[4];
  v8 = dword_60C99DEC;
  v9 = dword_60C99DEC + 16;
  if ( *(_QWORD *)v20 != 0x70000002ALL )
    goto LABEL_8;
LABEL_9:
  v10 = sub_603FD464(v9, v7);
  v11 = (_DWORD *)sub_601DB42C(v10);
  if ( *(_QWORD *)v20 == __PAIR64__(*v11, v11[1]) && sub_601D08B0(dword_60C8AEF0) != 1 )
  {
    v18 = sub_601DB3FC();
    FIELD_U8(v3, 109032) = 1;
    FIELD_U8(v3, 109033) = v18;
    v19 = dword_60CC6D78;
    FIELD_U8(dword_60CC6D78, 2094) = 0;
    v12 = (_BYTE *)(v19 + 2095);
  }
  else
  {
    FIELD_U8(v3, 109032) = 0;
    v12 = (_BYTE *)(v3 + 109033);
  }
  *v12 = 0;
  FIELD_U8(v3, 109040) = 0;
  FIELD_U8(v3, 109035) = FIELD_U8(v3, 109034);
  FIELD_U32(v3, 428) = *v2;
  FIELD_U32(v3, 432) = v2[1];
  FIELD_U32(v3, 436) = v2[2];
  if ( v6 == 1 )
  {
    v13 = v20[0];
    v14 = *(_DWORD *)v20;
  }
  else
  {
    v15 = sub_601E0010(v2);
    v14 = sub_6040D864(v15);
    v13 = v20[0];
  }
  FIELD_U32(v3, 440) = v14;
  FIELD_U32(v3, 424) = v14;
  FIELD_U8(dword_60C99DEC, 520) = sub_603F76B0(v3 + 796, v20[4], v13);
  v16 = dword_60C8C188;
  FIELD_U8(dword_60C8C188, 3226) = 1;
  FIELD_U8(v16, 3227) = 1;
  sub_601D9B54(a1);
  if ( v6 == 1 )
    return sub_607F672C(dword_60CC62E4, dword_60C8C188, v20[4], v20[0]);
  else
    return sub_607F65E0(dword_60CC62E4, dword_60C8C188, v20[4], v20[0]);
}
