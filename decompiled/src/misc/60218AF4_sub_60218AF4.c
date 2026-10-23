/* sub_60218AF4
 * address: 0x60218AF4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60218AF4(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BD9128;
  FIELD_U32(a1, 428) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 428);
  sub_60237560(a1 + 428);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 324) = EffectWrapper_vtable;
  sub_60237560(a1 + 324);
  sead__IDisposer__dtor((_DWORD *)(a1 + 324));
  return Actor__dtor((Actor *)a1);
}
