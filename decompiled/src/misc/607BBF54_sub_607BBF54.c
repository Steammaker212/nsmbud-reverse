/* sub_607BBF54
 * address: 0x607BBF54   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BBF54(int a1)
{
  _BYTE *v2; // r1
  float v3; // s0
  int v4; // r0
  _BOOL4 v5; // r5
  int v6; // r6
  int result; // r0

  FIELD_U32(a1, 1212) |= 0x200000u;
  FIELD_U32(a1, 1228) |= 0x24000u;
  FIELD_U32(a1, 1224) = FIELD_U32(a1, 1224) & 0xFDFFFFEF | 0x10;
  FIELD_U32(a1, 12400) = 0;
  FIELD_U32(a1, 12408) = 0;
  FIELD_U8(a1, 12392) = 0;
  v2 = (_BYTE *)(a1 + 12392);
  v3 = FIELD_F32(a1, 124);
  if ( v3 < -1.5 )
  {
    v3 = -1.5;
    FIELD_U32(a1, 124) = -1077936128;
  }
  v4 = FIELD_U32(a1, 9936);
  if ( (unsigned int)(v4 - 1) <= 2 )
  {
    *v2 = 1;
    FIELD_U32(a1, 12064) = 30;
    if ( FIELD_U32(a1, 12412) )
    {
      if ( v3 < -0.5 )
        FIELD_U32(a1, 124) = -1090519040;
    }
  }
  if ( v4 == 2 )
  {
    FIELD_U32(a1, 9940) = 3;
    FIELD_U32(a1, 12396) = 1;
    SE_PLY_THROW_ICEBALL_ref(a1, 0);
    PlayerBase_dispatchVirtual3(a1 + 11356, 34, 4.0);
    FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
    FIELD_U32(a1, 12048) = FIELD_U32(a1, 80);
  }
  else
  {
    v5 = v4 != 3;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) == 1 )
    {
      if ( sub_6079DF08(a1) )
      {
        v6 = 2;
        if ( sub_6079B7A4(a1) )
          v6 = 3;
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v6 = 1;
      if ( FIELD_U32(a1, 1320) != 5 && !sub_6075EE0C(a1) )
        v6 = sub_6075EDF8(a1);
    }
    ((void (__fastcall *)(int, int, _BOOL4))loc_607BBBF8)(a1, v6, v5);
  }
  result = FIELD_U8(a1, 6902);
  if ( (result & 4) != 0 )
  {
    result = FIELD_U8(a1, 6914);
    if ( (result & 4) == 0 )
      JUMPOUT(0x607BC154);
  }
  return result;
}
