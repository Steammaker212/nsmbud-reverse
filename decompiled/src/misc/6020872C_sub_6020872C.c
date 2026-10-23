/* sub_6020872C
 * address: 0x6020872C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020872C(int a1)
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
  char v11; // r1

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
  v11 = 5;
  FIELD_U32(a1, 88) = v10[20];
  FIELD_U32(a1, 248) = FIELD_U32(a1, 308);
  if ( FIELD_U32(a1, 20) == 1 )
    v11 = 6;
  FIELD_U8(a1, 368) = v11;
  sub_60208888(a1);
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 212) = 1125515264;
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 204) = 0;
  sub_6017793C((_DWORD *)(a1 + 324), a1, &dword_60C8C8D4);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
  StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8C7F4);
  if ( !sub_6019B154(0, 0x14u) && !sub_6019B154(4u, 0) )
    FIELD_U8(a1, 404) = 1;
  return 1;
}
