/* sub_601B78CC
 * address: 0x601B78CC   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B78CC(int a1)
{
  int v2; // r1
  int v3; // r0
  int result; // r0
  int v5; // r5
  int *v6; // r1
  int v7; // r0
  int v8; // r5
  int v9; // r2
  int v10; // r3
  bool v11; // vf
  int v12; // r2
  _DWORD *v13; // r5
  int v14; // r0
  int v15; // r1
  int v16; // r1
  int v17; // r5

  if ( !FIELD_U32(a1, 1144) )
  {
    v3 = sub_601CF9C0(dword_60C8AEF0);
    if ( (FIELD_U8(a1, 1110) & 2) == 0 )
    {
      result = FIELD_U32(a1, 1020) - FIELD_U32(v3, 180);
      if ( result >= 0 )
        goto LABEL_8;
      if ( result != 0x80000000 )
      {
        result = -result;
LABEL_8:
        if ( (unsigned int)result < 0x20000001 )
          return result;
      }
    }
    v5 = (*(int (**)(void))(dword_60C8ACAC + 8))();
    if ( v5 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v6 = &dword_60C8ACAC;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v6);
  }
  if ( sub_601B7B44() == 1 )
  {
    v2 = FIELD_U32(a1, 1108) | 8;
  }
  else
  {
    v7 = sub_601B7C04();
    v2 = FIELD_U32(a1, 1108);
    if ( v7 != 1 )
      goto LABEL_15;
    v2 &= ~8u;
  }
  FIELD_U32(a1, 1108) = v2;
LABEL_15:
  if ( (v2 & 8) != 0 )
  {
    if ( FIELD_S32(a1, 1144) >= 1 )
    {
      v9 = FIELD_U32(a1, 1136);
      v10 = FIELD_U32(a1, 1140);
      v11 = __OFSUB__(v10, v9);
      v12 = v10 - v9;
      if ( v12 < 0 != v11 )
        v12 = FIELD_U32(a1, 1140);
      v13 = (_DWORD *)(FIELD_U32(a1, 1132) + 60 * v12);
      sub_6019EC34((_DWORD *)(a1 + 1148), v13);
      sub_6019EC34((_DWORD *)(a1 + 1160), v13 + 3);
      FIELD_U32(a1, 1172) = v13[6];
      FIELD_U32(a1, 1176) = v13[7];
      FIELD_U32(a1, 1180) = v13[8];
      FIELD_U32(a1, 1184) = v13[9];
      FIELD_U32(a1, 1188) = v13[10];
      FIELD_U32(a1, 1192) = v13[11];
      v14 = v13[12];
      v15 = v13[13];
      FIELD_U32(a1, 1204) = v13[14];
      FIELD_U32(a1, 1200) = v15;
      FIELD_U32(a1, 1196) = v14;
      v16 = FIELD_U32(a1, 1140) + 1;
      if ( v16 >= FIELD_U32(a1, 1136) )
        v16 = 0;
      FIELD_U32(a1, 1140) = v16;
      --FIELD_U32(a1, 1144);
    }
    v17 = (*(int (**)(void))(dword_60C8ACF4 + 8))();
    if ( v17 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v6 = &dword_60C8ACF4;
  }
  else
  {
    v8 = (*(int (**)(void))(dword_60C8ABF8 + 8))();
    if ( v8 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v6 = &dword_60C8ABF8;
  }
  return (int)StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v6);
}
