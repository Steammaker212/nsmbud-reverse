/* sub_605C0054
 * address: 0x605C0054   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C0054(_DWORD *a1)
{
  int result; // r0

  if ( (a1[5] & 3) == 0 )
    sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  _R0 = (200 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32 << 16;
  __asm { UXTB16          R0, R0 }
  if ( !_ZF )
    _R0 = -_R0;
  a1[1696] = _R0;
  a1[1695] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[33] = 0;
  a1[34] = -1054867456;
  a1[35] = 0;
  a1[25] = -1111993876;
  result = a1[5] & 0xFF0;
  if ( result == 112 )
    return sub_60400BE4(AreaRumbleMgr_instance);
  return result;
}
