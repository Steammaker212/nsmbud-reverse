/* sub_601B83F8
 * address: 0x601B83F8   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B83F8(int a1, int a2)
{
  int v3; // r5
  int v4; // r8
  int v5; // r7
  int v6; // r4
  int v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int result; // r0
  int v12; // r0
  int v13; // r2
  char v14; // r1
  int v15; // r0
  int v16; // r1
  float v17; // s16
  _DWORD v18[14]; // [sp+0h] [bp-38h] BYREF

  if ( a2 == 1 )
  {
    v3 = 3;
    v4 = *(_DWORD *)sub_601C6BC0(a1, 3);
    v5 = 1;
    FIELD_U8(a1, 664) = 1;
    FIELD_U8(a1, 776) = 0;
    if ( sub_601C676C(a1, FIELD_U32(a1, 1056), -1) == 238 )
    {
      v6 = 3;
      do
      {
        v7 = sub_601E1330(a1 + 1084, v5 - 1);
        v8 = sub_601C676C(a1, v7, -1);
        if ( v8 != 238 )
          v6 = v7;
        if ( v5 > 5 )
          break;
        ++v5;
      }
      while ( v8 == 238 );
      FIELD_U32(a1, 1056) = v6;
      v3 = 3;
    }
    goto LABEL_30;
  }
  v9 = FIELD_U32(a1, 1196);
  if ( (unsigned int)(v9 - 1) < 2 )
  {
    FIELD_U32(a1, 1056) = 7;
    return 7;
  }
  if ( v9 )
  {
    if ( v9 == 6 )
    {
      v10 = *(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1472) + 920);
      if ( v10 )
      {
        v4 = 145;
        if ( *(_DWORD *)(FIELD_U32(v10, 12) + 472) != 5 )
          v4 = 22;
      }
      else
      {
        v4 = 22;
      }
      v3 = 11;
      FIELD_U8(a1, 664) = 0;
      FIELD_U8(a1, 776) = 1;
      goto LABEL_29;
    }
    v3 = 3;
    v15 = a1;
    v16 = 3;
  }
  else
  {
    v12 = sub_601E1330(a1 + 1084, FIELD_U32(a1, 1096));
    if ( v12 == -1 )
      v12 = 3;
    v13 = 3;
    v3 = 4;
    v14 = 0;
    switch ( v12 )
    {
      case 4:
        goto LABEL_27;
      case 6:
      case 10:
      case 26:
      case 27:
      case 29:
      case 30:
      case 31:
      case 32:
        v3 = v12;
        goto LABEL_27;
      case 11:
        goto LABEL_26;
      case 12:
        v13 = 22;
        goto LABEL_26;
      default:
        v13 = v12;
LABEL_26:
        v14 = 1;
        v3 = v13;
LABEL_27:
        FIELD_U8(a1, 664) = v14;
        v16 = v3;
        FIELD_U8(a1, 776) = 0;
        v15 = a1;
        break;
    }
  }
  v4 = *(_DWORD *)sub_601C6BC0(v15, v16);
LABEL_29:
  FIELD_U32(a1, 1056) = v3;
LABEL_30:
  v18[0] = v4;
  v18[1] = *(_DWORD *)(sub_601C6BC0(a1, v3) + 4);
  v18[2] = *(_DWORD *)(sub_601C6BC0(a1, v3) + 8);
  v18[3] = 0;
  if ( (FIELD_U32(a1, 264) | 1) == 7 )
    return sub_601BC1DC(a1, v18);
  if ( v4 != *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1472) + 920) + 4) + 28) )
    return sub_601BC1DC(a1, v18);
  v17 = sub_607934C0();
  result = sub_601C6BC0(a1, v3);
  if ( v17 != FIELD_F32(result, 4) )
    return sub_601BC1DC(a1, v18);
  return result;
}
