/* sub_602BC2F8
 * address: 0x602BC2F8   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BC2F8(int a1)
{
  int v2; // r0
  int *v3; // r5
  int result; // r0
  int v5; // r0
  int v6; // r2
  char v7; // r1
  Vec2 out; // [sp+4h] [bp-1Ch] BYREF
  signed int v9; // [sp+Ch] [bp-14h] BYREF

  v3 = (int *)(a1 + 6312);
  v2 = FIELD_U32(a1, 6312);
  if ( v2 )
  {
    result = v2 - 1;
    *v3 = result;
    return result;
  }
  LODWORD(out.x) = -1073741824 * dword_60AF1FF8[FIELD_U32(a1, 80)];
  v9 = FIELD_U32(a1, 6340);
  sub_6083246C((int *)(a1 + 6336), (int *)&out, &v9);
  v5 = FIELD_U32(a1, 6336);
  FIELD_U32(a1, 6596) = v5;
  if ( v5 >= 0 )
  {
LABEL_6:
    if ( (unsigned int)v5 < 0x20000000 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( v5 != 0x80000000 )
  {
    v5 = -v5;
    goto LABEL_6;
  }
LABEL_7:
  FIELD_U8(a1, 7008) = 1;
LABEL_8:
  out.x = FIELD_F32(a1, 6340);
  result = sub_6083246C((int *)(a1 + 164), (int *)(a1 + 6316), (signed int *)&out);
  if ( result == 1 )
  {
    if ( FIELD_U8(a1, 6306) <= (unsigned int)FIELD_U8(a1, 6307) )
    {
      FIELD_U8(a1, 6307) = 0;
      *v3 = FIELD_U16(a1, 7012);
      FIELD_U32(a1, 80) = FIELD_U32(a1, 80) == 0;
      v6 = FIELD_U8(a1, 6332);
      if ( v6 == 1 )
      {
        v7 = 2;
      }
      else if ( FIELD_U8(a1, 6332) )
      {
        v7 = v6 == 2;
      }
      else
      {
        v7 = 3;
      }
      FIELD_U8(a1, 6332) = v7;
      FIELD_U8(a1, 6333) = 1;
    }
    else
    {
      *v3 = FIELD_U16(a1, 7010);
      FIELD_U8(a1, 6332) = (char)(FIELD_U8(a1, 6332) + 1) % 4;
    }
    StageActor__distanceToPlayer((StateActor *)a1, &out);
    if ( sqrtf((float)(out.y * out.y) + (float)(out.x * out.x)) < 512.0 )
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 8, 3, 0, 0);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91164);
  }
  return result;
}
