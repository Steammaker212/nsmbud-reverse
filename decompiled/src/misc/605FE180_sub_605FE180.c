/* sub_605FE180
 * address: 0x605FE180   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FE180(int a1)
{
  int v2; // r7
  int v3; // r0
  char v4; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r4
  int result; // r0

  v2 = FIELD_U32(ActorMgr__instance, 27180);
  v3 = sub_60008598(ActorMgr__instance, 52, FIELD_U32(ActorMgr__instance, 27172));
  if ( v3 == v2 )
  {
LABEL_4:
    v5 = 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = *(int (__fastcall ****)(_DWORD, int *))v3;
      if ( *(char *)(*(_DWORD *)v3 + 6120) == a1 )
        break;
      v3 = sub_60008598(ActorMgr__instance, 52, v3 + 4);
      if ( v3 == v2 )
        goto LABEL_4;
    }
  }
  if ( ((unsigned int)dword_60CB2698 & ~(1616896524 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CB2698) )
  {
    dword_60CB2694 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60CB2698);
  }
  if ( !v5 )
    return 0;
  result = (**v5)(v5, &dword_60CB2694);
  if ( result )
    return (int)v5;
  return result;
}
