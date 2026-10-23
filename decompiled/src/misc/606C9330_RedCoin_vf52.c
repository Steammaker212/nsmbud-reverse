/* RedCoin_vf52
 * address: 0x606C9330   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RedCoin_vf52(int a1)
{
  _BYTE *v2; // r0
  char v3; // r1
  int v4; // t1
  char v5; // r1
  unsigned int v6; // r1
  int v7; // r1
  _DWORD *v8; // r3
  __int64 v9; // r0
  int result; // r0

  v4 = FIELD_U8(a1, 7080);
  v2 = (_BYTE *)(a1 + 7080);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    *v2 = v5;
    if ( v5 == 1 )
    {
      v6 = FIELD_U32(a1, 7064);
      if ( v6 >= 8 )
        v6 = 0;
      v7 = EnemyCounterMaybe_instance + 4 * v6;
      v8 = (_DWORD *)(v7 + 68);
      if ( !FIELD_U32(a1, 7076) )
        v8 = (_DWORD *)(v7 + 36);
      *v8 = 0;
    }
  }
  v9 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  result = FIELD_U32(EventMgr__instance, 16) & v9
         | ((FIELD_U64(EventMgr__instance, 16) & (unsigned __int64)v9) >> 32);
  if ( result )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
    if ( result == 1 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBAC5C);
  }
  return result;
}
