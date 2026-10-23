/* sub_604011B4
 * address: 0x604011B4   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604011B4(int a1, int *a2)
{
  unsigned int v4; // r6
  int result; // r0
  unsigned __int64 v6; // kr00_8
  int v7; // r1
  int v8; // r2

  v4 = FIELD_U32(a1, 24);
  v6 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)v4;
  result = HIDWORD(v6);
  if ( FIELD_U8(a1, 9) )
  {
    v7 = 1;
    if ( !HIDWORD(v6) )
    {
      v8 = 0;
LABEL_37:
      result = dword_60B019FC[36 * FIELD_U32(a1, 4) + 1 + 3 * v8];
      *a2 = result;
      return result;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( FIELD_U8(a1, 10) )
  {
    v8 = 1;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
    ++v7;
  }
  if ( FIELD_U8(a1, 11) )
  {
    v8 = 2;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
    ++v7;
  }
  if ( FIELD_U8(a1, 12) )
  {
    v8 = 3;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
    ++v7;
  }
  if ( FIELD_U8(a1, 13) )
  {
    v8 = 4;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
    ++v7;
  }
  if ( FIELD_U8(a1, 14) )
  {
    v8 = 5;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
    ++v7;
  }
  if ( FIELD_U8(a1, 15) )
  {
    v8 = 6;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
    ++v7;
  }
  if ( FIELD_U8(a1, 16) )
  {
    v8 = 7;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
    ++v7;
  }
  if ( FIELD_U8(a1, 17) )
  {
    v8 = 8;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
    ++v7;
  }
  if ( FIELD_U8(a1, 18) )
  {
    v8 = 9;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
    ++v7;
  }
  if ( FIELD_U8(a1, 19) )
  {
    v8 = 10;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
    ++v7;
  }
  if ( FIELD_U8(a1, 20) )
  {
    v8 = 11;
    if ( v7 == HIDWORD(v6) )
      goto LABEL_37;
  }
  return result;
}
