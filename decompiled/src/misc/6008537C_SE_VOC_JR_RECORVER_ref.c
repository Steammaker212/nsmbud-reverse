/* SE_VOC_JR_RECORVER_ref
 * address: 0x6008537C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_JR_RECORVER_ref(unsigned int *a1)
{
  unsigned int *v1; // r4
  unsigned int v2; // r0
  unsigned int v3; // r0
  unsigned int v4; // t1
  int (**v6)(); // [sp+0h] [bp-28h] BYREF
  const char *v7; // [sp+4h] [bp-24h]

  v1 = a1;
  v2 = a1[1775];
  v6 = &sead__SafeStringBase__vtable;
  v7 = "lkp_shell_out";
  sub_60421AE4(v2, &v6, 0);
  v3 = v1[1903];
  v6 = &sead__SafeStringBase__vtable;
  v7 = "lkp_shell_model_out";
  sub_6040F4B8(v3, &v6, 0);
  v1[30] = 0;
  v1[34] = -1065353216;
  v1[25] = -1103101952;
  v1[40] = (*(int (__fastcall **)(unsigned int *))(*v1 + 1060))(v1);
  v1[41] = 0;
  v4 = v1[1904];
  v1 += 1904;
  *v1 = v4 & 0xFFFFFFFE;
  return sub_60813430(v1 - 321, "SE_VOC_JR_RECORVER", 0);
}
