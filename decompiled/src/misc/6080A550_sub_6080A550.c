/* sub_6080A550
 * address: 0x6080A550   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A550(int a1, int a2, int a3)
{
  int result; // r0
  unsigned int v4; // r12
  _DWORD *v5; // r1

  result = FIELD_U32(a1, 88);
  if ( result )
  {
    LOWORD(v4) = 16960;
    if ( a2 != 17 )
      a3 = 15;
    HIWORD(v4) = 15;
    FIELD_U32(result, 860) = a3;
    v5 = (_DWORD *)((char *)&unk_60C28738 + 48 * a3);
    FIELD_U32(result, 744) = *v5;
    FIELD_U32(result, 748) = v5[1];
    FIELD_U32(result, 760) = v5[2];
    FIELD_U32(result, 764) = v5[3];
    FIELD_U64(result, 768) = (unsigned int)v5[4] * (unsigned __int64)v4;
    FIELD_U32(result, 776) = v5[5];
    FIELD_U64(result, 800) = *(_QWORD *)&dword_60CC6B50;
    FIELD_U64(result, 808) = (unsigned int)v5[6] * (unsigned __int64)v4;
    FIELD_U32(result, 820) = v5[7];
    FIELD_U32(result, 840) = v5[8];
    FIELD_U32(result, 844) = v5[9];
    FIELD_U32(result, 852) = v5[10];
    FIELD_U32(result, 856) = v5[11];
    return PLAYER_SE_ref();
  }
  return result;
}
