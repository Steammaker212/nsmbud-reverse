/* sub_601A9C9C
 * address: 0x601A9C9C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A9C9C(int a1)
{
  int v2; // r0
  int v3; // r5
  bool v4; // zf
  int v5; // r6
  int v6; // r0
  unsigned int v7; // r6
  int v8; // r7
  unsigned int v9; // r0
  _DWORD *v10; // r0
  float v11; // s0
  int v12; // r5
  int v13; // r0
  bool v14; // zf
  StateBase *v15; // r1

  v3 = a1 + 300;
  v2 = FIELD_U32(a1, 300);
  v4 = v2 == -1;
  if ( v2 != -1 )
    v4 = FIELD_U32(a1, 304) == -1;
  if ( v4 || FIELD_U32(a1, 308) == -1 )
  {
    v5 = dword_60C8D4EC;
    v6 = sub_6018691C(a1);
    sub_6021F6E0(v5, v3, v3, v6);
    v7 = FIELD_U32(a1, 240);
    v8 = dword_60CC6D78;
    v9 = sub_6018691C(a1);
    sub_60186FC0(v8 + 984, v7, v9, v3);
  }
  v10 = (_DWORD *)sub_601DFFE4(v3);
  FIELD_U32(a1, 80) = v10[18];
  FIELD_U32(a1, 84) = v10[19];
  FIELD_U32(a1, 88) = v10[20];
  FIELD_U32(a1, 248) = FIELD_U32(a1, 308);
  pakkun_ref(a1);
  FIELD_U32(a1, 180) = dword_60C8A500;
  v11 = FIELD_F32(a1, 84) + -26.0;
  FIELD_F32(a1, 84) = v11;
  FIELD_U32(a1, 380) = FIELD_U32(a1, 80);
  FIELD_F32(a1, 384) = v11;
  FIELD_U32(a1, 388) = FIELD_U32(a1, 88);
  FIELD_U8(a1, 405) = 0;
  FIELD_U32(a1, 400) = 6;
  FIELD_U32(a1, 212) = 1135542272;
  sub_6017793C((_DWORD *)(a1 + 324), a1, &dword_60C8A510);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
  if ( FIELD_U32(a1, 240) != FIELD_U32(dword_60CC6D78, 412) )
    goto LABEL_10;
  v12 = FIELD_U32(dword_60CC6D78, 420);
  v13 = sub_6040E460(FIELD_U8(dword_60CC6D78, 424));
  v14 = v13 == 1;
  if ( v13 == 1 )
    v14 = v12 == FIELD_U32(a1, 248);
  if ( v14 )
  {
    FIELD_U8(a1, 405) = 1;
    v15 = (StateBase *)&unk_60C8A44C;
  }
  else
  {
LABEL_10:
    v15 = (StateBase *)&dword_60C8A3EC;
  }
  StateMgr__changeState((StateMgr *)(a1 + 284), v15);
  return 1;
}
