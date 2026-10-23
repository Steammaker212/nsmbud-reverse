/* sub_607612CC
 * address: 0x607612CC   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607612CC(int a1, int a2)
{
  int v3; // r12
  int v4; // r3
  int v5; // r12
  int v6; // r3
  bool v7; // zf

  v3 = FIELD_U32(a1, 6900);
  v4 = FIELD_U32(a1, 6904);
  FIELD_U32(a1, 6920) = FIELD_U32(a1, 6908);
  FIELD_U32(a1, 6916) = v4;
  FIELD_U32(a1, 6912) = v3;
  v5 = FIELD_U32(a1, 1220);
  FIELD_U32(a1, 1220) = v5 & 0xFFF3FFEF;
  FIELD_U32(a1, 6992) = FIELD_U32(a1, 108);
  v6 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6996) = v6;
  FIELD_U32(a1, 7000) = FIELD_U32(a1, 116);
  if ( (FIELD_U8(a1, 6900) & 1) != 0 )
    FIELD_U32(a1, 6964) = v6;
  v7 = a2 == 1;
  FIELD_U8(a1, 6909) = 0;
  FIELD_U8(a1, 6905) = 0;
  FIELD_U8(a1, 6903) = 0;
  FIELD_U8(a1, 6902) = 0;
  FIELD_U8(a1, 6901) = 0;
  FIELD_U8(a1, 6900) = 0;
  FIELD_U8(a1, 6908) = 0;
  FIELD_U8(a1, 6911) = 0;
  FIELD_U8(a1, 6910) = 0;
  FIELD_U8(a1, 6904) = 0;
  FIELD_U8(a1, 6907) = 0;
  FIELD_U8(a1, 6906) = 0;
  FIELD_U32(a1, 7056) = FIELD_U32(a1, 7048);
  FIELD_U32(a1, 7060) = FIELD_U32(a1, 7052);
  FIELD_U32(a1, 7048) = 0;
  FIELD_U32(a1, 7052) = 0;
  FIELD_U32(a1, 7128) = 0;
  FIELD_U32(a1, 7004) = 0;
  FIELD_U32(a1, 7024) = 0;
  if ( a2 == 1 )
    v7 = (FIELD_U8(a1, 1219) & 8) == 0;
  if ( v7 && !(FIELD_U32(a1, 1232) & 0x200 | v5 & 0x10000000) && (FIELD_U8(a1, 1236) & 0xE) == 0 )
    ((void (__fastcall *)(int))loc_60762EFC)(a1);
  if ( (FIELD_U8(a1, 1235) & 0x20) == 0 )
  {
    sub_60761474(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 180))(a1);
  }
  sub_607620B4(a1);
  sub_60762374(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 184))(a1);
}
