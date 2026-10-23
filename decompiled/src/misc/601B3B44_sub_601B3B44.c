/* sub_601B3B44
 * address: 0x601B3B44   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601B3B44(int a1)
{
  _DWORD *v2; // r7
  int v3; // r2
  int v4; // r5
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  char *v8; // r0
  int i; // r2
  int v10; // r0
  bool v11; // zf
  int v12; // r6
  unsigned int *v13; // r0
  _DWORD v14[3]; // [sp+0h] [bp-28h] BYREF
  _DWORD *v15; // [sp+Ch] [bp-1Ch] BYREF

  if ( sub_601D7414(a1, FIELD_U32(a1, 1148)) )
  {
    FIELD_U32(a1, 1224) = sub_601CFDE0(dword_60C8AEF0);
    FIELD_U32(a1, 1120) &= ~0x8000u;
    FIELD_U8(dword_60C89E18, 17043) = 1;
    FIELD_U32(a1, 1144) = 4;
    FIELD_U32(a1, 1092) = FIELD_U32(a1, 1148);
    v2 = (_DWORD *)(a1 + 1032);
    if ( (FIELD_U8(a1, 1120) & 4) == 0 )
    {
      sub_6019EC34((_DWORD *)(dword_60CC6D78 + 480), (_DWORD *)(a1 + 1032));
      FIELD_U32(dword_60CC6D78, 492) = FIELD_U32(a1, 1092);
    }
    FIELD_F32(a1, 1132) = sub_601D89B8(a1);
    v6 = (_DWORD *)sub_601E039C(v2, FIELD_U32(a1, 1092));
    FIELD_U32(a1, 1044) = v6[21];
    FIELD_U32(a1, 1048) = v6[22];
    FIELD_U32(a1, 1052) = v6[24];
    sub_6019EC34((_DWORD *)(a1 + 1080), v2);
    FIELD_U32(a1, 1108) = FIELD_U32(a1, 1092);
    FIELD_U32(a1, 1120) &= ~0x10000u;
    if ( sub_601DA074(v2) || sub_601D9E28(v2) == 1 )
      sub_601D6648(a1, 0);
    else
      sub_601D55A4(a1, 0, -1, 0);
    FIELD_U32(a1, 1136) = *(_DWORD *)(sub_601C6BF0(a1) + 1016);
    sub_601B402C(a1);
    switch ( FIELD_U32(a1, 1032) )
    {
      case 2:
        sub_60219568(dword_60C8D3F0);
        break;
      case 4:
        if ( FIELD_U32(a1, 1036) == 1 && sub_601DA8A8(v2) == 1 )
        {
          sub_601E14F8(v2, FIELD_U32(a1, 1092), &v15);
          if ( v15 )
          {
            v14[0] = v15[21];
            v14[1] = v15[22];
            v14[2] = v15[24];
            if ( sub_601DA8E0(v14) == 1 )
              sub_601D1498(a1);
          }
        }
        break;
      case 5:
        v7 = (_DWORD *)sub_601E0010(a1 + 1056);
        (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
        (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
        v8 = (char *)v7[1];
        if ( v8 == "W6C1" )
        {
LABEL_27:
          FIELD_U32(a1, 1120) |= 0x10000u;
          sub_601D99F8(a1, FIELD_U32(a1, 1032), 22);
        }
        else
        {
          for ( i = 0; i <= 0x80000; ++i )
          {
            if ( v8[i] != aW6c1[i] )
              break;
            if ( !v8[i] )
              goto LABEL_27;
          }
        }
        break;
      case 6:
        sub_601B4194(a1);
        break;
      default:
        break;
    }
    sub_601D5BDC(a1);
    FIELD_U32(a1, 1120) &= 0xFFFFFFE7;
    if ( sub_601D8D24(a1) == 1 )
    {
      v10 = FIELD_U32(a1, 1120);
    }
    else
    {
      v10 = sub_601D8D88(a1);
      v11 = v10 == 1;
      if ( v10 == 1 )
      {
        v10 = FIELD_U32(a1, 1120);
        v11 = (v10 & 0x400) == 0;
      }
      if ( !v11 )
        goto LABEL_35;
    }
    FIELD_U32(a1, 1120) = v10 | 0x10000;
LABEL_35:
    sub_601C6F70(a1);
    sub_601C6C14(a1, v2, FIELD_U32(a1, 1092));
    v12 = dword_60C88BC8;
    v13 = (unsigned int *)sub_601C6F34(a1);
    return (StateMethodExecuter *)sub_6017113C(v12, v2, v13);
  }
  v3 = 0;
  FIELD_U32(a1, 200) = 0;
  if ( !FIELD_U32(a1, 1172) )
    v3 = -1;
  (*(void (__fastcall **)(int, _DWORD, int, float))(*(_DWORD *)a1 + 336))(a1, 0, v3, 0.0);
  v4 = (*(int (**)(void))(dword_60C8A8E4 + 8))();
  if ( v4 != (*(int (**)(void))(dword_60C8A950 + 8))() )
    FIELD_U16(a1, 440) &= ~4u;
  return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)&dword_60C8A8E4);
}
