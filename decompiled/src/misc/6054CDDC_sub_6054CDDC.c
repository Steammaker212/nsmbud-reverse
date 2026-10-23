/* sub_6054CDDC
 * address: 0x6054CDDC   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6054CDDC(int a1, int a2, char a3, char a4)
{
  _BYTE *v5; // r7
  _BYTE *v6; // r5
  int **v7; // r1
  int v8; // r1
  void (*v9)(void); // r1

  FIELD_U8(a1, 4104) = a3;
  v5 = (_BYTE *)(a1 + 4104);
  FIELD_U8(a1, 4105) = a4;
  v6 = (_BYTE *)(a1 + 4105);
  FIELD_U8(a1, 3688) = 1;
  FIELD_U8(a1, 3689) = 1;
  FIELD_U32(a1, 4096) = a2;
  sub_60473DE4((_DWORD *)(a1 + 40), 3u, &dword_60CACA3C, 0);
  if ( *v5 )
  {
    FIELD_U32(a1, 3684) = 2;
    *(_BYTE *)(FIELD_U32(a1, 3648) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3652) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3656) + 64) |= 1u;
    v7 = *(int ***)(a1 + 3552);
    if ( FIELD_U32(a1, 3548) > 3u )
      v7 += 15;
    v8 = **v7;
    if ( *v6 )
      v9 = *(void (**)(void))(v8 + 104);
    else
      v9 = *(void (**)(void))(v8 + 108);
    v9();
  }
  else
  {
    FIELD_U32(a1, 3684) = 1;
    *(_BYTE *)(FIELD_U32(a1, 3652) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 3656) + 64) &= ~1u;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CACA64);
}
