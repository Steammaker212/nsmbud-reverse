/* sub_607B9C78
 * address: 0x607B9C78   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B9C78(int a1)
{
  int v2; // r6

  FIELD_U32(a1, 12104) = 0;
  v2 = a1 + 13840;
  if ( sub_60235E50(a1 + 13840) == 1 )
    sub_602360C0(v2);
  SE_PLY_SPIN_ONCE_ref();
  FIELD_U32(a1, 12084) = 0;
  return 12084;
}
