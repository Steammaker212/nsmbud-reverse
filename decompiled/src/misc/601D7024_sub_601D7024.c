/* sub_601D7024
 * address: 0x601D7024   size: 944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601D7024(int a1)
{
  int v2; // r0
  int v3; // r6
  _DWORD *v4; // r5
  StateBase *v5; // r1
  _DWORD *v6; // r0
  int v7; // r6
  unsigned int *v8; // r0
  StateMethodExecuter *result; // r0

  sub_601B51B8(a1);
  v2 = FIELD_U32(a1, 1124);
  if ( v2 >= 1 )
    FIELD_U32(a1, 1124) = v2 - 1;
  if ( sub_601B32DC(a1, 16) == 1 )
  {
    v3 = 3;
    v4 = (_DWORD *)(a1 + 1032);
    if ( !RW9M0W909_ref_22AE5C(dword_60C8D864, a1 + 1032, 3, 1) )
    {
      FIELD_U32(a1, 1100) = 3;
      sub_601B3AB0(a1, 3);
      v5 = (StateBase *)&dword_60C8A8E4;
      return sub_601B1FA4(a1, v5);
    }
  }
  else if ( sub_601B32DC(a1, 32) == 1 )
  {
    v3 = 2;
    v4 = (_DWORD *)(a1 + 1032);
    if ( !RW9M0W909_ref_22AE5C(dword_60C8D864, a1 + 1032, 2, 1) )
    {
      FIELD_U32(a1, 1100) = 2;
      sub_601B3AB0(a1, 2);
      v5 = (StateBase *)&dword_60C8A8E4;
      return sub_601B1FA4(a1, v5);
    }
  }
  else if ( sub_601B32DC(a1, 64) == 1 )
  {
    v3 = 4;
    v4 = (_DWORD *)(a1 + 1032);
    if ( !RW9M0W909_ref_22AE5C(dword_60C8D864, a1 + 1032, 4, 1) )
    {
      FIELD_U32(a1, 1100) = 4;
      sub_601B3AB0(a1, 4);
      v5 = (StateBase *)&dword_60C8A8E4;
      return sub_601B1FA4(a1, v5);
    }
  }
  else
  {
    if ( sub_601B32DC(a1, 128) != 1 )
    {
      result = *(StateMethodExecuter **)(a1 + 1124);
      if ( result )
        return result;
      if ( (FIELD_U8(a1, 1121) & 0x80) != 0 )
      {
        v5 = (StateBase *)&dword_60C8A8E4;
      }
      else
      {
        FIELD_U32(a1, 1148) = FIELD_U32(a1, 1092);
        v5 = &stru_60C8A908;
      }
      return sub_601B1FA4(a1, v5);
    }
    v3 = 5;
    v4 = (_DWORD *)(a1 + 1032);
    if ( !RW9M0W909_ref_22AE5C(dword_60C8D864, a1 + 1032, 5, 1) )
    {
      FIELD_U32(a1, 1100) = 5;
      sub_601B3AB0(a1, 5);
      v5 = (StateBase *)&dword_60C8A8E4;
      return sub_601B1FA4(a1, v5);
    }
  }
  FIELD_U32(a1, 1092) = v3;
  sub_6019EC34((_DWORD *)(dword_60CC6D78 + 480), v4);
  FIELD_U32(dword_60CC6D78, 492) = FIELD_U32(a1, 1092);
  FIELD_F32(a1, 1132) = sub_601D89B8(a1);
  sub_6019EC34((_DWORD *)(a1 + 1080), v4);
  FIELD_U32(a1, 1108) = FIELD_U32(a1, 1092);
  FIELD_U32(a1, 1120) &= ~0x10u;
  FIELD_U32(a1, 1136) = *((_DWORD *)sub_601C6BF0(a1) + 254);
  v6 = (_DWORD *)sub_601E039C(v4, FIELD_U32(a1, 1092));
  FIELD_U32(a1, 1044) = v6[21];
  FIELD_U32(a1, 1048) = v6[22];
  FIELD_U32(a1, 1052) = v6[24];
  FIELD_F32(a1, 1132) = sub_601D89B8(a1);
  sub_601D55A4(a1, 0, -1, 0);
  ((void (__fastcall *)(int, _DWORD))loc_601C6F7C)(a1, 0);
  sub_601C6C14((_DWORD *)a1, (int)v4, FIELD_U32(a1, 1092));
  v7 = dword_60C88BC8;
  v8 = sub_601C6F34((_DWORD *)a1);
  sub_6017113C(v7, v4, v8);
  result = (StateMethodExecuter *)(FIELD_U32(a1, 1112) - 3);
  switch ( FIELD_U32(a1, 1112) )
  {
    case 3:
    case 4:
    case 5:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1C:
    case 0x21:
      v5 = (StateBase *)&unk_60C8A92C;
      return sub_601B1FA4(a1, v5);
    case 6:
    case 0xA:
    case 0x1A:
    case 0x1B:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
      v5 = (StateBase *)&unk_60C8A974;
      return sub_601B1FA4(a1, v5);
    case 7:
      v5 = (StateBase *)&dword_60C8A950;
      return sub_601B1FA4(a1, v5);
    case 0xB:
    case 0xC:
      v5 = (StateBase *)&unk_60C8A998;
      return sub_601B1FA4(a1, v5);
    default:
      return result;
  }
  return result;
}
