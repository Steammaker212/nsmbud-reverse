/* sub_6095D730
 * address: 0x6095D730   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095D730(int a1)
{
  int v2; // r9
  int v3; // r0
  int v4; // r1
  void *v5; // r8
  int v6; // r5
  int v7; // r6
  void *v8; // r0
  void *v9; // r0

  v2 = a1 + 632;
  *(_DWORD *)a1 = off_60C5EAEC;
  FIELD_U32(a1, 396) = &off_60C5EB28;
  sub_60965348(a1 + 632);
  v3 = FIELD_U32(a1, 624);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 - 4);
    v5 = (void *)(v3 - 8);
    if ( v4 )
    {
      v6 = 1396 * v4;
      v7 = v3 - 1396;
      do
      {
        sub_6095F284(v7 + v6);
        v6 -= 1396;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v5);
    FIELD_U32(a1, 620) = 0;
    FIELD_U32(a1, 624) = 0;
  }
  sub_609651F4(v2);
  FIELD_U32(a1, 596) = &off_60C5E640;
  if ( FIELD_U8(a1, 616) )
  {
    v8 = *(void **)(a1 + 608);
    if ( v8 )
      operator_delete_8DE3FC(v8);
    FIELD_U8(a1, 616) = 0;
  }
  FIELD_U32(a1, 596) = &off_60C5E40C;
  FIELD_U32(a1, 580) = &off_60C5E40C;
  FIELD_U32(a1, 556) = &off_60C5E640;
  if ( FIELD_U8(a1, 576) )
  {
    v9 = *(void **)(a1 + 568);
    if ( v9 )
      operator_delete_8DE3FC(v9);
    FIELD_U8(a1, 576) = 0;
  }
  FIELD_U32(a1, 556) = &off_60C5E40C;
  FIELD_U32(a1, 540) = &off_60C5E40C;
  FIELD_U32(a1, 524) = &off_60C5E40C;
  FIELD_U32(a1, 508) = &off_60C5E40C;
  FIELD_U32(a1, 492) = &off_60C5E40C;
  FIELD_U32(a1, 476) = &off_60C5E40C;
  FIELD_U32(a1, 460) = &off_60C5E40C;
  FIELD_U32(a1, 444) = &off_60C5E40C;
  FIELD_U32(a1, 416) = &off_60C5D81C;
  *(_DWORD *)a1 = &off_60C5D9F0;
  return a1;
}
