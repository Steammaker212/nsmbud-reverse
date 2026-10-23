/* sub_603D93FC
 * address: 0x603D93FC   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D93FC(int a1)
{
  int v2; // r5
  int v3; // r6
  int (__fastcall *v4)(int, int *); // r2
  int *v5; // r1
  int v7; // r5

  if ( FIELD_U8(a1, 11814)
    || (v2 = FIELD_U32(a1, 6096),
        v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2),
        v3 == (*(int (**)(void))(dword_60C99074 + 8))()) )
  {
    StateMgr__changeState((StateMgr *)(a1 + 12940), (StateBase *)&dword_60C99198);
    v4 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v5 = &dword_60C99074;
  }
  else
  {
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( v7 == (*(int (**)(void))(dword_60C99034 + 8))() )
      StateMgr__changeState((StateMgr *)(a1 + 12940), (StateBase *)&dword_60C99198);
    FIELD_U8(a1, 11819) = 0;
    v4 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v5 = &dword_60C98FF4;
  }
  return v4(a1, v5);
}
