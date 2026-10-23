/* FallDown_type_d_mode_d_IsPassingDown_s_ref
 * address: 0x607A716C   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall FallDown_type_d_mode_d_IsPassingDown_s_ref(int a1)
{
  int result; // r0
  const char *v3; // r1
  int v4; // [sp+4h] [bp-5Ch] BYREF

  result = sub_60766AA0(a1);
  if ( result == 1 )
  {
    v3 = "false";
    FIELD_U32(a1, 1236) |= 4u;
    FIELD_U32(a1, 100) = 0;
    FIELD_U32(a1, 88) = 0;
    FIELD_U32(a1, 7048) = 0;
    FIELD_U32(a1, 7052) = 0;
    FIELD_U32(a1, 124) = 0;
    if ( FIELD_U8(a1, 15076) )
      v3 = "true";
    sub_6016ACE0(&v4, "[FallDown] type=%d,mode=%d,IsPassingDown=%s", FIELD_U32(a1, 1316), FIELD_U32(a1, 1320), v3);
    FIELD_U8(a1, 15076) = 0;
    return sub_60777FB4(dword_60CBFA90, (int *)a1, 1);
  }
  return result;
}
