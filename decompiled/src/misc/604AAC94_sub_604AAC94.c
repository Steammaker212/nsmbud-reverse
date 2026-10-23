/* sub_604AAC94
 * address: 0x604AAC94   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AAC94(int a1)
{
  int v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r2
  int v8; // r2
  int v9; // r1
  StateMethodExecuter *result; // r0

  v3 = (int *)(a1 + 279736);
  v2 = FIELD_U32(a1, 279736);
  if ( !*(v3 - 69919) )
  {
    if ( v2 < 1 )
    {
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
    v4 = 0;
    do
    {
      v5 = 0;
      if ( v4 < 4 )
        v5 = v4;
      ++v4;
      *(_DWORD *)(a1 + 20556 * v5 + 3732) |= 4u;
      v2 = *v3;
    }
    while ( (int)v4 < *v3 );
  }
  if ( v2 < 1 )
    goto LABEL_14;
  v6 = 0;
  while ( 1 )
  {
    v7 = 0;
    if ( v6 < 4 )
      v7 = v6;
    v8 = a1 + 20556 * v7;
    if ( FIELD_U8(v8, 24276) )
    {
      if ( FIELD_U32(v8, 24228) == 6 )
        break;
    }
    if ( (int)++v6 >= v2 )
      goto LABEL_14;
  }
  v9 = 1;
LABEL_15:
  result = (StateMethodExecuter *)sub_604AC434(a1, v9);
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U8(a1, 56) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA15B0);
  }
  return result;
}
