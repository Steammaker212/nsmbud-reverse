/* sub_60501AE8
 * address: 0x60501AE8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60501AE8(int a1)
{
  int v2; // r1
  _DWORD *v3; // r6
  int result; // r0
  int v5; // r7
  int v6; // r0
  int v7; // r1
  bool v8; // zf
  int i; // r6
  int v10; // r0
  int v11; // r0
  int *v12; // r1

  v2 = FIELD_U32(a1, 1028);
  v3 = (_DWORD *)(a1 + 40);
  if ( v2 >= 256 )
    return sub_6047EBB4(a1 + 40, 0);
  v5 = FIELD_U32(a1, 68);
  v6 = sub_608DE61C(a1 + 52, v2);
  if ( v6 )
    v7 = v6 - FIELD_U32(a1, 64);
  else
    v7 = 0;
  v8 = v5 == 0;
  if ( v5 )
    v8 = v5 == v7;
  if ( v8 )
  {
    result = FIELD_U8(a1, 1043);
    if ( !FIELD_U8(a1, 1043) )
      return result;
    sub_6047EBB4((int)v3, v7);
    v12 = &dword_60CA76BC;
  }
  else
  {
    sub_6047EBB4((int)v3, v7);
    FIELD_U32(a1, 1032) = FIELD_U32(a1, 1028);
    sub_6047F1EC(v3);
    for ( i = 0; i != 256; ++i )
    {
      if ( !*(_BYTE *)(a1 + 500 + i) )
      {
        v10 = sub_608DE61C(a1 + 52, i);
        if ( v10 )
          v11 = v10 - FIELD_U32(a1, 64);
        else
          v11 = 0;
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v11 + 40))(v11, 0);
      }
    }
    v12 = &dword_60CA767C;
  }
  return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v12);
}
