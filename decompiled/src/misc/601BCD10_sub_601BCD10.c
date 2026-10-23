/* sub_601BCD10
 * address: 0x601BCD10   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601BCD10(int a1)
{
  int v2; // r6
  _DWORD *v3; // r0
  __n64 v4; // d0
  int v5; // s2
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r5
  StateBase *v10; // r1
  int v11; // r5

  FIELD_U8(a1, 216) &= ~2u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 124))(a1);
  v2 = sub_601CF9C0(dword_60C8AEF0);
  sub_6019EC34((_DWORD *)(a1 + 1084), (_DWORD *)(v2 + 1032));
  FIELD_U32(a1, 1020) = 0;
  FIELD_U32(a1, 1024) = 0;
  FIELD_U32(a1, 180) = 0;
  v3 = (_DWORD *)sub_601E0040(a1 + 1084);
  FIELD_U32(a1, 984) = *v3;
  FIELD_U32(a1, 988) = v3[1];
  FIELD_U32(a1, 992) = v3[2];
  v4.n64_u64[0] = sub_601BA56C(a1, (float *)(v2 + 80), FIELD_U32(v2, 180)).n64_u64[0];
  *(__n64 *)(a1 + 80) = v4;
  FIELD_U32(a1, 88) = v5;
  *(__n64 *)(a1 + 92) = v4;
  FIELD_U32(a1, 100) = v5;
  if ( sub_601DA01C(a1 + 1084) == 1 )
  {
    sub_6019EC34((_DWORD *)(a1 + 1148), (_DWORD *)(a1 + 1084));
    sub_6019EC34((_DWORD *)(a1 + 1160), (_DWORD *)(a1 + 1084));
    v6 = FIELD_U32(a1, 80);
    FIELD_U32(a1, 1172) = v6;
    v7 = FIELD_U32(a1, 84);
    FIELD_U32(a1, 1176) = v7;
    v8 = FIELD_U32(a1, 88);
    FIELD_U32(a1, 1180) = v8;
    FIELD_U32(a1, 1184) = v6;
    FIELD_U32(a1, 1188) = v7;
    FIELD_U32(a1, 1192) = v8;
    FIELD_U32(a1, 1196) = 0;
    FIELD_U8(a1, 1200) = 0;
    FIELD_U32(a1, 1204) = 0;
    FIELD_U32(a1, 1108) |= 8u;
    v9 = (*(int (**)(void))(dword_60C8ACF4 + 8))();
    if ( v9 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v10 = (StateBase *)&dword_60C8ACF4;
  }
  else
  {
    FIELD_U32(a1, 1108) &= ~8u;
    v11 = (*((int (**)(void))stru_60C8ABD4.vtable + 2))();
    if ( v11 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v10 = &stru_60C8ABD4;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 904), v10);
}
