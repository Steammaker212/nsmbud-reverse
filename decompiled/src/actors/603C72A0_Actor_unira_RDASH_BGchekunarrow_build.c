/* Actor_unira_RDASH_BGchekunarrow_build
 * address: 0x603C72A0   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_unira_RDASH_BGchekunarrow_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x4658u);
  sub_603C967C(v2, a1, 0);
  *(_DWORD *)v2 = off_60BF70EC;
  if ( Actor__getProfileId((Actor *)v2) == 386 )
    FIELD_U8(v2, 18000) = 1;
  return v2;
}
