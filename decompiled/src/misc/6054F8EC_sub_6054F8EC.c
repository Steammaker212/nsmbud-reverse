/* sub_6054F8EC
 * address: 0x6054F8EC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054F8EC(int a1, _DWORD *a2, int a3, _DWORD *a4, int a5, int a6)
{
  char v7; // r5
  int v8; // r0
  int v9; // r1
  int result; // r0

  v7 = 0;
  FIELD_U32(a1, 3792) = a3;
  FIELD_U32(a1, 3712) = *a4;
  FIELD_U32(a1, 3720) = *a2;
  FIELD_U32(a1, 3724) = a2[1];
  FIELD_U32(a1, 3728) = a2[2];
  v8 = *a2;
  v9 = a2[1];
  FIELD_U32(a1, 3732) = v8;
  FIELD_U32(a1, 3736) = v9;
  FIELD_U32(a1, 3716) = a6;
  FIELD_U32(a1, 3740) = 0;
  FIELD_U32(a1, 3744) = 0;
  FIELD_U32(a1, 3756) = 0;
  FIELD_U32(a1, 3760) = 0;
  FIELD_U8(a1, 3817) = 0;
  FIELD_U8(a1, 3816) = 1;
  FIELD_U8(a1, 3822) = 0;
  FIELD_U32(a1, 3824) = a5;
  FIELD_U8(a1, 3840) = 0;
  FIELD_U32(a1, 3836) = 0;
  FIELD_U32(a1, 3832) = 0;
  FIELD_U32(a1, 3828) = 0;
  if ( (unsigned int)(a3 - 27) <= 4 )
  {
    sub_6054F3FC(a1);
    a3 = FIELD_U32(a1, 3792);
  }
  result = a3 - 8;
  FIELD_U32(a1, 3848) = a5;
  if ( (unsigned int)(a3 - 8) < 0xD )
    v7 = 1;
  FIELD_U8(a1, 3819) = v7;
  return result;
}
