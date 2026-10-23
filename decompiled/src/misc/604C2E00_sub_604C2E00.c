/* sub_604C2E00
 * address: 0x604C2E00   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C2E00(int a1)
{
  int v1; // r3
  int v2; // r2

  v1 = FIELD_U32(a1, 14140);
  v2 = 1;
  if ( v1 != 3 )
    v2 = dword_60B02F44[v1];
  FIELD_U32(a1, 5084) = v2;
  FIELD_U8(a1, 14177) = 1;
  return sub_60502694(a1 + 4056);
}
