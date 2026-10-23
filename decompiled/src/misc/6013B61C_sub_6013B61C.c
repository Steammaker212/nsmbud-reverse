/* sub_6013B61C
 * address: 0x6013B61C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6013B61C(_DWORD *result)
{
  int v1; // r1
  unsigned int v2; // r2
  int *v3; // r12
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r3
  int v7; // t1
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // t1

  v1 = EnemyCounterMaybe_instance;
  if ( EnemyCounterMaybe_instance )
  {
    v3 = result + 1692;
    v2 = result[1692];
    if ( v2 >= 4 )
      v2 = 0;
    v4 = EnemyCounterMaybe_instance + 8 * v2;
    v7 = FIELD_U32(v4, 100);
    v6 = (_DWORD *)(v4 + 100);
    v5 = v7;
    if ( v7 >= 1 )
      *v6 = v5 - 1;
    result = (_DWORD *)result[1690];
    if ( result )
    {
      v8 = *v3;
      if ( (unsigned int)*v3 >= 4 )
        v8 = 0;
      v9 = v1 + 8 * v8;
      v11 = FIELD_U32(v9, 104);
      result = (_DWORD *)(v9 + 104);
      v10 = v11;
      if ( v11 >= 1 )
        *result = v10 - 1;
    }
  }
  return result;
}
