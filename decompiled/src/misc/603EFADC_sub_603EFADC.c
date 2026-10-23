/* sub_603EFADC
 * address: 0x603EFADC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EFADC(int a1)
{
  int v2; // r4

  v2 = dword_60C99D6C;
  if ( !dword_60C99D6C )
  {
    v2 = operator_new_8DE2C8(0x86E4u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BF9314;
    dword_60C99D68 = v2;
    sub_604E159C(v2 + 16);
    sub_604E159C(v2 + 5768);
    sub_604E159C(v2 + 11520);
    sub_604E159C(v2 + 17272);
    sub_604E159C(v2 + 23024);
    sub_604E159C(v2 + 28776);
    FIELD_U8(v2, 34528) = 0;
    dword_60C99D6C = v2;
  }
  return v2;
}
