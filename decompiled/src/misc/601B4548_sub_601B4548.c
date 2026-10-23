/* sub_601B4548
 * address: 0x601B4548   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B4548(int a1, int a2, int a3)
{
  bool v6; // zf
  int v7; // r7
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r1
  int v11; // r5
  int v12; // r1
  int v13; // r0
  int v14; // r8
  unsigned __int8 v15; // r0
  int v16; // r7
  int v17; // r0
  char v18; // r1
  int v19; // r0
  int v20; // r6
  int v21; // r0
  int v23; // [sp+4h] [bp-2Ch] BYREF
  int v24; // [sp+8h] [bp-28h]
  unsigned int v25; // [sp+Ch] [bp-24h]

  v6 = a2 == 7;
  if ( a2 == 7 )
    v6 = a3 == 42;
  v7 = dword_60CC6D78;
  FIELD_U8(dword_60CC6D78, 510) = 0;
  v8 = dword_60C99DEC + 16;
  if ( !v6 )
    FIELD_U8(dword_60C99DEC, 592) = 0;
  sub_603FD464(v8, a2);
  sub_601721FC(dword_60C88BC8);
  v9 = FIELD_U32(a1, 1036);
  v10 = FIELD_U32(a1, 1040);
  v23 = a2;
  v24 = v9;
  v25 = v10;
  v11 = dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 412) = a2;
  FIELD_U32(v11, 416) = v9;
  FIELD_U32(v11, 420) = v10;
  v12 = sub_601E02C4(&v23);
  v13 = -1;
  if ( v12 >= 2 )
    v13 = sub_601A47DC(dword_60C89E18, v23, v24, v25);
  v14 = (unsigned __int8)a3;
  if ( FIELD_U8(v11, 511) )
    v13 = 34;
  FIELD_U32(dword_60C89E18, 20) = v13;
  v15 = v23;
  FIELD_U32(v7, 428) = v23;
  FIELD_U32(v7, 432) = v24;
  FIELD_U32(v7, 436) = v25;
  FIELD_U32(v7, 440) = a3;
  FIELD_U32(v7, 424) = a3;
  FIELD_U16(v7, 109032) = 0;
  FIELD_U8(v7, 109040) = 0;
  FIELD_U8(v7, 109035) = FIELD_U8(v7, 109034);
  v16 = v7 + 796;
  if ( sub_603F69FC(v16, v15, (unsigned __int8)a3) > 3 )
    goto LABEL_18;
  if ( v23 )
  {
    v17 = sub_601D8C88(a1, v23, a3);
    v18 = 2;
    if ( v17 )
      v18 = 0;
    goto LABEL_22;
  }
  if ( (unsigned int)(a3 - 31) > 1 )
  {
LABEL_18:
    v20 = sub_603F69FC(v16, 0, 22);
    v21 = sub_603F69FC(v16, 0, 12);
    v18 = 1;
    if ( v21 > 2 )
      v18 = 2;
    if ( v20 > 2 )
      v18 = 2;
  }
  else
  {
    v19 = sub_601DA0DC(&v23);
    v18 = 4;
    if ( v19 )
      v18 = 3;
  }
LABEL_22:
  FIELD_U8(dword_60C99DEC, 520) = v18;
  sub_601D9B54(a1);
  return sub_607F65E0(dword_60CC62E4, dword_60C8C188, (unsigned __int8)a2, v14);
}
