/* sub_607FF79C
 * address: 0x607FF79C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FF79C(int a1)
{
  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C27E0C;
  FIELD_U16(a1, 16) = 0;
  FIELD_U16(a1, 20) = 257;
  FIELD_U16(a1, 18) = 257;
  memset((void *)(a1 + 22), 0, 0x26u);
  return a1;
}
