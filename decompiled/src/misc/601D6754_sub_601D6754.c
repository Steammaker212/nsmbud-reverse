/* sub_601D6754
 * address: 0x601D6754   size: 1604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601D6754(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  int *v5; // r1
  int v6; // r1
  int v7; // r7
  unsigned int *v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  float *v11; // r3
  StateMethodExecuter *result; // r0
  int v13; // r0
  int v14; // r1
  int v15; // r0
  bool v16; // zf
  int v17; // r6
  unsigned int *v18; // r0
  float v19; // s0

  v2 = a1 + 258;
  if ( sub_601DADDC(a1 + 258) == 1 && sub_601DAE14(a1 + 261) == 1 )
  {
    sub_6019EC34(v2, a1 + 261);
    a1[261] = -1;
    a1[262] = -1;
    a1[263] = -1;
    v3 = a1[258];
    if ( v3 == 3 )
    {
      v4 = 1;
    }
    else
    {
      if ( v3 != 5 )
      {
LABEL_19:
        v5 = (int *)&unk_60C8AADC;
        return sub_601B1FA4((int)a1, (StateBase *)v5);
      }
      v4 = 2;
    }
    a1[286] = v4;
    goto LABEL_19;
  }
  if ( sub_601D9D84(a1 + 261) == 1 )
  {
    sub_601D413C(a1);
    a1[51] = 0;
    v5 = &dword_60C8A9E0;
    return sub_601B1FA4((int)a1, (StateBase *)v5);
  }
  if ( sub_601D9F8C(a1 + 261) == 1 && !FIELD_U8(dword_60CC6D78, 505) )
  {
    sub_601D413C(a1);
    sub_601D0D88((int)a1);
    return sub_601B3F54((int)a1);
  }
  if ( sub_601E1398(a1 + 261) == 1 )
  {
    sub_601D413C(a1);
    sub_601D1A14((int)a1);
    v5 = (int *)&unk_60C8AA94;
    return sub_601B1FA4((int)a1, (StateBase *)v5);
  }
  if ( sub_601DA074(a1 + 261) == 1 )
  {
    sub_601D413C(a1);
    sub_601D43F8((int)a1, v6);
    if ( sub_601C6D90((int)a1, v2) )
    {
      sub_6019EC34(a1 + 270, v2);
      a1[277] = a1[273];
      a1[280] &= ~0x10u;
      ((void (__fastcall *)(_DWORD *, _DWORD))loc_601C6F7C)(a1, 0);
      sub_601C6C14(a1, (int)v2, a1[273]);
      v7 = dword_60C88BC8;
      v8 = sub_601C6F34(a1);
      sub_6017113C(v7, v2, v8);
    }
    a1[280] |= 0x20u;
    v9 = (_DWORD *)sub_601E0040(v2);
    a1[239] = *v9;
    a1[240] = v9[1];
    a1[241] = v9[2];
    v10 = sub_601E0070(v2, a1 + 261);
    v11 = (float *)(a1 + 239);
    switch ( v10 )
    {
      case 2:
        *((float *)a1 + 241) = *((float *)a1 + 241) + 60.0;
        break;
      case 3:
        *((float *)a1 + 241) = *((float *)a1 + 241) - 60.0;
        break;
      case 4:
        v19 = *v11 - 60.0;
        goto LABEL_39;
      case 5:
        v19 = *v11 + 60.0;
LABEL_39:
        *v11 = v19;
        break;
      default:
        break;
    }
    sub_601D55A4((int)a1, 0, 7, v11);
    result = (StateMethodExecuter *)(a1[278] - 3);
    switch ( a1[278] )
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
        v5 = (int *)&unk_60C8A92C;
        return sub_601B1FA4((int)a1, (StateBase *)v5);
      case 6:
      case 0xA:
      case 0x1A:
      case 0x1B:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
        v5 = (int *)&unk_60C8A974;
        return sub_601B1FA4((int)a1, (StateBase *)v5);
      case 7:
        v5 = &dword_60C8A950;
        return sub_601B1FA4((int)a1, (StateBase *)v5);
      case 0xB:
      case 0xC:
        v5 = (int *)&unk_60C8A998;
        return sub_601B1FA4((int)a1, (StateBase *)v5);
      default:
        return result;
    }
    return result;
  }
  if ( sub_601D9E28(a1 + 261) == 1 )
  {
    sub_601D413C(a1);
    v5 = (int *)&unk_60C8AA28;
    return sub_601B1FA4((int)a1, (StateBase *)v5);
  }
  v13 = a1[280];
  if ( (v13 & 0x20) == 0 )
  {
    sub_601D413C(a1);
    sub_601D43F8((int)a1, v14);
    if ( a1[261] != -1 )
    {
      v15 = a1[262];
      v16 = v15 == -1;
      if ( v15 != -1 )
        v16 = a1[263] == -1;
      if ( !v16 )
      {
        if ( sub_601C6D90((int)a1, v2) == 1 )
        {
          sub_6019EC34(a1 + 270, v2);
          a1[277] = a1[273];
          a1[280] &= ~0x10u;
          ((void (__fastcall *)(_DWORD *, _DWORD))loc_601C6F7C)(a1, 0);
          sub_601C6C14(a1, (int)v2, a1[273]);
          v17 = dword_60C88BC8;
          v18 = sub_601C6F34(a1);
          sub_6017113C(v17, v2, v18);
        }
        sub_601D55A4((int)a1, 0, -1, 0);
        result = (StateMethodExecuter *)(a1[278] - 3);
        switch ( a1[278] )
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
            v5 = (int *)&unk_60C8A92C;
            return sub_601B1FA4((int)a1, (StateBase *)v5);
          case 6:
          case 0xA:
          case 0x1A:
          case 0x1B:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x20:
            v5 = (int *)&unk_60C8A974;
            return sub_601B1FA4((int)a1, (StateBase *)v5);
          case 7:
            v5 = &dword_60C8A950;
            return sub_601B1FA4((int)a1, (StateBase *)v5);
          case 0xB:
          case 0xC:
            v5 = (int *)&unk_60C8A998;
            return sub_601B1FA4((int)a1, (StateBase *)v5);
          default:
            return result;
        }
        return result;
      }
    }
    if ( sub_601D9F8C(v2) == 1 && FIELD_U8(dword_60CC6D78, 505) )
      a1[280] |= 0x40u;
    return sub_601B3F54((int)a1);
  }
  a1[280] = v13 & 0xFFFFFFDF;
  sub_601D55A4((int)a1, 0, -1, 0);
  result = (StateMethodExecuter *)(a1[278] - 3);
  switch ( a1[278] )
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
      v5 = (int *)&unk_60C8A92C;
      return sub_601B1FA4((int)a1, (StateBase *)v5);
    case 6:
    case 0xA:
    case 0x1A:
    case 0x1B:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
      v5 = (int *)&unk_60C8A974;
      return sub_601B1FA4((int)a1, (StateBase *)v5);
    case 7:
      v5 = &dword_60C8A950;
      return sub_601B1FA4((int)a1, (StateBase *)v5);
    case 0xB:
    case 0xC:
      v5 = (int *)&unk_60C8A998;
      return sub_601B1FA4((int)a1, (StateBase *)v5);
    default:
      return result;
  }
  return result;
}
