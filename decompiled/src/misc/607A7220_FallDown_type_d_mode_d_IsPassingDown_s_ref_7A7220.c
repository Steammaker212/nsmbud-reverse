/* FallDown_type_d_mode_d_IsPassingDown_s_ref_7A7220
 * address: 0x607A7220   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall FallDown_type_d_mode_d_IsPassingDown_s_ref_7A7220(int a1)
{
  const char *v2; // r1
  _BYTE *v3; // r6
  int v5; // [sp+4h] [bp-5Ch] BYREF

  v2 = "false";
  FIELD_U32(a1, 1236) |= 4u;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 7048) = 0;
  FIELD_U32(a1, 7052) = 0;
  FIELD_U32(a1, 124) = 0;
  v3 = (_BYTE *)(a1 + 15076);
  if ( FIELD_U8(a1, 15076) )
    v2 = "true";
  sub_6016ACE0(&v5, "[FallDown] type=%d,mode=%d,IsPassingDown=%s", FIELD_U32(a1, 1316), FIELD_U32(a1, 1320), v2);
  *v3 = 0;
  return sub_60777FB4(dword_60CBFA90, (int *)a1, 1);
}
