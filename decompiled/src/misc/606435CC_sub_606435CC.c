/* sub_606435CC
 * address: 0x606435CC   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606435CC(int a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r6
  int v4; // r1
  int result; // r0
  int v6; // r0
  float v7; // s0
  float v8; // s2
  StateMgr *v9; // r0
  int *v10; // r1
  int v11; // r1
  int v12; // r1

  v2 = FIELD_U32(a1, 20);
  v3 = (v2 >> 20) & 7;
  FIELD_U32(a1, 80) = v3;
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1);
  result = 2;
  if ( v4 == 1 )
  {
    if ( v3 > 3 )
    {
      v9 = (StateMgr *)(a1 + 6084);
      v10 = &dword_60CB5B0C;
LABEL_15:
      StateMgr__changeState(v9, (StateBase *)v10);
      v12 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
      result = 2;
      if ( v12 )
        return 1;
      return result;
    }
    v6 = (v2 >> 20) & 7;
    FIELD_U32(a1, 6100) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6104) = FIELD_U32(a1, 112);
    v7 = (float)((FIELD_U16(a1, 26) & 0xFu) + 1) * 0.125;
    switch ( v6 )
    {
      case 2:
        v8 = (float)((FIELD_U16(a1, 26) & 0xFu) + 1) * 0.125;
        break;
      case 1:
        v8 = 0.0;
        FIELD_F32(a1, 120) = -v7;
        goto LABEL_12;
      case 0:
        v8 = 0.0;
        FIELD_F32(a1, 120) = v7;
        goto LABEL_12;
      default:
        v8 = -v7;
        break;
    }
    FIELD_U32(a1, 120) = 0;
LABEL_12:
    FIELD_F32(a1, 124) = v8;
    v11 = FIELD_U32(a1, 20);
    FIELD_U8(a1, 6108) = (unsigned __int8)v11 >> 4;
    v9 = (StateMgr *)(a1 + 6084);
    if ( (v11 & 0x100) != 0 )
      v10 = &dword_60CB5ACC;
    else
      v10 = &dword_60CB5A6C;
    goto LABEL_15;
  }
  return result;
}
