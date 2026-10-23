/* sub_605D8EEC
 * address: 0x605D8EEC   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D8EEC(int a1)
{
  int v2; // r5
  unsigned int v3; // r0

  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U32(a1, 132) = 1082130432;
  FIELD_U32(a1, 136) = 1082130432;
  FIELD_U32(a1, 140) = 0;
  sub_605EAB74(a1 + 6064, 1);
  v2 = 0;
  FIELD_U32(a1, 104) = 0;
  if ( ((int (__fastcall *)(int))loc_605DB5D8)(a1) == 1 )
  {
    v2 = 2;
    FIELD_U32(a1, 80) ^= 1u;
    FIELD_U32(a1, 120) = 0;
  }
  else
  {
    FIELD_F32(a1, 120) = 0.5 * (float)byte_60B0594C[FIELD_U32(a1, 80)];
    FIELD_U32(a1, 104) = 0;
    v3 = (unsigned __int8)(((unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 29) + 1);
    if ( v3 < 2 )
      LOBYTE(v3) = 2;
    FIELD_F32(a1, 6376) = (float)(unsigned __int8)v3 * 16.0;
  }
  FIELD_U32(a1, 8008) = v2;
  return 8008;
}
