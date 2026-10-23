/* sub_602C4680
 * address: 0x602C4680   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C4680(int a1, int a2, int a3)
{
  Enemy__vf16C(a1);
  FIELD_U32(a1, 6336) = sub_6000ADDC(a1, FIELD_U32(a3, 64));
  FIELD_U8(a1, 6328) = 1;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C915E4);
  return 1;
}
