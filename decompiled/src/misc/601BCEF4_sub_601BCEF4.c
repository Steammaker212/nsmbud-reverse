/* sub_601BCEF4
 * address: 0x601BCEF4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BCEF4(int a1, _DWORD *a2, int *a3)
{
  int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  _DWORD *v9; // r0
  int v10; // r5
  int result; // r0

  v5 = a1 + 1084;
  sub_6019EC34((_DWORD *)(a1 + 1084), a2);
  v6 = *a3;
  FIELD_U32(a1, 92) = *a3;
  v7 = a3[1];
  FIELD_U32(a1, 96) = v7;
  v8 = a3[2];
  FIELD_U32(a1, 100) = v8;
  FIELD_U32(a1, 80) = v6;
  FIELD_U32(a1, 84) = v7;
  FIELD_U32(a1, 88) = v8;
  v9 = (_DWORD *)sub_601E0040(v5);
  FIELD_U32(a1, 984) = *v9;
  FIELD_U32(a1, 988) = v9[1];
  FIELD_U32(a1, 992) = v9[2];
  FIELD_U32(a1, 1140) = 0;
  FIELD_U32(a1, 1144) = 0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 92))(a1) == 1 )
  {
    FIELD_F32(a1, 200) = 8.0 * sub_601C6030(a1);
    v10 = (*((int (**)(void))stru_60C8ABD4.vtable + 2))();
    if ( v10 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    StateMgr__changeState((StateMgr *)(a1 + 904), &stru_60C8ABD4);
  }
  result = FIELD_U32(a1, 1108) | 1;
  FIELD_U32(a1, 1108) = result;
  return result;
}
