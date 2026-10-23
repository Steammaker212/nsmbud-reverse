/* sub_601FF280
 * address: 0x601FF280   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601FF280()
{
  int v0; // r0
  int result; // r0

  sub_602380BC(dword_60C8D9DC);
  sub_602387C8(dword_60C8D9DC);
  sub_601E2CA4();
  sub_604265B4(dword_60C9BBD4);
  FIELD_U8(dword_60C9BB38, 628) = 0;
  UnsetResourcesLoadedForAllProfiles(2);
  v0 = dword_60C9BAAC;
  if ( FIELD_U32(dword_60C9BAAC, 172) )
  {
    sub_60417FFC(dword_60C9BAAC, 3u);
    v0 = dword_60C9BAAC;
  }
  if ( FIELD_U32(v0, 224) )
    sub_60417FFC(v0, 4u);
  result = dword_60CC6C2C;
  FIELD_U8(dword_60CC6C2C, 286) &= ~1u;
  return result;
}
