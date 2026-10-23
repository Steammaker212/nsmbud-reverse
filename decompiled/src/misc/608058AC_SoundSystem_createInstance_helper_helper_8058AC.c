/* SoundSystem_createInstance_helper_helper_8058AC
 * address: 0x608058AC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SoundSystem_createInstance_helper_helper_8058AC(_DWORD *a1, void *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  v4 = operator_new_8DE25C(0x158u, a2, 4);
  *a1 = sub_6080613C(v4);
  v5 = operator_new_8DE25C(0x200u, a2, 4);
  a1[1] = sub_60805BC0(v5);
  v6 = operator_new_8DE25C(0x38u, a2, 4);
  a1[2] = sub_60805E70(v6);
  v7 = operator_new_8DE25C(0x48u, a2, 4);
  a1[3] = sub_60805300(v7, 0);
  v8 = (_DWORD *)operator_new_8DE25C(4u, a2, 4);
  a1[4] = sub_60806928(v8, 24, (int)a2);
  return a1;
}
