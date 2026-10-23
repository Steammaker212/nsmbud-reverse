/* sub_605CD938
 * address: 0x605CD938   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605CD938(
        int a1,
        _DWORD *a2,
        int a3,
        _QWORD *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        char a12,
        char a13,
        int a14,
        int a15,
        char a16)
{
  int v16; // r12
  unsigned int v17; // r5
  int v18; // r5
  int v19; // r4
  int v20; // r7
  int v21; // r5
  int v22; // s0
  int *v23; // r1

  FIELD_U32(a1, 36) = a2;
  FIELD_U32(a1, 40) = a3;
  FIELD_U8(a1, 92) = 0;
  FIELD_U8(a1, 93) = 0;
  FIELD_U8(a1, 94) = a13;
  FIELD_U8(a1, 99) = a12;
  FIELD_U8(a1, 100) = 0;
  FIELD_U8(a1, 101) = 0;
  FIELD_U8(a1, 102) = 0;
  FIELD_U8(a1, 103) = a8;
  v16 = a9 ^ 1;
  FIELD_U8(a1, 104) = a9;
  FIELD_U8(a1, 105) = a9 ^ 1;
  FIELD_U8(a1, 106) = a9;
  FIELD_U8(a1, 107) = a10;
  v17 = a5;
  if ( a5 > 7 )
    v17 = 0;
  v18 = dword_60CB1030[v17 + 3];
  FIELD_U32(a1, 60) = v18;
  v19 = byte_60AFE3F4[a9];
  v20 = v19 * v18;
  v21 = byte_60AFE3F4[v16] * v18;
  FIELD_U32(a1, 68) = v20;
  FIELD_U32(a1, 72) = v21 >> a16;
  FIELD_U32(a1, 76) = a6 << 28;
  v22 = (int)(float)((float)(a7 << 28) * (float)v19);
  FIELD_U32(a1, 80) = a7 << 28;
  FIELD_U32(a1, 84) = v22 - 0x40000000;
  *a2 = v22 - 0x40000000;
  FIELD_U8(a1, 96) = 0;
  if ( (*(_QWORD *)(EventMgr__instance + 16) & *a4) == 0 )
  {
    if ( a8 != 1 )
    {
      if ( !a8 )
      {
        v23 = &dword_60CB0F84;
        return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v23);
      }
LABEL_10:
      v23 = &dword_60CB0FA4;
      return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v23);
    }
LABEL_12:
    FIELD_U8(a1, 96) = 1;
    v23 = &dword_60CB0FC4;
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v23);
  }
  if ( a8 == 1 )
  {
    FIELD_U8(a1, 106) = v16;
    goto LABEL_12;
  }
  if ( a8 )
    goto LABEL_10;
  *a2 = FIELD_U32(a1, 84) + v19 * (a6 << 28);
  v23 = &dword_60CB0FA4;
  return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v23);
}
