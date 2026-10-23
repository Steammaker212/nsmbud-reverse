/* sub_6048D91C
 * address: 0x6048D91C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6048D91C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r2
  int v4; // r1
  void (*v5)(void); // r1
  int v6; // r1
  int a5; // [sp+0h] [bp-18h] BYREF
  int v9; // [sp+4h] [bp-14h]

  FIELD_U16(a1, 13816) = 257;
  sub_6048DA90(a1);
  v2 = *(_DWORD **)(a1 + 14236);
  v3 = FIELD_U32(dword_60C99DEC, 48);
  if ( v3 == 6 || v2[2] != v3 )
  {
    v2[2] = v3;
    v2[1] |= 1u;
    v2 = *(_DWORD **)(a1 + 14236);
  }
  if ( v2[3] )
  {
    v2[3] = 0;
    v2[1] |= 1u;
  }
  if ( *(_BYTE *)(FIELD_U32(dword_60CC6E04, 40) + 6256) )
  {
    a5 = (int)&sead__SafeStringBase__vtable;
    v9 = sub_604923E4(2);
    sub_60473DE4((_DWORD *)(a1 + 36), 4u, &a5, 0);
    v4 = FIELD_U32(a1, 3548);
    if ( FIELD_U32(a1, 3544) > 4u )
      v4 += 80;
    v5 = *(void (**)(void))(**(_DWORD **)v4 + 104);
  }
  else
  {
    a5 = (int)&sead__SafeStringBase__vtable;
    v9 = sub_604923E4(2);
    sub_60473DE4((_DWORD *)(a1 + 36), 4u, &a5, 0);
    v6 = FIELD_U32(a1, 3548);
    if ( FIELD_U32(a1, 3544) > 4u )
      v6 += 80;
    v5 = *(void (**)(void))(**(_DWORD **)v6 + 108);
  }
  v5();
  return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60C9F480);
}
