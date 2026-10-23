/* SE_SYS_PAUSE_ref
 * address: 0x604C7C2C   size: 1712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PAUSE_ref(int a1, int a2)
{
  int v4; // r5
  int v5; // r0
  int v6; // r8
  int v7; // r10
  int v8; // r7
  bool v9; // zf
  int v10; // r1
  bool v11; // zf
  bool v12; // zf
  bool v13; // zf
  int v14; // r1
  int v15; // r0
  int v16; // r6
  int v17; // r0
  int v18; // r0
  int v19; // r6

  v4 = 0;
  v5 = FIELD_U32(a1, 5084);
  v6 = dword_60C8AEF0;
  v7 = dword_60C89E18;
  v8 = FIELD_U32(dword_60CC6D78, 416);
  FIELD_U8(a1, 14181) = 1;
  if ( (a2 | 1) != 7 )
    FIELD_U32(a1, 14140) = 10;
  switch ( a2 )
  {
    case 0:
      if ( v5 )
        goto LABEL_43;
      v9 = FIELD_U8(a1, 5099) == 0;
      if ( FIELD_U8(a1, 5099) )
        v9 = FIELD_U8(a1, 14173) == 0;
      if ( v9 || sub_601A446C(v7) )
        goto LABEL_43;
      v10 = 0;
      goto LABEL_42;
    case 1:
      if ( v5 != 2 )
        goto LABEL_43;
      v11 = FIELD_U8(a1, 5099) == 0;
      if ( FIELD_U8(a1, 5099) )
        v11 = FIELD_U8(a1, 14173) == 0;
      if ( v11 || sub_601A446C(v7) )
        goto LABEL_43;
      v4 = 1;
      FIELD_U32(a1, 14140) = 1;
      FIELD_U8(a1, 14174) = 1;
LABEL_32:
      sub_60478680((int)"SE_SYS_PAUSE", 9);
      break;
    case 2:
      if ( v5 != 3 )
        goto LABEL_43;
      v12 = FIELD_U8(a1, 5099) == 0;
      if ( FIELD_U8(a1, 5099) )
        v12 = FIELD_U8(a1, 14173) == 0;
      if ( v12 || sub_601A446C(v7) )
        goto LABEL_43;
      v10 = 2;
      goto LABEL_42;
    case 3:
      if ( v5 != 1 || !FIELD_U8(a1, 5099) )
        goto LABEL_43;
      v10 = 3;
LABEL_42:
      FIELD_U32(a1, 14140) = v10;
      v4 = 1;
      FIELD_U8(a1, 14174) = 1;
      break;
    case 4:
    case 6:
      if ( v5 != 4 || !FIELD_U8(a1, 5102) )
        goto LABEL_43;
      v4 = 0;
      if ( !*(_BYTE *)(sub_601FEE28(dword_60C8C188) + 1377)
        && !sub_60502DC8(a1 + 4056, &unk_60B02ECC)
        && sub_60502DC8(a1 + 4056, &unk_60B02EC8) == 1 )
      {
        v4 = 1;
        FIELD_U32(a1, 14152) = 1;
      }
      if ( FIELD_U8(a1, 4561) )
        goto LABEL_43;
      v4 = 1;
      *(_BYTE *)(sub_601FEE28(dword_60C8C188) + 1378) = 0;
      break;
    case 5:
    case 7:
      if ( v5 != 5 || !FIELD_U8(a1, 5102) )
        goto LABEL_43;
      v4 = 0;
      if ( !*(_BYTE *)(sub_601FEE28(dword_60C8C188) + 1378)
        && !sub_60502DC8(a1 + 4056, &unk_60B02EC8)
        && sub_60502DC8(a1 + 4056, &unk_60B02ECC) == 1 )
      {
        v4 = 1;
        FIELD_U32(a1, 14152) = 2;
      }
      if ( FIELD_U8(a1, 4560) )
        goto LABEL_43;
      v4 = 1;
      *(_BYTE *)(sub_601FEE28(dword_60C8C188) + 1377) = 0;
      break;
    default:
LABEL_43:
      v13 = v4 == 0;
      if ( !v4 )
        v13 = FIELD_U8(a1, 14174) == 0;
      if ( v13 )
      {
        switch ( a2 )
        {
          case 0:
            if ( !FIELD_U8(a1, 14173)
              || FIELD_U8(a1, 5102)
              || FIELD_U8(a1, 5098)
              || sub_601A446C(v7)
              || !sub_601CFD30(v6, 256) )
            {
              goto LABEL_88;
            }
            v14 = 0;
            goto LABEL_72;
          case 1:
            if ( !FIELD_U8(a1, 14173)
              || FIELD_U8(a1, 5102)
              || FIELD_U8(a1, 5098)
              || sub_601A446C(v7)
              || sub_601D0948(v6) != 1 )
            {
              goto LABEL_88;
            }
            v4 = 1;
            FIELD_U32(a1, 14140) = 1;
            goto LABEL_32;
          case 2:
            if ( !FIELD_U8(a1, 14173)
              || FIELD_U8(a1, 5102)
              || FIELD_U8(a1, 5098)
              || sub_601A446C(v7)
              || !sub_601CFD30(v6, 0x10000) )
            {
              goto LABEL_88;
            }
            v14 = 2;
            goto LABEL_72;
          case 3:
            if ( !FIELD_U8(a1, 14172)
              || FIELD_U8(a1, 5102)
              || FIELD_U8(a1, 5098)
              || *(unsigned __int8 *)(FIELD_U32(a1, 13780) + 65) != 255
              || (FIELD_U8(a1, 6141) & 0x40) == 0 )
            {
              goto LABEL_88;
            }
            v14 = 3;
LABEL_72:
            FIELD_U32(a1, 14140) = v14;
            v4 = 1;
            break;
          case 6:
            if ( v8 )
              goto LABEL_88;
            v15 = sub_601FEE28(dword_60C8C188);
            v16 = v15;
            if ( FIELD_U8(a1, 5102) )
              goto LABEL_88;
            if ( FIELD_U8(v15, 1377) )
              goto LABEL_88;
            if ( FIELD_U8(a1, 14189) )
              goto LABEL_88;
            if ( !FIELD_U8(a1, 14172) )
              goto LABEL_88;
            if ( (FIELD_U8(a1, 6409) & 5) != 0 )
              goto LABEL_88;
            v17 = FIELD_U32(a1, 14132);
            if ( (v17 & 0x800) == 0
              && !(FIELD_U32(a1, 14136) & 0x800 | v17 & 0x10000 | FIELD_U32(a1, 14136) & 0x10000) )
            {
              goto LABEL_88;
            }
            v4 = 1;
            FIELD_U32(a1, 14152) = 1;
            sub_60502E18(a1 + 4056, 4);
            if ( !FIELD_U8(a1, 4561) )
              FIELD_U8(v16, 1378) = 0;
            break;
          case 7:
            if ( v8 )
              goto LABEL_88;
            v18 = sub_601FEE28(dword_60C8C188);
            v19 = v18;
            if ( FIELD_U8(a1, 5102)
              || FIELD_U8(v18, 1378)
              || FIELD_U8(a1, 14189)
              || !FIELD_U8(a1, 14172)
              || (FIELD_U32(a1, 6408) & 0x10800) != 0
              || (FIELD_U32(a1, 14132) & 0x400) == 0
              && !(FIELD_U32(a1, 14136) & 0x400 | FIELD_U32(a1, 14132) & 0x100 | FIELD_U32(a1, 14136) & 0x100) )
            {
              goto LABEL_88;
            }
            FIELD_U32(a1, 14152) = 2;
            sub_60502E18(a1 + 4056, 5);
            v4 = 1;
            if ( !FIELD_U8(a1, 4560) )
              FIELD_U8(v19, 1377) = 0;
            break;
          default:
            goto LABEL_88;
        }
      }
      else
      {
LABEL_88:
        if ( !(v4 | (FIELD_U8(a1, 14172) == 0)) )
        {
          v4 = 0;
          if ( FIELD_U8(a1, 14179) )
            FIELD_U8(a1, 14178) = 1;
        }
      }
      break;
  }
  FIELD_U8(a1, 14180) = v4 ^ 1;
  return v4;
}
