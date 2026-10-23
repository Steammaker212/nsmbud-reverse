/* sub_6074E7F8
 * address: 0x6074E7F8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074E7F8(int a1)
{
  int v2; // r4

  v2 = dword_60CBEA44;
  if ( !dword_60CBEA44 )
  {
    v2 = operator_new_8DE2C8(0x4Cu, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60C23BB0;
    dword_60CBEA40 = v2;
    FIELD_U8(v2, 16) = 0;
    memset((void *)(v2 + 20), 0, 56);
    dword_60CBEA44 = v2;
  }
  return v2;
}
