/* sub_601FDF48
 * address: 0x601FDF48   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601FDF48()
{
  int v0; // r5
  int (__fastcall ***v1)(_DWORD, int *); // r4
  char v2; // r12
  int v3; // r5
  int v4; // r0
  int v5; // r2
  int result; // r0
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  v0 = sub_601CF9C0(dword_60C8AEF0);
  v1 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                              ActorMgr__instance + 27168,
                                              FIELD_U32(dword_60C8C188, 3192));
  if ( ((unsigned int)dword_60C88AE0 & ~(1612701600 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C88AE0) )
  {
    dword_60C88ADC = (int)&off_60BD4BA4;
    _cxa_guard_release(dword_60C88AE0);
  }
  v3 = v0 + 80;
  v4 = 0;
  if ( v1 )
  {
    v4 = (**v1)(v1, &dword_60C88ADC);
    if ( v4 )
      v4 = (int)v1;
  }
  sub_6016EE30(v4, (int)v7, v3);
  v5 = v7[1];
  result = dword_60CC62E4 + 116;
  FIELD_U32(dword_60CC62E4, 116) = v7[0];
  FIELD_U32(result, 4) = v5;
  FIELD_U32(result, 8) = 0;
  return result;
}
