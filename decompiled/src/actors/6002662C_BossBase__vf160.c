/* BossBase__vf160
 * address: 0x6002662C   size: 56   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A73AC
// 
// Overridden by: None
int __fastcall BossBase__vf160(BossBase *a1)
{
  sub_602F3750(&FIELD_U32(a1, 0x1808));
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0xDC))(a1);
  return (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x4C))(a1);
}
