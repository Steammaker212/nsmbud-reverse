/* sub_605EE004
 * address: 0x605EE004   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EE004(int a1)
{
  char v2; // r12
  unsigned int v3; // r0
  int v4; // r1
  void (__fastcall ***v5)(_DWORD, int *); // r5
  int result; // r0
  int v7; // r1
  _DWORD *v8; // r1
  int v9; // r2
  _BYTE *v10; // r3
  _BYTE *v11; // r2
  int v12; // r12
  int v13; // r5

  sub_605DCC74(a1);
  v3 = FIELD_U8(a1, 84);
  v4 = 0;
  if ( v3 < 4 )
    v4 = (char)v3;
  v5 = *(void (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v4 + 48);
  if ( ((unsigned int)&dword_60C7B37C & ~(1616830532 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 )
    (**v5)(v5, &dword_60C7B378);
  result = a1 + 8036;
  v7 = FIELD_U32(a1, 8036);
  if ( v7 )
    *(_DWORD *)result = v7 - 1;
  v8 = (_DWORD *)(a1 + 8040);
  v9 = FIELD_U32(a1, 8040);
  if ( v9 )
    *v8 = v9 - 1;
  v10 = (_BYTE *)(a1 + 8044);
  v11 = (_BYTE *)(a1 + 8052);
  if ( FIELD_U8(a1, 8044) )
  {
    *v11 = 1;
    *v10 = 0;
  }
  else
  {
    v12 = (unsigned __int8)*v11;
    *v10 = 0;
    if ( !v12 )
      return result;
  }
  v13 = FIELD_U32(a1, 8048) - 1;
  FIELD_U32(a1, 8048) = v13;
  if ( !v13 )
  {
    FIELD_U32(a1, 8048) = 5;
    *v11 = 0;
    *(_DWORD *)result = 30;
    *v8 = 15;
    FIELD_U32(a1, 8056) = 1098907648;
    FIELD_U32(a1, 8060) = 1098907648;
    FIELD_U32(a1, 8064) = 1057523849;
    return 8064;
  }
  return result;
}
