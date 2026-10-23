/* sub_605CEB6C
 * address: 0x605CEB6C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CEB6C(int a1)
{
  unsigned int v1; // r6
  int v2; // r8
  int result; // r0
  int i; // r5

  v1 = FIELD_U32(a1, 20);
  if ( !(v1 >> 28) )
    return sub_606C12E0();
  v2 = FIELD_U32(ActorMgr__instance, 27180);
  result = sub_60008598(ActorMgr__instance, 41, FIELD_U32(ActorMgr__instance, 27172));
  for ( i = result; result != v2; i = result )
  {
    if ( v1 >> 28 == *(_DWORD *)(*(_DWORD *)i + 20) >> 28 )
      sub_606C12E0();
    result = sub_60008598(ActorMgr__instance, 41, i + 4);
  }
  return result;
}
