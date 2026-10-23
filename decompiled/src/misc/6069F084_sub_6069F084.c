/* sub_6069F084
 * address: 0x6069F084   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069F084(int a1)
{
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = -1022885888;
  FIELD_U32(a1, 500) = 1107296256;
  FIELD_U32(a1, 504) = 1132986368;
  FIELD_U8(a1, 6844) = BYTE1(FIELD_U32(a1, 20));
  FIELD_U8(a1, 6845) = -1;
  ((void (__fastcall *)(int, int, _DWORD))loc_6069E698)(a1, 3, 0);
  return 1;
}
