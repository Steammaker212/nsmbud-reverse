/* sub_601F8534
 * address: 0x601F8534   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_601F8534(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BD75C4;
  FIELD_U32(a1, 732) = off_60BC6E38;
  v2 = (_DWORD *)(a1 + 732);
  sub_60002B6C((StageActor *)(a1 + 732));
  sead__IDisposer__dtor(v2);
  *(_DWORD *)a1 = off_60BD7140;
  FIELD_U32(a1, 440) = EffectWrapper_vtable;
  sub_60237560(a1 + 440);
  sead__IDisposer__dtor((_DWORD *)(a1 + 440));
  return Actor__dtor((Actor *)a1);
}
