/* sub_60009B2C
 * address: 0x60009B2C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60009B2C(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = EnemyCounterMaybe_instance;
  if ( !EnemyCounterMaybe_instance )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x9F4u, a1, 4);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60BC049C;
    dword_60C7B41C = (int)v4;
    result = sub_60009BA4();
    EnemyCounterMaybe_instance = result;
  }
  return result;
}
