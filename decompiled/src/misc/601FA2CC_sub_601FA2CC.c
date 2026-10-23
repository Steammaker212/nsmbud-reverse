/* sub_601FA2CC
 * address: 0x601FA2CC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601FA2CC(int a1, int a2)
{
  unsigned int v3; // r1
  int v4; // r0
  int v5; // r5
  _BOOL4 result; // r0
  bool v7; // zf

  v3 = FIELD_U32(a1, 16);
  if ( !v3 )
    return 0;
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
  if ( !v4 )
    return 0;
  v5 = FIELD_U32(v4, 592);
  if ( sub_6019B268(a2) )
    return 0;
  if ( a2 == 6 )
  {
    result = 1;
    if ( v5 )
      return v5 == 10;
    return result;
  }
  if ( sub_6019B268(6u) )
    return 0;
  v7 = v5 == 0;
  result = 1;
  if ( v5 )
    v7 = v5 == 12;
  if ( !v7 )
    return 0;
  return result;
}
