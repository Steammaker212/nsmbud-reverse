/* sub_603FCFF8
 * address: 0x603FCFF8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FCFF8(int a1, int a2)
{
  int v2; // r2
  int v3; // r2

  if ( FIELD_U8(a1, 20) )
  {
    v2 = 0;
    if ( FIELD_U32(a1, 32) == a2 )
      return v2;
  }
  if ( FIELD_U8(a1, 92) )
  {
    v2 = 1;
    if ( FIELD_U32(a1, 104) == a2 )
      return v2;
  }
  if ( FIELD_U8(a1, 164) )
  {
    v2 = 2;
    if ( FIELD_U32(a1, 176) == a2 )
      return v2;
  }
  if ( FIELD_U8(a1, 236) )
  {
    v2 = 3;
    if ( FIELD_U32(a1, 248) == a2 )
      return v2;
  }
  if ( FIELD_U8(a1, 308) )
  {
    v2 = 4;
    if ( FIELD_U32(a1, 320) == a2 )
      return v2;
  }
  if ( !FIELD_U8(a1, 380) )
    return -1;
  v3 = 5;
  if ( FIELD_U32(a1, 392) != a2 )
    return -1;
  return v3;
}
