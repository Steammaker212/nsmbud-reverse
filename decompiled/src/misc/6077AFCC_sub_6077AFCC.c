/* sub_6077AFCC
 * address: 0x6077AFCC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077AFCC(int a1)
{
  int (__fastcall ***v1)(_DWORD, int *); // r4
  char v2; // r12
  int result; // r0

  v1 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 16));
  if ( ((unsigned int)&dword_60CB247C & ~(1618456580 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB247C) )
  {
    dword_60CB2478 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CB247C);
  }
  if ( !v1 )
    return 0;
  result = (**v1)(v1, &dword_60CB2478);
  if ( result )
    return (int)v1;
  return result;
}
