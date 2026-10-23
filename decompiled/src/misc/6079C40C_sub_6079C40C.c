/* sub_6079C40C
 * address: 0x6079C40C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079C40C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r2

  v4 = FIELD_U32(a1, 11360);
  v2 = (_DWORD *)(a1 + 11360);
  v3 = v4;
  v5 = FIELD_U32(v4, 208);
  if ( (v5 & 0x10) == 0 && !FIELD_U32(a1, 12200) )
  {
    FIELD_U32(v3, 208) = v5 | 0x10;
    (*(void (__fastcall **)(_DWORD, int, float))(*(_DWORD *)*v2 + 104))(*v2, 1, 0.0);
    FIELD_U8(a1, 12192) = 0;
  }
  return 1;
}
