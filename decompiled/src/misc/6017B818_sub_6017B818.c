/* sub_6017B818
 * address: 0x6017B818   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017B818(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60C88ED0;
  if ( !dword_60C88ED0 )
  {
    v2 = operator_new_8DE2C8(0x6062Cu, a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60BD4FD8;
    dword_60C88ECC = (int)v3;
    sub_6017B8A4(v2);
    dword_60C88ED0 = v2;
  }
  return v2;
}
