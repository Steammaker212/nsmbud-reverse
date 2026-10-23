/* sub_6066C564
 * address: 0x6066C564   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066C564(int a1)
{
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 644));
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 648) + 28))(a1 + 648);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 1304) + 28))(a1 + 1304);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 1960) + 28))(a1 + 1960);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 2616) + 28))(a1 + 2616);
  return 1;
}
