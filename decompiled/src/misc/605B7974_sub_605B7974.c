/* sub_605B7974
 * address: 0x605B7974   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B7974(int a1)
{
  int v2; // r1
  int result; // r0

  if ( FIELD_U32(a1, 16) )
  {
    sub_60002B6C((StageActor *)a1);
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( FIELD_U32(a1, 36) )
  {
    result = 0;
    if ( v2 )
      return result;
    sub_60002B6C((StageActor *)(a1 + 20));
    v2 = 1;
  }
  if ( FIELD_U32(a1, 56) )
  {
    result = 0;
    if ( v2 )
      return result;
    sub_60002B6C((StageActor *)(a1 + 40));
    v2 = 1;
  }
  if ( FIELD_U32(a1, 76) )
  {
    result = 0;
    if ( v2 )
      return result;
    sub_60002B6C((StageActor *)(a1 + 60));
    v2 = 1;
  }
  if ( FIELD_U32(a1, 96) )
  {
    result = 0;
    if ( v2 )
      return result;
    sub_60002B6C((StageActor *)(a1 + 80));
    v2 = 1;
  }
  if ( FIELD_U32(a1, 116) )
  {
    result = 0;
    if ( v2 )
      return result;
    sub_60002B6C((StageActor *)(a1 + 100));
    v2 = 1;
  }
  if ( FIELD_U32(a1, 136) )
  {
    result = 0;
    if ( v2 )
      return result;
    sub_60002B6C((StageActor *)(a1 + 120));
    v2 = 1;
  }
  result = 0;
  if ( !FIELD_U32(a1, 156) )
    return 1;
  if ( !v2 )
  {
    sub_60002B6C((StageActor *)(a1 + 140));
    return 1;
  }
  return result;
}
