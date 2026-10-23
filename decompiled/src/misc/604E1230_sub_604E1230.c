/* sub_604E1230
 * address: 0x604E1230   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E1230(int a1)
{
  int v2; // r0
  int *v3; // r1
  int v4; // r2
  int result; // r0
  int *v6; // r3
  int v7; // r12
  int v8; // lr
  bool v9; // zf
  unsigned int v10; // r0

  sub_604E254C();
  v3 = (int *)(a1 + 5732);
  v2 = FIELD_U32(a1, 5732);
  if ( v2 )
    v4 = FIELD_U32(a1, 5740) + v2;
  else
    v4 = 0;
  v6 = (int *)(a1 + 5736);
  result = FIELD_U32(a1, 5736);
  if ( result >= 0 )
  {
    FIELD_U32(a1, 5740) = -1;
    v4 = result;
  }
  v7 = FIELD_U8(a1, 5745);
  if ( FIELD_U8(a1, 5745) )
    v4 = 0;
  *v3 = v4;
  v8 = FIELD_U32(a1, 5712);
  if ( v8 != 1 || FIELD_U8(LevelInfo_instance, 28) || FIELD_U8(LevelInfo_instance, 29) )
  {
    if ( result >= -1 )
      result = -1;
    *v6 = result;
    if ( v4 <= 0 )
    {
      if ( v8 != 1 )
        return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA559C);
LABEL_15:
      v9 = v4 == 0;
      if ( !v4 )
        v9 = v7 == 0;
      if ( v9 )
      {
        v10 = FIELD_U32(a1, 5724);
        if ( v10 >= 6 )
          v10 = 0;
        *(_BYTE *)(dword_60C99DD4 + 72 * v10 + 323) = 1;
      }
      return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA559C);
    }
  }
  else if ( result >= 0 )
  {
    v4 = 0;
    *v3 = 0;
    *v6 = -1;
    goto LABEL_15;
  }
  return result;
}
