/* sub_603F9738
 * address: 0x603F9738   size: 1148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F9738(_DWORD *a1)
{
  int v2; // r6
  int v3; // r5
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0

  switch ( a1[191] )
  {
    case 0:
      if ( (FIELD_U8(dword_60CC6D78, 44) & 1) != 0 )
      {
        v24 = operator_new(0xE78u);
        a1[51] = sub_6055A000(v24);
        v25 = operator_new(0x28F8u);
        a1[52] = sub_604BBF20(v25);
        v26 = operator_new(0xF598u);
        a1[49] = sub_604E52B8(v26);
        sub_604973E4(0);
        goto LABEL_25;
      }
      v2 = dword_60C9A230;
      v3 = LevelInfo_instance;
      if ( !sub_6040E510(LevelInfo_instance) )
      {
        v4 = sub_6040E438(v3);
        v5 = v4 == 0;
        if ( !v4 )
          v5 = FIELD_U8(v2, 2084) == 0;
        if ( v5 )
        {
          v6 = operator_new(0xF598u);
          a1[49] = sub_604E52B8(v6);
        }
      }
      if ( !sub_6040E510(v3) && !sub_6040E3D0(v3) )
      {
        v7 = sub_6040E438(v3);
        v8 = v7 == 0;
        if ( !v7 )
          v8 = FIELD_U8(v2, 2084) == 0;
        if ( v8 )
          sub_6047F660(0);
      }
      if ( sub_6040E538(v3) == 1 )
      {
        v9 = operator_new(0xFD0u);
        a1[65] = sub_6055AA4C(v9);
      }
      else if ( !FIELD_U8(v2, 2084) )
      {
        sub_604BB170(0);
        sub_60559684(0);
        sub_604973E4(0);
        v30 = operator_new(0xE78u);
        a1[51] = sub_6055A000(v30);
        v31 = operator_new(0x28F8u);
        a1[52] = sub_604BBF20(v31);
        v32 = operator_new(0x483Cu);
        a1[59] = sub_605477B8(v32);
        v33 = operator_new(0xE18u);
        a1[55] = sub_6054B964(v33);
        v34 = operator_new(0xE18u);
        a1[56] = sub_6054B278(v34);
        v35 = operator_new(0xE18u);
        a1[57] = sub_60549CD0(v35);
      }
      if ( sub_6040E510(v3) == 1 )
      {
        v36 = operator_new(0xE30u);
        a1[50] = sub_60550438(v36);
        if ( (*(_BYTE *)(FIELD_U32(dword_60CC6E04, 40)
                       + 520 * *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7)
                       + 50)
            & 1) != 0
          || FIELD_U8(dword_60CC6D78, 109051) )
        {
          v37 = operator_new(0xDE0u);
          a1[66] = sub_6054CFE8(v37);
        }
      }
      else
      {
        sub_60510BF0(0);
      }
      if ( sub_6040E438(v3) == 1 )
      {
        v38 = operator_new(0x3AC8u);
        a1[60] = sub_6051ED58(v38);
        v39 = operator_new(0x3E90u);
        a1[61] = sub_604FED44(v39);
        v40 = operator_new(0x3228u);
        a1[62] = sub_60480C58(v40);
        v41 = operator_new(0x3228u);
        a1[63] = sub_60480C58(v41);
      }
      break;
    case 1:
      sub_60510BF0(0);
      sub_604973E4(0);
      sub_603FEEB4(0);
      sub_603FE46C(0);
      v10 = operator_new(0x28F8u);
      a1[52] = sub_604BBF20(v10);
      v11 = operator_new(0xE78u);
      a1[51] = sub_6055A000(v11);
      v12 = operator_new(0x483Cu);
      a1[59] = sub_605477B8(v12);
      v13 = operator_new(0xE1Cu);
      a1[67] = sub_6054FC18(v13);
      if ( sub_6040E44C(LevelInfo_instance) == 1 )
      {
        v14 = operator_new(0xF50u);
        a1[64] = sub_6052CCBC(v14);
      }
      else
      {
        v29 = operator_new(0xF598u);
        a1[49] = sub_604E52B8(v29);
      }
      break;
    case 2:
      sub_60510BF0(0);
      sub_604973E4(0);
      sub_603FEEB4(0);
      sub_603FE46C(0);
      sub_604BB170(0);
      v15 = operator_new(0x28F8u);
      a1[52] = sub_604BBF20(v15);
      v16 = operator_new(0xE78u);
      a1[51] = sub_6055A000(v16);
      v17 = operator_new(0xF598u);
      a1[49] = sub_604E52B8(v17);
      goto LABEL_26;
    case 3:
LABEL_25:
      sub_60510BF0(0);
      goto LABEL_26;
    case 4:
      sub_60510BF0(0);
      if ( (FIELD_U8(dword_60CC6D78, 44) & 0x10) != 0 )
      {
        v18 = operator_new(0xDE8u);
        a1[58] = sub_604FE5C0(v18);
      }
      v19 = operator_new(0x11F8u);
      a1[49] = sub_604E9E48(v19);
      v20 = operator_new(0x28F8u);
      a1[53] = sub_604828F0(v20);
      v21 = operator_new(0xE14u);
      a1[54] = sub_60484C28(v21);
      v22 = operator_new(0xE78u);
      a1[51] = sub_6055A000(v22);
      v23 = sub_603FD91C(dword_60C9A1F0 + 16, FIELD_U8(dword_60C99DD4, 836));
      sub_603FD93C(v23);
      sub_60485274(0);
      sub_604973E4(0);
      sub_603FEEB4(0);
      sub_603FE46C(0);
LABEL_26:
      v27 = operator_new(0x483Cu);
      a1[59] = sub_605477B8(v27);
      break;
    default:
      break;
  }
  sub_60542110(0);
  return sub_604FE518(0);
}
