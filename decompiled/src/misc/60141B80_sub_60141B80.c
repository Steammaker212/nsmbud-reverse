/* sub_60141B80
 * address: 0x60141B80   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60141B80(int a1)
{
  _DWORD *result; // r0
  unsigned int v3; // r2
  int v4; // r2
  _DWORD *v5; // r2
  int v6; // r3
  int v7; // t1
  unsigned int v8; // r1
  _DWORD *v9; // r0
  int v10; // r1
  int v11; // t1

  sub_60142B14();
  result = (_DWORD *)EnemyCounterMaybe_instance;
  if ( EnemyCounterMaybe_instance )
  {
    v3 = FIELD_U32(a1, 6744);
    if ( v3 >= 4 )
      v3 = 0;
    v4 = EnemyCounterMaybe_instance + 8 * v3;
    v7 = FIELD_U32(v4, 132);
    v5 = (_DWORD *)(v4 + 132);
    v6 = v7;
    if ( v7 >= 1 )
      *v5 = v6 - 1;
    if ( FIELD_U32(a1, 6736) )
    {
      v8 = FIELD_U32(a1, 6744);
      if ( v8 >= 4 )
        v8 = 0;
      v9 = &result[2 * v8];
      v11 = v9[34];
      result = v9 + 34;
      v10 = v11;
      if ( v11 >= 1 )
        *result = v10 - 1;
    }
  }
  return result;
}
