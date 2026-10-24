/* sub_60530E50
 * address: 0x60530E50   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60530E50(StateMethodExecuter *result)
{
  unsigned int vtable; // r1
  unsigned int v2; // r2
  int v3; // r1
  void *owner; // r2
  bool v5; // zf

  vtable = (unsigned int)FIELD_U32(result + (4) * 12, 0x0);
  if ( vtable >= 4 )
    vtable = 0;
  v2 = *(_DWORD *)(*(_DWORD *)(dword_60C99E60 + 4 * vtable + 4172) + 3044);
  v3 = v2;
  if ( v2 > 2 )
    v3 = 2;
  if ( v2 < 2 )
  {
    owner = FIELD_U32(result + (3) * 12, 0x4);
    if ( owner == (void *)1 )
    {
      if ( v3 != 1 && !LOBYTE(FIELD_U32(result + (6) * 12, 0x4)) )
        return result;
    }
    else if ( !owner )
    {
      v5 = v3 == 0;
      if ( !v3 )
        v5 = LOBYTE(FIELD_U32(result + (6) * 12, 0x4)) == 0;
      if ( !v5 )
        return result;
    }
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&dword_60CAAB34);
  }
  return result;
}
