/* sub_603E98D4
 * address: 0x603E98D4   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E98D4(int a1, int a2)
{
  StateMethodExecuter *result; // r0
  int v4; // r6
  unsigned int i; // r5
  unsigned int v6; // r0
  unsigned int v7; // r7
  int v8; // r3
  int v9; // r2
  int v10; // r7
  bool v11; // zf

  result = *(StateMethodExecuter **)(a1 + 60);
  if ( (int)result < 1 )
    goto LABEL_23;
  v4 = 1;
  for ( i = 0; (int)i < (int)result; ++i )
  {
    if ( (FIELD_U32(a1, 80) & v4) == 0 )
    {
      v6 = 0;
      if ( i < 4 )
        v6 = i;
      v7 = *(_DWORD *)(a1 + 4 * v6 + 64);
      if ( v7 >= 4 )
        v7 = 0;
      if ( sub_60793DD4(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32) + 648) + 4)) == 1 )
      {
        sub_60768F98(*(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32), 2);
        FIELD_U32(a1, 80) |= v4;
      }
    }
    result = *(StateMethodExecuter **)(a1 + 60);
    v4 *= 2;
  }
  if ( (int)result < 1 )
  {
LABEL_23:
    a2 = 0;
  }
  else
  {
    v8 = FIELD_U32(a1, 80);
    v9 = FIELD_U32(a1, 60) & 1;
    v10 = 2;
    if ( ((unsigned __int8)result & 1) != 0 )
      a2 = FIELD_U32(a1, 80) & 1;
    else
      v10 = 1;
    if ( result != (StateMethodExecuter *)1 )
    {
      a2 = (unsigned __int8)result & (unsigned __int8)v8 & 1;
      do
      {
        v9 += 2;
        if ( (v8 & v10) != 0 )
          ++a2;
        v11 = (v8 & (2 * v10)) == 0;
        v10 *= 4;
        if ( !v11 )
          ++a2;
      }
      while ( v9 < (int)result );
    }
  }
  if ( a2 >= (int)result )
    return StateMgr__changeState((StateMgr *)(a1 + 108), (StateBase *)&dword_60C99980);
  return result;
}
