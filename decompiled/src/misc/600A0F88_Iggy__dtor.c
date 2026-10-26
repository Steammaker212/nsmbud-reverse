/* Iggy__dtor
 * address: 0x600A0F88   size: 104   group: misc
 * sym: Iggy::~Iggy() as D2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600A17AC
// 
// Overridden by: None
int __fastcall Iggy__dtor(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BC7C48;
  a1[2082] = EffectWrapper_vtable;
  v2 = a1 + 2082;
  sub_60237560((int)(a1 + 2082));
  sead__IDisposer__dtor(v2);
  a1[2056] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 2056));
  sead__IDisposer__dtor(a1 + 2056);
  return KoopalingBase__dtor(a1);
}
