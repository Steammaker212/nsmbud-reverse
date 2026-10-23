/* sub_604BAD30
 * address: 0x604BAD30   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BAD30(int a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int a5; // [sp+0h] [bp-18h] BYREF
  int v10; // [sp+4h] [bp-14h]

  v3 = 0;
  FIELD_U32(a1, 3660) = 0;
  FIELD_U32(a1, 3664) = 0;
  if ( a2 )
  {
    FIELD_U32(a1, 3668) = a2[15];
    FIELD_U32(a1, 3672) = a2[4];
    v3 = a2[1];
  }
  else
  {
    FIELD_U32(a1, 3668) = 0;
    FIELD_U32(a1, 3672) = 0;
  }
  FIELD_U32(a1, 3676) = v3;
  FIELD_U8(a1, 3697) = 1;
  FIELD_U32(a1, 3680) = 0;
  FIELD_U32(a1, 3684) = 0;
  sub_60473DE4((_DWORD *)(a1 + 40), 3u, &dword_60CA2560, 0);
  sub_604745EC(a1 + 40, 3u, 0);
  sub_6047455C(a1 + 40, 3u, (float)FIELD_U32(a1, 3672));
  v4 = FIELD_U32(a1, 3652);
  v5 = FIELD_U32(v4, 176);
  a5 = (int)&sead__SafeStringBase__vtable;
  v10 = v5;
  sub_6047E0EC(&a5, v4, 1, FIELD_U32(a1, 3676));
  v6 = FIELD_U32(a1, 3656);
  v7 = FIELD_U32(v6, 176);
  a5 = (int)&sead__SafeStringBase__vtable;
  v10 = v7;
  sub_6047E0EC(&a5, v6, 1, FIELD_U32(a1, 3668));
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2580);
}
