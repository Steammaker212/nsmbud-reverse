/* sub_601FF878
 * address: 0x601FF878   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FF878(int a1, int a2, int a3, int a4)
{
  int (__fastcall ***v6)(_DWORD, int *); // r6
  char v7; // r12
  int v8; // r0

  if ( a4 != 1 )
    return sub_6021C5B8(dword_60C8D408, a2, a3);
  v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                              ActorMgr__instance + 27168,
                                              FIELD_U32(dword_60C8C188, 3192));
  if ( ((unsigned int)dword_60C88AE0 & ~(1612708040 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C88AE0) )
  {
    dword_60C88ADC = (int)&off_60BD4BA4;
    _cxa_guard_release(dword_60C88AE0);
  }
  if ( v6 )
  {
    v8 = (**v6)(v6, &dword_60C88ADC);
    if ( v8 )
      v8 = (int)v6;
  }
  else
  {
    v8 = 0;
  }
  return sub_6016EE30(v8, a2, a3);
}
