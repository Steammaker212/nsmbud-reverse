/* sub_6049FA40
 * address: 0x6049FA40   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049FA40(int a1)
{
  int v1; // r4
  int v2; // t1

  v1 = a1;
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA0B84, 0);
  v2 = FIELD_U32(v1, 5752);
  v1 += 5752;
  *(_DWORD *)v1 = v2 | 1;
  FIELD_U8(v1, 14556) = 1;
  FIELD_U8(v1, 16749) = 1;
  return 16749;
}
