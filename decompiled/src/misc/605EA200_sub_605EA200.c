/* sub_605EA200
 * address: 0x605EA200   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EA200(int a1, int a2, int a3)
{
  *(_DWORD *)a1 = LoadResource(ResourceMgrRelated_instance, &dword_60CB1D10[2 * a2]);
  FIELD_U32(a1, 4) = a2;
  FIELD_U32(a1, 8) = a3;
  FIELD_U32(a1, 12) = 0;
  sub_6040E90C(a1 + 16, 13);
  FIELD_U32(a1, 96) = 10;
  FIELD_U32(a1, 100) = 1065353216;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 172) = 0;
  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 184) = 0;
  FIELD_U32(a1, 80) = -1;
  FIELD_U32(a1, 84) = -1;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U64(a1, 124) = 1065353216;
  FIELD_U64(a1, 132) = 0;
  FIELD_U64(a1, 140) = 0x3F80000000000000LL;
  FIELD_U64(a1, 148) = 0;
  FIELD_U64(a1, 156) = 0;
  FIELD_U64(a1, 164) = 1065353216;
  sub_605EA31C(a1);
  return a1;
}
