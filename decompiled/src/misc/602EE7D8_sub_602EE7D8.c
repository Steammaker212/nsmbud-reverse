/* sub_602EE7D8
 * address: 0x602EE7D8   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EE7D8(int a1, int a2, unsigned int a3, int a4)
{
  int result; // r0
  _BYTE *v9; // r9
  _DWORD *v10; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r6
  unsigned int v14; // r0
  ColliderBase *v15; // r4

  v9 = (_BYTE *)(a1 + 7525);
  result = FIELD_U8(a1, 7525);
  if ( !result )
  {
    sub_60001688(a1, 17, -1);
    v10 = *(_DWORD **)(a1 + 56);
    v11 = FIELD_U8(a1, 7529);
    v10[1571] = a2;
    if ( v11 )
      a3 = -1;
    (*(void (__fastcall **)(_DWORD *, unsigned int))(*v10 + 68))(v10, a3);
    v12 = a1 + 7368;
    if ( a4 == 1 )
      *(_BYTE *)(*(_DWORD *)v12 + 71) = 1;
    *(_BYTE *)(*(_DWORD *)v12 + 74) = 1;
    if ( a3 <= 3 )
    {
      v13 = dword_60C7F52C;
      v14 = sub_602856C4(v10 + 1573);
      sub_60022760(0.0, 24.0, v13, a1, v14, a3);
    }
    if ( FIELD_U8(a1, 6780) )
    {
      v15 = (ColliderBase *)(a1 + 6104);
      ColliderMgr_removeRelated1(ColliderMgr_instance, v15);
      sub_601601B8(v15);
    }
    *v9 = 1;
    return 1;
  }
  return result;
}
