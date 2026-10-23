/* sub_608C7828
 * address: 0x608C7828   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C7828(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v8; // r2

  FIELD_U32(a1, 332) = a3;
  sub_608C5A58(a1 + 44);
  sub_608C5A58(a1 + 76);
  sub_608C5A58(a1 + 108);
  sub_608C5A58(a1 + 140);
  sub_608C5784(a1 + 16, -90.4);
  FIELD_U32(a1, 296) = 0;
  sub_608C9AB8(FIELD_U32(a1, 364), *a2, v8);
  sub_608C9AF8(FIELD_U32(a1, 364), a2[3]);
  sub_608CADA8(FIELD_U32(a1, 364), FIELD_U8(a1, 347));
  sub_608C78C8(a1, a2, a4, a5);
  sub_608C938C(FIELD_U32(a1, 364));
  FIELD_U8(a1, 177) = 1;
  return 1;
}
