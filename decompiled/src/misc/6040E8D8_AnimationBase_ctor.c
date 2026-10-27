/* AnimationBase_ctor
 * address: 0x6040E8D8   size: 40   group: misc
 * sym: # AnimationBase_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall AnimationBase_ctor(int a1)
{
  *(_DWORD *)a1 = &AnimationBase_vtable;
  AnimationCtrl_ctor(a1 + 4);
  return (_DWORD *)a1;
}
