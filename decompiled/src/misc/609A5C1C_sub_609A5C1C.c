/* sub_609A5C1C
 * address: 0x609A5C1C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609A5C1C(int a1, void *a2, int a3, char a4)
{
  void *v8; // r0
  bool v9; // zf

  v8 = *(void **)(a1 + 96);
  if ( v8 != a2 )
  {
    v9 = v8 == 0;
    if ( v8 )
      v9 = FIELD_U8(a1, 104) == 0;
    if ( !v9 )
      operator_delete_8DE3FC(v8);
    FIELD_U8(a1, 104) = a4;
    FIELD_U32(a1, 96) = a2;
    FIELD_U32(a1, 100) = a3;
  }
}
