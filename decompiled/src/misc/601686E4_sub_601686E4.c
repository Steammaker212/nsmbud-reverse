/* sub_601686E4
 * address: 0x601686E4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601686E4(int a1)
{
  int v2; // r0
  int ProfileId; // r1
  int result; // r0
  int v5; // r0
  int v6; // r0
  char v7; // r1
  char v8; // r2
  int v9; // r1
  bool v10; // zf

  v2 = dword_60C8C188;
  if ( FIELD_U8(dword_60C8C188, 3225) )
  {
    ProfileId = Actor__getProfileId((Actor *)a1);
    result = 0;
    if ( ProfileId != 910 )
      return result;
    v2 = dword_60C8C188;
  }
  v5 = sub_601FEE28(v2);
  v6 = sub_604115D4(v5 + 536, a1 + 80, FIELD_F32(a1, 212));
  v7 = FIELD_U8(a1, 216);
  v8 = v7 | 0xC;
  if ( v6 )
    v8 = v7 & 0xF3;
  FIELD_U8(a1, 216) = v8;
  v9 = Actor__beforeExecute((Actor *)a1);
  result = 0;
  v10 = v9 == 1;
  if ( v9 == 1 )
    v10 = (FIELD_U8(a1, 216) & 1) == 0;
  if ( v10 )
  {
    FIELD_U32(a1, 92) = FIELD_U32(a1, 80);
    FIELD_U32(a1, 96) = FIELD_U32(a1, 84);
    FIELD_U32(a1, 100) = FIELD_U32(a1, 88);
    return 1;
  }
  return result;
}
