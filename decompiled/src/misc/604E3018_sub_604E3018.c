/* sub_604E3018
 * address: 0x604E3018   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E3018(int a1)
{
  int v2; // r1
  _BYTE *v3; // r7
  StateMethodExecuter *result; // r0
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r2

  v3 = (_BYTE *)(a1 + 7305);
  v2 = FIELD_U8(a1, 7305);
  if ( FIELD_U8(a1, 7305) )
  {
    result = *(StateMethodExecuter **)(a1 + 7292);
    if ( result != (StateMethodExecuter *)2 )
      return result;
  }
  if ( FIELD_U8(a1, 11005) )
  {
    result = *(StateMethodExecuter **)(a1 + 10992);
    if ( result != (StateMethodExecuter *)2 )
      return result;
  }
  if ( FIELD_U8(a1, 14705) )
  {
    result = *(StateMethodExecuter **)(a1 + 14692);
    if ( result != (StateMethodExecuter *)2 )
      return result;
  }
  if ( FIELD_U8(a1, 18405) )
  {
    result = *(StateMethodExecuter **)(a1 + 18392);
    if ( result != (StateMethodExecuter *)2 )
      return result;
  }
  if ( FIELD_U8(a1, 20524) )
  {
    v5 = (_DWORD *)dword_60C99DEC;
    if ( !v2 )
      goto LABEL_19;
LABEL_14:
    v6 = FIELD_U32(a1, 7284);
    v7 = v6;
    if ( v6 >= 99 )
      v7 = 99;
    if ( v6 < 0 )
      v7 = 0;
    v5[10] = v7;
    goto LABEL_19;
  }
  sub_608289C4(dword_60CC6E04, *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7));
  v5 = (_DWORD *)dword_60C99DEC;
  FIELD_U32(dword_60C99DEC, 52) = FIELD_U32(dword_60C99DEC, 48);
  v5[31] = v5[30];
  v5[49] = v5[48];
  v5[67] = v5[66];
  v5[85] = v5[84];
  v5[103] = v5[102];
  if ( *v3 )
    goto LABEL_14;
LABEL_19:
  if ( FIELD_U8(a1, 11005) )
  {
    v8 = FIELD_U32(a1, 10984);
    v9 = v8;
    if ( v8 >= 99 )
      v9 = 99;
    if ( v8 < 0 )
      v9 = 0;
    v5[28] = v9;
  }
  if ( FIELD_U8(a1, 14705) )
  {
    v10 = FIELD_U32(a1, 14684);
    v11 = v10;
    if ( v10 >= 99 )
      v11 = 99;
    if ( v10 < 0 )
      v11 = 0;
    v5[46] = v11;
  }
  if ( FIELD_U8(a1, 18405) )
  {
    v12 = FIELD_U32(a1, 18384);
    v13 = v12;
    if ( v12 >= 99 )
      v13 = 99;
    if ( v12 < 0 )
      v13 = 0;
    v5[64] = v13;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA580C);
}
