/* sub_6091872C
 * address: 0x6091872C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6091872C(_DWORD *result, int a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // lr
  int v5; // r12
  int v6; // r5
  int (*v7)(void); // r2
  int v8; // r3
  bool v9; // zf

  v3 = result[12];
  v4 = a3[34];
  v5 = *(_DWORD *)(v3 + 4 * a2);
  v6 = a3[37];
  v7 = (int (*)(void))a3[36];
  *(_DWORD *)(v3 + 4 * a2) = v4;
  v8 = result[13];
  v9 = v5 == v4;
  *(_DWORD *)(v8 + 8 * a2) = v7;
  *(_DWORD *)(v8 + 8 * a2 + 4) = v6;
  if ( v5 != v4 )
  {
    v7 = (int (*)(void))result[17];
    v9 = v7 == 0;
  }
  if ( !v9 )
    return (_DWORD *)v7();
  return result;
}
