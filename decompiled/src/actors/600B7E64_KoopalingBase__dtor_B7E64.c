/* KoopalingBase__dtor_B7E64
 * address: 0x600B7E64   size: 16   group: actors
 * sym: KoopalingBase::~KoopalingBase() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600263A8
// 
// Overridden by:
//   - 0x600A0FF8 : Iggy
void __fastcall KoopalingBase__dtor_B7E64(int a1)
{
  Actor *v1; // r0

  v1 = KoopalingBase__dtor(a1);
  operator_delete(v1);
}
