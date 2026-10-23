/* sub_603F1364
 * address: 0x603F1364   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F1364(void *a1)
{
  int v2; // r5
  int v3; // r9
  int v4; // r7
  int v5; // r7
  int (**v7)(); // [sp+8h] [bp-28h] BYREF
  const char *v8; // [sp+Ch] [bp-24h]

  sub_6090B310(dword_60CCF464);
  v2 = operator_new_8DE25C(0x390u, a1, 4);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "FinalKoopa";
  sub_60443FE0(v2, &v7);
  sub_60444108(v2, 2, 128, 1, 1, a1);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "FinalKoopa";
  v3 = dword_60CD0B40;
  v4 = operator_new_8DE25C(0x1FCu, a1, 4);
  sub_6044364C();
  sub_60958220(v3, v4, 8, &v7, 0, a1);
  sub_60443628(v4, v2);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "FinalKoopaShadow";
  v5 = operator_new_8DE25C(0x1550u, a1, 4);
  sub_60446220();
  sub_60958220(v3, v5, 7, &v7, 0, a1);
  sub_60443628(v5, v2);
  FIELD_U8(v5, 91) = 12;
  FIELD_U32(v5, 5432) = 1090519040;
  return sub_6090B32C(dword_60CCF464);
}
