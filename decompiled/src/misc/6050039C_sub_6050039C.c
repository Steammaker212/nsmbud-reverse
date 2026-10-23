/* sub_6050039C
 * address: 0x6050039C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6050039C(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r2

  result = (StateMethodExecuter *)FIELD_U8(a1, 4630);
  if ( result )
    return result;
  if ( FIELD_U8(a1, 4631) )
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA7528);
  v3 = FIELD_U32(a1, 7724);
  if ( (v3 & 0x2000) != 0 )
  {
LABEL_38:
    sub_60502694(a1 + 3588);
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA7528);
  }
  result = (StateMethodExecuter *)FIELD_U8(a1, 4634);
  if ( FIELD_U8(a1, 4634) )
    return result;
  result = (StateMethodExecuter *)(a1 + 4616);
  v4 = FIELD_U32(a1, 4616);
  if ( v4 == 1 )
  {
    v4 = 1;
    if ( (v3 & 0x80) == 0 )
      goto LABEL_12;
    v4 = 0;
  }
  else
  {
    if ( (v3 & 0x40) == 0 )
      goto LABEL_12;
    v4 = 1;
  }
  FIELD_U32(result, 0x0) = (void *)v4;
LABEL_12:
  v5 = FIELD_U32(a1, 7728);
  if ( (v5 & 0x2000) != 0 )
    goto LABEL_38;
  if ( v4 == 1 )
  {
    v4 = 1;
    if ( (v5 & 0x80) == 0 )
      goto LABEL_19;
    v4 = 0;
  }
  else
  {
    if ( (v5 & 0x40) == 0 )
      goto LABEL_19;
    v4 = 1;
  }
  FIELD_U32(result, 0x0) = (void *)v4;
LABEL_19:
  v6 = FIELD_U32(a1, 7732);
  if ( (v6 & 0x2000) != 0 )
    goto LABEL_38;
  if ( v4 == 1 )
  {
    v4 = 1;
    if ( (v6 & 0x80) == 0 )
      goto LABEL_26;
    v4 = 0;
  }
  else
  {
    if ( (v6 & 0x40) == 0 )
      goto LABEL_26;
    v4 = 1;
  }
  FIELD_U32(result, 0x0) = (void *)v4;
LABEL_26:
  v7 = FIELD_U32(a1, 7736);
  if ( (v7 & 0x2000) != 0 )
    goto LABEL_38;
  if ( v4 == 1 )
  {
    v4 = 1;
    if ( (v7 & 0x80) == 0 )
      goto LABEL_33;
    v4 = 0;
  }
  else
  {
    if ( (v7 & 0x40) == 0 )
      goto LABEL_33;
    v4 = 1;
  }
  FIELD_U32(result, 0x0) = (void *)v4;
LABEL_33:
  v8 = FIELD_U32(a1, 7740);
  if ( (v8 & 0x2000) != 0 )
    goto LABEL_38;
  if ( v4 == 1 )
  {
    if ( (v8 & 0x80) != 0 )
      FIELD_U32(result, 0x0) = 0;
  }
  else if ( (v8 & 0x40) != 0 )
  {
    FIELD_U32(result, 0x0) = (void *)1;
  }
  return result;
}
