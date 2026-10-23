/* sub_6080A59C
 * address: 0x6080A59C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A59C(int a1)
{
  _DWORD *v2; // r0
  bool v3; // zf

  v2 = *(_DWORD **)(a1 + 180);
  v3 = v2 == 0;
  if ( v2 )
  {
    v2 = (_DWORD *)*v2;
    v3 = v2 == 0;
  }
  if ( !v3 )
    sub_608B032C(v2, 18, 1.0);
  FIELD_U8(a1, 176) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 168) = 0;
  FIELD_U32(a1, 172) = 0;
  return 0;
}
