/* SE_VOC_CH_YS_EAT_ref
 * address: 0x605E2C10   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_VOC_CH_YS_EAT_ref(int a1)
{
  int v2; // r5
  int v3; // r0
  int *v4; // r0
  unsigned int result; // r0

  v2 = a1 + 6064;
  sub_605EAE4C(a1 + 6064, 3, 0.0);
  sub_605EB5D0(v2);
  FIELD_U32(a1, 6240) |= 0x10u;
  v3 = sub_605DBDDC(a1);
  if ( v3 )
    FIELD_U32(v3, 644) = 15;
  v4 = sub_60002B90(FIELD_S8(a1, 6336), unk_60C26400);
  sub_605D8938(a1, "SE_VOC_CH_YS_EAT", (int)v4);
  result = FIELD_U32(a1, 6260) & 0xF9FFFFFF | 0x4000000;
  FIELD_U32(a1, 6260) = result;
  return result;
}
