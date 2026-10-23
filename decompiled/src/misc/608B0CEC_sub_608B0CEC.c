/* sub_608B0CEC
 * address: 0x608B0CEC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0CEC(int a1)
{
  int v2; // r4
  int v3; // r0

  v2 = 0;
  v3 = FIELD_U32(a1, 4);
  if ( v3 > 4 )
    v2 = 4 * v3 - 8;
  if ( *(_BYTE *)a1 )
    v2 += sub_608D3BA0() + 204;
  if ( FIELD_U8(a1, 1) )
    v2 += sub_608B467C(FIELD_U32(a1, 4)) + 16;
  return v2;
}
