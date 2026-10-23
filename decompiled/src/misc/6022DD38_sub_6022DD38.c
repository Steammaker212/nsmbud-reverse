/* sub_6022DD38
 * address: 0x6022DD38   size: 2192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022DD38(int a1, int a2)
{
  int v2; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  unsigned __int8 v10; // r0
  unsigned __int8 v11; // r1
  int v12; // r1
  bool v13; // zf
  int v14; // r0
  int v15; // r1
  bool v16; // zf
  int v17; // r1
  bool v18; // zf
  int v19; // r0
  int v20; // r1
  bool v21; // zf
  int v22; // r0
  int v23; // r1
  bool v24; // zf
  int v25; // r0
  int v26; // r1
  bool v27; // zf
  int v28; // r0
  int v29; // r1
  bool v30; // zf
  int v31; // r0
  int result; // r0
  int v33; // r1
  bool v34; // zf
  int v35; // r1
  bool v36; // zf

  switch ( a2 )
  {
    case 0:
      v4 = FIELD_U32(dword_60CC6D78, 448);
      if ( v4 == 3 )
      {
        if ( sub_6019AE00(1u, 0) )
          goto LABEL_42;
      }
      else if ( v4 != 2 || sub_6019AE80(1u, 0) )
      {
        goto LABEL_42;
      }
      v12 = FIELD_U32(dword_60CC6D78, 428);
      v13 = v12 == 1;
      if ( v12 == 1 )
        v13 = FIELD_U32(dword_60CC6D78, 440) == 0;
      if ( v13 )
      {
        v3 = 1;
        if ( sub_6019AE00(0, 0xCu) != 1 )
          return v3;
      }
LABEL_42:
      v14 = FIELD_U32(dword_60CC6D78, 448);
      if ( v14 == 3 )
      {
        if ( sub_6019AE00(0, 0xCu) )
          goto LABEL_113;
      }
      else if ( v14 != 2 || sub_6019AE80(0, 0xCu) )
      {
        goto LABEL_113;
      }
      if ( !FIELD_U32(dword_60CC6D78, 428) && FIELD_U32(dword_60CC6D78, 440) == 12 )
      {
        v3 = 1;
        if ( sub_6019AE00(1u, 0) != 1 )
          return v3;
      }
LABEL_113:
      v3 = 3;
      if ( sub_6019AE00(1u, 0) )
        return v3;
      result = sub_6019AE00(0, 0xCu);
      if ( result )
        return 3;
      return result;
    case 1:
      v5 = FIELD_U32(dword_60CC6D78, 448);
      if ( v5 == 3 )
      {
        if ( sub_6019AE00(1u, 0) )
        {
LABEL_50:
          v10 = 1;
          v11 = 0;
          goto LABEL_143;
        }
      }
      else if ( v5 != 2 || sub_6019AE80(1u, 0) )
      {
        goto LABEL_50;
      }
      v15 = FIELD_U32(dword_60CC6D78, 428);
      v16 = v15 == 1;
      if ( v15 == 1 )
        v16 = FIELD_U32(dword_60CC6D78, 440) == 0;
      if ( !v16 )
        goto LABEL_50;
      return 1;
    case 2:
    case 3:
      v2 = FIELD_U32(dword_60CC6D78, 448);
      if ( v2 == 3 )
      {
        if ( sub_6019AE00(1u, 0x16u) )
        {
LABEL_37:
          v10 = 1;
          v11 = 22;
          goto LABEL_143;
        }
      }
      else if ( v2 != 2 || sub_6019AE80(1u, 0x16u) )
      {
        goto LABEL_37;
      }
      if ( FIELD_U32(dword_60CC6D78, 428) != 1 )
        goto LABEL_37;
      v3 = 1;
      if ( FIELD_U32(dword_60CC6D78, 440) != 22 )
        goto LABEL_37;
      return v3;
    case 4:
      v6 = FIELD_U32(dword_60CC6D78, 448);
      if ( v6 == 3 )
      {
        if ( sub_6019AE00(4u, 0x24u) )
          goto LABEL_58;
      }
      else if ( v6 != 2 || sub_6019AE80(4u, 0x24u) )
      {
        goto LABEL_58;
      }
      v17 = FIELD_U32(dword_60CC6D78, 428);
      v18 = v17 == 4;
      if ( v17 == 4 )
        v18 = FIELD_U32(dword_60CC6D78, 440) == 36;
      if ( v18 && !sub_6019AE00(0, 0xCu) )
      {
        v3 = 1;
        if ( sub_6019AE00(1u, 0xDu) != 1 )
          return v3;
      }
LABEL_58:
      v19 = FIELD_U32(dword_60CC6D78, 448);
      if ( v19 == 3 )
      {
        if ( sub_6019AE00(1u, 0xDu) )
          goto LABEL_94;
      }
      else if ( v19 != 2 || sub_6019AE80(1u, 0xDu) )
      {
        goto LABEL_94;
      }
      v26 = FIELD_U32(dword_60CC6D78, 428);
      v27 = v26 == 1;
      if ( v26 == 1 )
        v27 = FIELD_U32(dword_60CC6D78, 440) == 13;
      if ( v27 && !sub_6019AE00(0, 0xCu) )
      {
        v3 = 1;
        if ( sub_6019AE00(4u, 0x24u) != 1 )
          return v3;
      }
LABEL_94:
      v28 = FIELD_U32(dword_60CC6D78, 448);
      if ( v28 == 3 )
      {
        if ( sub_6019AE00(0, 0xCu) )
          goto LABEL_130;
      }
      else if ( v28 != 2 || sub_6019AE80(0, 0xCu) )
      {
        goto LABEL_130;
      }
      if ( !FIELD_U32(dword_60CC6D78, 428) && FIELD_U32(dword_60CC6D78, 440) == 12 )
      {
        v3 = 1;
        if ( !sub_6019AE00(1u, 0xDu) && sub_6019AE00(4u, 0x24u) != 1 )
          return v3;
      }
LABEL_130:
      v3 = 3;
      if ( !sub_6019AE00(4u, 0x24u) && !sub_6019AE00(0, 0xCu) )
      {
        v10 = 1;
        v11 = 13;
        goto LABEL_143;
      }
      return v3;
    case 5:
      v7 = FIELD_U32(dword_60CC6D78, 448);
      if ( v7 == 3 )
      {
        if ( sub_6019AE00(4u, 0x16u) )
          goto LABEL_69;
      }
      else if ( v7 != 2 || sub_6019AE80(4u, 0x16u) )
      {
        goto LABEL_69;
      }
      v20 = FIELD_U32(dword_60CC6D78, 428);
      v21 = v20 == 4;
      if ( v20 == 4 )
        v21 = FIELD_U32(dword_60CC6D78, 440) == 22;
      if ( v21 && !sub_6019AE00(2u, 0xEu) )
      {
        v3 = 1;
        if ( sub_6019AE00(3u, 0xFu) != 1 )
          return v3;
      }
LABEL_69:
      v22 = FIELD_U32(dword_60CC6D78, 448);
      if ( v22 == 3 )
      {
        if ( sub_6019AE00(2u, 0xEu) )
          goto LABEL_105;
      }
      else if ( v22 != 2 || sub_6019AE80(2u, 0xEu) )
      {
        goto LABEL_105;
      }
      v29 = FIELD_U32(dword_60CC6D78, 428);
      v30 = v29 == 2;
      if ( v29 == 2 )
        v30 = FIELD_U32(dword_60CC6D78, 440) == 14;
      if ( v30 && !sub_6019AE00(3u, 0xFu) )
      {
        v3 = 1;
        if ( sub_6019AE00(4u, 0x16u) != 1 )
          return v3;
      }
LABEL_105:
      v31 = FIELD_U32(dword_60CC6D78, 448);
      if ( v31 == 3 )
      {
        if ( sub_6019AE00(3u, 0xFu) )
          goto LABEL_140;
      }
      else if ( v31 != 2 || sub_6019AE80(3u, 0xFu) )
      {
        goto LABEL_140;
      }
      v35 = FIELD_U32(dword_60CC6D78, 428);
      v36 = v35 == 3;
      if ( v35 == 3 )
        v36 = FIELD_U32(dword_60CC6D78, 440) == 15;
      if ( v36 && !sub_6019AE00(2u, 0xEu) )
      {
        v3 = 1;
        if ( sub_6019AE00(4u, 0x16u) != 1 )
          return v3;
      }
LABEL_140:
      v3 = 3;
      if ( !sub_6019AE00(4u, 0x16u) && !sub_6019AE00(2u, 0xEu) )
      {
        v10 = 3;
        v11 = 15;
        goto LABEL_143;
      }
      return v3;
    case 6:
      v8 = FIELD_U32(dword_60CC6D78, 448);
      if ( v8 == 3 )
      {
        if ( sub_6019AE00(5u, 0x16u) )
          goto LABEL_79;
      }
      else if ( v8 != 2 || sub_6019AE80(5u, 0x16u) )
      {
        goto LABEL_79;
      }
      v23 = FIELD_U32(dword_60CC6D78, 428);
      v24 = v23 == 5;
      if ( v23 == 5 )
        v24 = FIELD_U32(dword_60CC6D78, 440) == 22;
      if ( v24 )
      {
        v3 = 1;
        if ( sub_6019AE00(4u, 0x10u) != 1 )
          return v3;
      }
LABEL_79:
      v25 = FIELD_U32(dword_60CC6D78, 448);
      if ( v25 == 3 )
      {
        if ( sub_6019AE00(4u, 0x10u) )
          goto LABEL_123;
      }
      else if ( v25 != 2 || sub_6019AE80(4u, 0x10u) )
      {
        goto LABEL_123;
      }
      v33 = FIELD_U32(dword_60CC6D78, 428);
      v34 = v33 == 4;
      if ( v33 == 4 )
        v34 = FIELD_U32(dword_60CC6D78, 440) == 16;
      if ( v34 )
      {
        v3 = 1;
        if ( sub_6019AE00(4u, 0x16u) != 1 )
          return v3;
      }
LABEL_123:
      v3 = 3;
      if ( sub_6019AE00(5u, 0x16u) )
        return v3;
      v10 = 4;
      v11 = 16;
      goto LABEL_143;
    case 7:
      v9 = FIELD_U32(dword_60CC6D78, 448);
      if ( v9 == 3 )
      {
        if ( sub_6019AE00(6u, 0x24u) )
          goto LABEL_86;
      }
      else if ( v9 != 2 || sub_6019AE80(6u, 0x24u) )
      {
        goto LABEL_86;
      }
      if ( FIELD_U32(dword_60CC6D78, 428) == 6 )
      {
        v3 = 1;
        if ( FIELD_U32(dword_60CC6D78, 440) == 36 )
          return v3;
      }
LABEL_86:
      v10 = 6;
      v11 = 36;
LABEL_143:
      v3 = sub_6019AE00(v10, v11);
      if ( v3 )
        return 3;
      return v3;
    case 8:
    case 9:
      v3 = 3;
      if ( (FIELD_U8(dword_60CC6D78, 521) & 1) == 0 )
        return 0;
      return v3;
    default:
      return 0;
  }
}
