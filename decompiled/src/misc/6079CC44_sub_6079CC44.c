/* sub_6079CC44
 * address: 0x6079CC44   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079CC44(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  int v5; // r0
  float v6; // s4
  int *v7; // r1
  int result; // r0
  float v9; // s0
  float v10; // s2

  v2 = a1 + 688;
  FIELD_U32(a1, 1224) &= ~0x400000u;
  v3 = FIELD_U32(a1, 1232);
  v4 = FIELD_U32(a1, 1220);
  FIELD_U32(a1, 1232) = v3 & 0xBFFFFFFF;
  FIELD_U32(a1, 1236) &= ~0x10000u;
  FIELD_U32(a1, 1220) = v4 & 0xDFEFFFFF;
  FIELD_U32(a1, 156) = 0;
  FIELD_U8(PlayerMgr_instance, 157) &= ~(1 << FIELD_U8(a1, 84));
  FIELD_U32(a1, 1208) &= ~1u;
  FIELD_U32(a1, 1220) &= 0xCFFFFFFF;
  sub_607865BC(a1 + 688, 2);
  sub_607865BC(v2, 6);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1);
  v6 = FIELD_F32(a1, 88);
  v7 = (int *)(a1 + 1276);
  if ( v5 )
    v7 = (int *)(a1 + 1280);
  result = *v7;
  v9 = *(float *)(*v7 + 8);
  v10 = -v9;
  if ( v6 >= (float)-v9 )
  {
    v10 = FIELD_F32(a1, 88);
    if ( v6 > v9 )
      v10 = *(float *)(*v7 + 8);
  }
  FIELD_F32(a1, 88) = v10;
  return result;
}
